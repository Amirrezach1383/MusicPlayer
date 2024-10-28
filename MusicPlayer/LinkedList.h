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
        header.next = &trailer;
        header.prev = nullptr;
        trailer.next = nullptr;
        tail = nullptr;
        trailer.prev = &header;
    }

    ~LinkedList <T>() {
        Node <T>*tmp = header.next;
        while (tmp != &trailer) {
            Node <T>*tmp1 = tmp->next;
            delete tmp;
            tmp = tmp1;
        }
        header.next = &trailer;
        trailer.prev = &header;
    }

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
        newNode->data = data;


        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = &trailer;
        trailer.prev = newNode;
        tail = newNode;
        size++;

    }

    void pushFront(T data) {
        Node<T> *newNode = new Node<T>;
        newNode->data = data;

        if (size == 0) {
            tail = newNode;
            newNode->next = &trailer;
            trailer.prev = newNode;
        }
        newNode->next = header.next;
        header.next->prev = newNode;
        newNode->prev = &header;
        header.next = newNode;
        size++;

    }

};

#endif // LINKEDLIST_H
