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
    cout<<"The Values are: ";
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

    return 0;
}
