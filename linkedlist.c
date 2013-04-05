#include <stdio.h>
#include <stdlib.h>


struct Node {

    int data;
    struct Node *next;
};

typedef struct Node LLNode;

LLNode* insertFront( LLNode *head, LLNode *node ) {

    if ( node == NULL ) {
        return head;
    }

    if ( head == NULL ) {

        head = node;

    } else {

        node->next = head;
        head = node;
    }
    return head;
}

LLNode *getLLNode ( int data ) {

    LLNode *node = (LLNode * )malloc(sizeof(LLNode));

    if (node == NULL ) {
        return NULL;
    }
    node->data = data;
    node->next = NULL;

    return node;
}

void LLDisplay(LLNode *head) {

    if ( head == NULL ) {

        printf("List is empty");
        return;
    }

    while(head != NULL) {

        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}


// testing
int main() {

    int data[] = {12, 22, 23, 26, 11, 10};

    int i = 0;

    LLNode *head = NULL;
    LLNode *node = NULL;

    for ( i = 0; i < 6; i++ ) {
        printf("Inserting %d at position %d \n", data[i], i+1);
        node = getLLNode(data[i]);
        head = insertFront(head, node);
    }

    LLDisplay(head);
    return 0;
}
