#ifndef LINKLIST_H
#define LINKLIST_H

template <class T>
class LinkList;

template<class T>
class Node {
    friend class LinkList<T>;
private:
    T data;
    Node<T>* next;
    Node<T> * prev;

public:
    Node(T data){
        next = nullptr;
        prev = nullptr;
        this->data = data;
    }

    /// Setters
    void setData(T data) {
        this->data = data;
    }
    void setNext(Node<T> * nextNode){
        this->next = nextNode;
    }
    void setPrev(Node<T> * previousNode){
        this->prev = previousNode;
    }

    /// Getters
    T getData(){
        return data;
    }
    Node<T>* getNext(){
        return next;
    }
    Node<T>* getPrev(){
        return prev;
    }

};

template <class T>
class LinkList {
private:
    Node<T> * head;
    Node<T> * tail;
    int size;

public:
    LinkList<T>() {
        size = 0;
        head = nullptr;
        tail = nullptr;
    }
    // LinkList<T>(LinkList const& d) {

    //     this->size = 0;
    //     this->headNode = nullptr;
    //     this->tailNode = nullptr;

    //     Node<T> *tmp = d.tailNode;

    //     while (tmp != nullptr) {
    //         this->pushBack(tmp->getData());
    //         tmp = tmp->getNextNode();
    //     }

    // }

    /// Push Back
    void pushBack(T data){
        Node<T> *tmp = new Node<T> (data);
        tmp->setPrev(tail);

        if (tail != nullptr)
            tail->setNext(tmp);

        tmp->setNext(nullptr);
        tail = tmp;
        size++;

        if (head == nullptr)
            head = tmp;

    }

    ///Pop Back
    bool popBack(){
        if (size != 0) {
            Node<T> * tmp = tail;

            if (tmp->getPrev() != nullptr) {
                tail = tmp->getPrev();
                tail->setNext(nullptr);

            } else {
                head = nullptr;
                tail = nullptr;
            }
            delete tmp;
            size --;
            return true;
        }

        return false;
    }

    void makeLoop () {
        tail->setNext(head);
        head->setPrev(tail);
    }

    bool isLooped () {
        if(tail->getNext() == head)
            return true;
        return false;
    }

    void breakLoop () {
        tail->setNext(nullptr);
        head->setPrev(nullptr);
    }

    bool isAvailble (T data) {
        Node<T> *tmp = head;
        if(tail->getData() == data) return true;

        while(tmp->getNext() != head || tmp != nullptr) {
            if(tmp->getData() == data)
                return true;
            tmp = tmp->getNext();
        }
        return false;
    }

    Node<T>* find (T data) {
        Node<T> *tmp = head;
        if(tail->getData() == data) return tail;

        while(tmp->getNext() != head || tmp != nullptr) {
            if(tmp->getData() == data)
                return tmp;
            tmp = tmp->getNext();
        }
        return tmp;
    }

    void deleteData (Node<T>** data) {
        if(size == 1) {
            head = nullptr;
            tail = nullptr;
            delete (*data);
        }
        else if((*data) == head) {
            Node<T> * tmp = head->next;
            tmp->prev = nullptr;
            head = head->next;
            delete (*data);
            // delete data;
        }
        else {
            (*data)->getPrev()->setNext((*data)->getNext());
            (*data)->getNext()->setPrev((*data)->getPrev());
            delete *data;
        }
        size --;
    }

    /// Getter
    Node<T> * getTail(){
        return tail;
    }
    Node<T> * getHead(){
        return head;
    }
    int getSize() {
        return size;
    }

    /// Setters
    void setHead(Node<T>* data){
        head = data;
    }

};


#endif // LINKLIST_H
