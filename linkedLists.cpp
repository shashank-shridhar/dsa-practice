#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node* prev;
        Node()
        {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

int singlyLinkedList(){

    Node *head = new Node();
    Node *middle = new Node();
    Node *tail = new Node();

    head->data = 1;
    head->next = middle;

    middle->data = 2;
    middle->next = tail;

    tail->data = 3;
    tail->next = NULL;

    return 0;

}

int doublyLinkedList(){
    Node* head = NULL;
    Node* middle = NULL;
    Node* tail = NULL;

    head = new Node();
    middle = new Node();
    tail = new Node();

    head->data = 1;
    head->next = middle;
    
    middle->data = 2;
    middle->next = tail;
    middle->prev = head;

    tail->data = 3;
    tail->next = NULL;
    tail->prev = middle;

    return 0;

}

int printList(Node* n){
    while(n!=NULL){
        cout<< &(n->next) <<endl;
        n = n->next;
    }
    return 0;
}

int insertHead(Node** head, int data)
{
    //Step 1: Allocate new node
    Node* newNode = new Node();
    //Step 2: put in the data
    newNode->data = data;

    //Step 3: make new Node point to head
    newNode->next = *head;
    //Step 4: make new Node head
    *head = newNode;

}

int insertTail(Node** head, int data)
{
    //Step 1: Allocate new node and tail node
    Node* newNode = new Node();
    Node* tail = new Node();

    //Step 2: insert data into new Node
    newNode->data = data;

    //Step 3: Make it point to NULL
    newNode->next = NULL;

    //Step 4: if list is empty, make it as head
    if(*head == NULL){
        *head = newNode;
        return;
    }
    //Step 5: if the list is not empty, then traverse the list and make tail point to new Node
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = newNode;
    return;
}

int insertNode(Node* prevNode, int data){
    // Step1: Allocate nodes for newNode and reference to mid
    Node* newNode = new Node();
    
    if(prevNode == NULL){
        cout<<"Cannot be inserted";
        return;
    }
    prevNode->next = newNode;

    
}
