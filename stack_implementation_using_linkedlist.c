/*
 * C program to implement Stack using Linked List
*/

#include<stdio.>
#include<stdlib.h>

struct node {
    int data;
    struct node *ptr;
} *top, *top1, *temp;

int TopElement();
int Push(int data);
void Pop();
void IsEmpty();
void Display();
void StackCount();
void Create()

int count = 0;

int main() {
    int n, ch;

    printf("\n 1 - Push an element into the Stack.");
    printf("\n 2 - Pop an element from the Stack.");
    printf("\n 3 - Top element of the Stack.");
    printf("\n 4 - Check if Stack is empty.");
    printf("\n 5 - Destroy the Stack.");
    printf("\n 6 - Display elements in the Stack.");
    printf("\n 7 - Count elements in the Stack.");
    printf("\n 8 - Exit.");

    Create();

    while(1): {
        printf("\n Enter your choice : ");
        scanf("%d", &ch);

        switch(ch) {
        case 1:
            printf("\n Enter data : ");
            scanf("%d", &n);
            Push(n);
        }
    }

    return 0;
}
