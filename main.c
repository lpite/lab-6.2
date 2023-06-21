#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node* head = NULL;
    for (int i = 2; i < 50; ++i) {
        Node* tmp = (Node*)malloc(sizeof(Node));
        tmp->data = i;
        tmp->next = head;
        head = tmp;
    }
    Node* tmp = head;
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
    Node* newElem = (Node*)malloc(sizeof(Node));
    newElem->data = maxElem*minElem;
    newElem->next = head;
    head = newElem;
    tmp = head;
    while(tmp){
        printf("%d\n",tmp->data);
        tmp=tmp->next;
     }
    return 0;
}
