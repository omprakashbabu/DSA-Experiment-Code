#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

void Create_LL(linkedL *ll) {
    ll->head = NULL;
    ll->size = 0;
}

void InsertAtBeg_LL(linkedL *ll, int data) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = ll->head;
    ll->head = new_node;
    ll->size++;
}

void InsertAtPos_LL(linkedL *ll, int pos, int data) {
    if (pos < 1 || pos > ll->size + 1) {
        printf("Invalid position\n");
        return;
    }
    if (pos == 1) {
        InsertAtBeg_LL(ll, data);
        return;
    }
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    node *curr = ll->head;
    for (int i = 1; i < pos - 1; i++) {
        curr = curr->next;
    }
    new_node->next = curr->next;
    curr->next = new_node;
    ll->size++;
}

void DeleteAtBeg_LL(linkedL *ll) {
    if (ll->size == 0) {
        printf("List is empty\n");
        return;
    }
    node *temp = ll->head;
    ll->head = ll->head->next;
    free(temp);
    ll->size--;
}

void DeleteAtPos_LL(linkedL *ll, int pos) {
    if (pos < 1 || pos > ll->size) {
        printf("Invalid position\n");
        return;
    }
    if (ll->size == 0) {
        printf("List is empty\n");
        return;
    }
    if (pos == 1) {
        DeleteAtBeg_LL(ll);
        return;
    }
    node *curr = ll->head;
    for (int i = 1; i < pos - 1; i++) {
        curr = curr->next;
    }
    node *temp = curr->next;
    curr->next = temp->next;
    free(temp);
    ll->size--;
}

void Print_LL(linkedL *ll) {
   if(ll -> size == 0){
      printf("List is empty\n");
      return ;
   }
   printf("List: ");
   for(node* curr=ll -> head; curr!=NULL; curr=curr -> next){
      printf("%d-> ",curr -> data);
   }
   printf("NULL\n");
}