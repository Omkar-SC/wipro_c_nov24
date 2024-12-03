#include "LL_stack.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Node *createNode()
{
    Node *newNode = (Node *)malloc(sizeof(Node)); // allocate memory in Heap for a new structure (Node)
    newNode->link = NULL;                         // make the link pointer inside the Node (structure) as NULL
    printf("Add data of new node: ");             // Read data of the structure (Node)
    scanf("%s", newNode->data);                   // &newNode->data[0]
    return newNode;                               // return address of the new Node
}

Node *addAtFront(Node *head)
{
    Node *newNode = createNode();
    if (head == NULL)   // if list is empty
        return newNode; // make the new node as 1st node of the list
    newNode->link = head;
    head = newNode;
    return head;
}

Node *deleteFromRear(Node *head)
{
    if (head == NULL)
    {
        puts("List is empty");
        return NULL;
    }
    Node *temp1 = head, *temp2 = NULL;
    while (temp1->link != NULL) // until last node is not reached
    {
        temp2 = temp1;
        temp1 = temp1->link; // traverse to next node
    }
    if (temp2 == NULL)
    {                                                           // if there was only one node in the list
        printf("Node with data %s is deleted \n", temp1->data); //
        free(temp1);                                            // delete the node of the list
        return NULL;                                            // because after deleting the only node in the list, now the list is empty
    }
    printf("Node with data %s is deleted \n", temp2->link->data);
    free(temp1);        // free(temp2->link); Last node is deleted
    temp2->link = NULL; // make the last but node as last node of the linked list
    return head;
}