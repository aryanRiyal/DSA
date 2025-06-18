#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next;
};

void midpoint(Node * head) {
    if(head == NULL) {
        return;
    }
    Node * slow = head;
    Node * fast = head->next;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data<<endl;
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
    midpoint(head);
    return 0;
}
