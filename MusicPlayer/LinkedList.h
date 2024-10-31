#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class T>
class Node {
private :
    T data;
    Node<T> *next;
    Node<T> *prev;
public:
    T getData() const {
        return data;
    }

    Node<T> *getNext() {
        return next;
    }

    Node<T> *getPerv() {
        return prev;
    }

    void setPrev (Node<T> *newPrev) {
        prev = newPrev;
    }
    void setNext (Node<T> *newNext) {
        next = newNext;
    }
    void setData (T newData) {
        data = newData;
    }

};

template <class T>
class LinkedList {
private:
    Node<T> header;
    Node<T> trailer;
    Node<T> *tail;
    int size;

public:
    LinkedList <T>() {
        size = 0;
        header.setNext(&trailer);
        header.setPrev(nullptr);
        trailer.setNext(nullptr);
        tail = nullptr;
        trailer.setPrev(&header);
    }

    // ~LinkedList <T>() {
    //     Node <T>*tmp = header.getNext();
    //     while (tmp != &trailer) {
    //         Node <T>*tmp1 = tmp->getNext();
    //         delete tmp;
    //         tmp = tmp1;
    //     }
    //     header.setNext(&trailer);
    //     trailer.setPrev(&header);
    // }

    Node<T> *getHeader() {
        return &header;
    }

    Node<T> *getTrailer() {
        return &trailer;
    }

    int getSize (){
        return size;
    }

    void pushBack(T data) {
        if (size == 0) {
            pushFront(data);
            return;
        }

        Node<T> *newNode = new Node<T>;
        newNode->setData(data);


        tail->setNext(newNode);
        newNode->setPrev(tail);
        newNode->setNext(&trailer);
        trailer.setPrev(newNode);
        tail = newNode;
        size++;

    }

    void pushFront(T data) {
        Node<T> *newNode = new Node<T>;
        newNode->setData(data);

        if (size == 0) {
            tail = newNode;
            newNode->setNext(&trailer);
            trailer.setPrev(newNode);
        }
        newNode->setNext(header.getNext());
        header.getNext()->setPrev(newNode);
        newNode->setPrev(&header);
        header.setNext(newNode);
        size++;

    }

};

#endif // LINKEDLIST_H
