typedef struct Node
{
    char data[32];
    struct Node *link;
} Node;

Node *addAtFront(Node *);
Node *deleteFromRear(Node *);
Node *createNode();