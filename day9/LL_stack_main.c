#include "linked_list1.h"
#include <stdio.h>

int main()
{
    Node *head = NULL;
    char searchData[32] = "";
    int choice = 0, position = 0;
    do
    {
        puts("\n1:Insert 2:delete 3:Display 4:Exit.   Your choice? ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = addAtFront(head);
            break;
        case 2:
            head = deleteFromRear(head);
            break;
        case 3:
            displayList(head);
            break;
        case 4:
            choice = 0;
            break;
        default:
            puts("Invalid choice");
        }

    } while (choice != 0);
    deleteAllNodes(head);
    puts("End of program");
}