#ifndef LINKLIST_H
#define LINKLIST_H

template <class T>
class Node {
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
    Node* getNext(){
        return next;
    }
    Node * getPrev(){
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
