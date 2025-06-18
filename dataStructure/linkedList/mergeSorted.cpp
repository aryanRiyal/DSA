#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next;
};

Node * mergeSorted(Node * head1, Node * head2) {
    Node * finalh = NULL;
    Node * finalt = NULL;
    while(head1 != NULL && head2 != NULL) {
        if(head1->data < head2->data) {
            if(finalh != NULL) {
                finalt->next = head1;
                finalt = finalt->next;
            }
            else {
                finalh = head1;
                finalt = head1;
            }
            head1 = head1->next;
        }
        else {
            if(finalh != NULL) {
                finalt->next = head2;
                finalt = finalt->next;
            }
            else {
                finalh = head2;
                finalt = head2;
            }
            head2 = head2->next;
        }
    }
    while(head1 != NULL) {
        if(finalh != NULL) {
            finalt->next = head1;
            finalt = finalt->next;
        }
        else {
            finalh = head1;
        }
        head1 = head1->next;
    }
    while(head2 != NULL) {
        if(finalh != NULL) {
            finalt->next = head2;
            finalt = finalt->next;
        }
        else {
            finalh = head2;
        }
        head2 = head2->next;
    }
    return finalh;
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
    Node * head1 = takeInput();
    Node * head2 = takeInput();
    print(head1);
    print(head2);
    Node * head3 = mergeSorted( head1, head2);
    print(head3);
    return 0;
}
