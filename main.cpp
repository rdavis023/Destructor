#include <iostream>
using namespace std;

LinkedList(int value) {
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

~LinkedList(){
    Node* temp = head;
    while(head){
        head = head->next;
        delete temp;
        temp = head;
    }
}

LinkedList* myLinkedList = new LinkedList(4);

delete myLinkedList;
