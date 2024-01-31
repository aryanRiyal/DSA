#include <iostream>
using namespace std;
#include "Node.cpp"

/*
struct Node {
    int data;
    Node * next;
};
*/

Node * deleteNode(Node * head, int i) {
    if(head == NULL) {
        return NULL;
    }
    if(i>=1) {
        Node * temp = head;
        int count = i-1;
        while(temp->next != NULL && count) {
            temp = temp->next;
            --count;
        }
        if(temp->next == NULL) {
            cout<<"Invalid Input: Index"<<endl<<endl;
            return head;
        }
        Node * prevNext = temp->next->next;
        temp->next = prevNext;
        return head;
    }
    else if(i==0) {
        Node * temp = head;
        Node * newHead = temp->next;
        return newHead;
    }
    else {
        cout<<"Invalid Input: Index"<<endl<<endl;
        return head;
    }
}


Node * insertNode(Node * head, int i, int data) {
    if(i>=1) {
        Node * temp = head;
        int count = i-1;
        while(temp->next != NULL && count) {
            temp = temp->next;
            --count;
        }
        if(temp->next == NULL && count != 0) {
            cout<<"Invalid Input: Index"<<endl<<endl;
            return head;
        }
        Node * newNode = new Node(data);
        Node * prevNext = temp->next;
        temp->next = newNode;
        newNode->next = prevNext;
        return head;
    }
    else if(i==0) {
        Node * temp = head;
        Node * newNode = new Node(data);
        newNode->next = temp;
        return newNode;
    }
    else {
        cout<<"Invalid Input: Index"<<endl<<endl;
        return head;
    }
}

Node * takeInput() {
    int data;
    cin>>data;
    Node * head = NULL;
    Node * tail = NULL;
    while(data != -1){
        Node * newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = head;
        }
        else {
            /*
               while(temp->next != NULL) {
               temp = temp->next;
               }
               */
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

void print(Node * head) {
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node * head = takeInput();
    print(head);
    int i,data;
    cout<<"index: ";
    cin>>i;
    cout<<"data: ";
    cin>>data;
    head = insertNode( head, i, data);
    print(head);
    cout<<"index: ";
    cin>>i;
    head = deleteNode( head, i);
    print(head);

    /*
    //Statically
    Node n1(1);
    Node * head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(head);
    //cout<<n1.data<<" "<<n2.data<<endl;
    */

    /*
    //Dynamically
    Node *n3 = new Node(10);
    Node *head = n3;
    Node *n4 = new Node(20);
    n3->next = n4;
    */
    return 0;
}
