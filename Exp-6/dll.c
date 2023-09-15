#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

Node *head = NULL;
void insertAtBeginning(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}
void insertAtEnd(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void insertAtPos(int data, int pos) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    if (pos == 1) {
        insertAtBeginning(data);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }
    newNode->prev = temp;
    newNode->next = temp->next;
        if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}
void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    Node *temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
}
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
}
void deleteAtPos(int pos) {
  if (head == NULL) {
      printf("List is empty\n");
      return;
  }
  if (pos == 1) {
      deleteFromBeginning();
      return;
  }
  Node *temp = head; 
  for (int i=1; i<pos && temp!=NULL; i++) { 
      temp=temp->next; 
  } 
  if(temp==NULL){
      printf("Invalid position\n");
      return; 
  } 

  temp->prev->next=temp->next; 

  if(temp->next!=NULL){ 
      temp->next->prev=temp->prev; 
  } 
  free(temp); 
}
void display() {
   if(head==NULL){
       printf("List is empty\n");
       return; 
   } 
   Node*temp=head; 
   while(temp!=NULL){ 
       printf("%d ",temp->data); 
       temp=temp->next; 
   } 
   printf("\n"); 
}