#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next;
};

Node * newNode( int data, Node * prevNext) {
    Node * newNode = new Node();
    newNode->data = data;
    newNode->next = prevNext;
    return newNode;
}

Node * insertNode( Node * head, int count, int data) {
    if(head == NULL || count == 0) {
        return newNode( data, head);
    }
    head->next = insertNode( head->next, count-1, data);
    return head;
}

Node * deleteNode( Node * head, int count) {
    if(head == NULL) {
        return head;
    }
    if(count == 0) {
        return head->next;
    }
    head->next = deleteNode( head->next, count-1);
    return head;
}

Node * takeInput() {
    int data;
    cin>>data;
    Node * head = NULL;
    Node * tail = NULL;
    while(data != -1){
        Node * newNode = new Node();
        newNode->data = data;
        if(head == NULL) {
            head = newNode;
            tail = head;
        }
        else {
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
    int data, i;
    Node * head = takeInput();
    print(head);
    cout<<"Index: ";
    cin>>i;
    //cout<<"Data: ";
    //cin>>data;
    //head = insertNode( head, i, data);
    head = deleteNode( head, i);
    print(head);
    return 0;
}
