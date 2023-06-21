// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
typedef struct DoublyNode {
    int data;
    struct DoublyNode* next;
    struct DoublyNode* prev;
} DoublyNode;

int main() {
    DoublyNode* head = NULL;
    for (int i = 2; i < 50; ++i) {
        DoublyNode* tmp = (DoublyNode*)malloc(sizeof(DoublyNode));
        tmp->data = i;
        tmp->prev = NULL;
        tmp->next = head;
        head = tmp;
    }
    DoublyNode* tmp = head;
     int maxElem = 0;
     int minElem = NULL;
     while(tmp){
        if(minElem > tmp->data){
            minElem = tmp->data;
        }
        if(maxElem<tmp->data){
             maxElem = tmp->data;
        }
        if(minElem == NULL){
             minElem = tmp->data;
         }
        tmp=tmp->next;
    }
    DoublyNode* newElem = (DoublyNode*)malloc(sizeof(DoublyNode));
    newElem->data = maxElem*minElem;
    newElem->prev = NULL;
    newElem->next = head;
    head = newElem;
    tmp = head;
    while(tmp){
        printf("%d\n",tmp->data);
        tmp=tmp->next;
     }
    return 0;
}