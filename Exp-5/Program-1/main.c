#include "arraylist.h"
#include <stdio.h>

int main() {
    arrayL al;
    int choice, data, pos;

    Create_AL(&al);

    while (1) {
        printf("\n===============Menu:===============\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at position\n");
        printf("3. Delete at beginning\n");
        printf("4. Delete at position\n");
        printf("5. Print list\n");
        printf("6. Exit\n");
        printf("==============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("==============================\n");
                printf("Enter data to insert: ");
                scanf("%d", &data);
                InsertAtBeg_AL(&al, data);
                printf("==============================\n");
                printf("Data added to the Beginning position\n");
                printf("==============================\n");
                break;
            case 2:
                printf("==============================\n");
                printf("Enter position to insert: ");
                scanf("%d", &pos);
                printf("Enter data to insert: ");
                scanf("%d", &data);
                InsertAtPos_AL(&al, pos, data);
                printf("==============================\n");
                printf("Data added to the position %d\n",pos);
                printf("==============================\n");
                break;
            case 3:
                printf("==============================\n");
                DeleteAtBeg_AL(&al);
                printf("Data is delete from the Beginning position\n");
                printf("==============================\n");
                break;
            case 4:
                printf("==============================\n");
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                DeleteAtPos_AL(&al, pos);
                printf("Data is delete from the position %d\n",pos);
                printf("==============================\n");
                break;
            case 5:
                printf("==============================\n");
                printf("Linked List Status:\n");
                Print_AL(&al);
                printf("==============================\n");
                break;
            case 6:
                printf("==============================\n");
                printf("Exiting.....\n");
                printf("==============================\n");
                return 0;
            default:
                printf("==============================\n");
                printf("Invalid choice\n");
                printf("==============================\n");
        }
    }
    return 0;
}