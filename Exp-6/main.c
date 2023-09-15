#include <stdio.h>
#include <stdlib.h>
#include "dll.h"
#include "dll.c"
int main() {

   int choice,data,pos;

   while(1){

       printf("\n1. Insert at the beginning\n2. Insert at the end\n3. Insert at a specific position\n4. Delete from the beginning\n5. Delete from the end\n6. Delete from a specific position\n7. Display\n8. Exit\nEnter your choice: ");
       scanf("%d",&choice);

       switch(choice){

           case 1:
               printf("Enter the data to insert: ");
               scanf("%d",&data);
               insertAtBeginning(data);
               break;

           case 2:
               printf("Enter the data to insert: ");
               scanf("%d",&data);
               insertAtEnd(data);
               break;

           case 3:
               printf("Enter the data to insert: ");
               scanf("%d",&data);
               printf("Enter the position to insert: ");
               scanf("%d",&pos);
               insertAtPos(data,pos);
               break;

           case 4:
               deleteFromBeginning();
               break;

           case 5:
               deleteFromEnd();
               break;

           case 6:
               printf("Enter the position to delete: ");
               scanf("%d",&pos);
               deleteAtPos(pos);
               break;

           case 7:
               display();
               break;

           case 8:
               exit(0);

           default:
               printf("Invalid choice!\n");
       }
   }

   return 0;
}