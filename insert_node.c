#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* addToBeginning(struct Node* head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return head; 
    }

   
    newNode->data = newData;
    newNode->next = head;
    head = newNode;

    return head;
}

void printList(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int newData, nodes,i;

    printf("Enter the number of nodes: ");
    scanf("%d", &nodes);
    for (i = 0; i < nodes; ++i) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newData);
        head = addToBeginning(head, newData);
    }

    printf("Linked List: ");
    printList(head);

    return 0;
}

