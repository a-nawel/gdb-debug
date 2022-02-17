//linkedlist.cpp - version 1
#include <iostream>
#include "linkedlist.h"
using namespace std;

//In the version 1 of our implementation, we'll represent a 
//linked list as just a pointer to the first node

Node* addToFrontOfList(Node* h, string value){
    //Create a new node on the heap and link it to the first node.
    Node* new_node = new Node {value, h};

     return new_node;
    //return new Node {value, head};

}

void printList(Node* head){
    Node* tp = head;
    //while(tp){ // tp is not nullptr
        cout<<tp->data;
        //fix the fence post problem
        // not the last node
        if(tp->next) cout<<", ";
        tp = tp->next;
    //}
    cout<<endl;

}

int main(int argc, char const *argv[])
{
    string cs24_TAs[] = {"Lucas", "Nawel", "Bowen", "Jack", "April", "Vanessa"}; 
    //Simplest possible linked list
    Node* head = nullptr; //empty linked list (no nodes) don't use NULL
    //C++11 shorthand for iterating over arrays
    for(string elem : cs24_TAs){
        head = addToFrontOfList(head, elem);
        head = 0;
        printList(head);
    } 

    return 0;
}