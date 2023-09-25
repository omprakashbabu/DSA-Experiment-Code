#ifndef QUEUE_LL_H
#define QUEUE_LL_H
struct queue_Node {
    int key;
    struct queue_Node* next;
};
struct Queue {
    struct queue_Node *front, *rear;
};
struct queue_Node* newNode(int k);
struct Queue* createQueue();
void enQueue(struct Queue* q, int k);
void deQueue(struct Queue* q);
#endif