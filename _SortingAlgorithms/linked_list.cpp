#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

/* INSERT node at the beginning of the Linked List */
Node* Insert(Node* head, int value) {
    Node* temp = new Node();
    temp->data = value;
    if(head != NULL)    temp->next = head;
    head = temp;
    return head;
}

/* Utility function Print to print all nodes of the Linked List */
void Print(Node* head) {
    cout << "List is: ";
    while(head != NULL) {
        cout << "->" << head->data;
        head = head->next;
    }
    cout << endl;
    delete head;
}

int main() {
    Node* head = nullptr;     // empty list
    int n, value;
    cout << "Enter number of nodes...\n";
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> value;
        head = Insert(head, value);
        Print(head);
    }
}
