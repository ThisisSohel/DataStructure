#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;

void addToLast(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void printList() {
    Node* temp = head;
    cout<<"The Values are before delete: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void deleteLast(){
    if(head == NULL){
        return;
    }else if(head->next == NULL){
       Node*deleteNode = head;
       head = NULL;
       free(deleteNode);
       cout<<"Deleted!";
    }
    Node*cur = head;
    while(cur->next->next != NULL){
        cur = cur->next;
    }
    free(cur->next);
    cur->next = NULL;
}
void printList1() {
    Node* temp = head;
    cout<<"\nThe Values are after node delete : ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    head = NULL;
    /*for(int i=1; i<=10; i++){
        addToLast(i);
    }*/
    addToLast(1);
    addToLast(2);
    addToLast(3);
    addToLast(4);
    printList();
    deleteLast();
    printList1();

    return 0;
}

