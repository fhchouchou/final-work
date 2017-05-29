#include <stdio.h>
#include <stdlib.h>

typedef int Datatype;
struct Node;
typedef struct Node *PNode;
struct Node
 {
    Datatype info;
    PNode link;
 }; 

struct LinkQueue
{
    PNode f;
    PNode r;

};

typedef  struct LinkQueue *PLinkQueue;
//创建一个空队列
PLinkQueue createEmptyQueue_link();
//判断队列是否为空
int isEmptyQueue_link(PLinkQueue plqu);
//进队列
void enQueue_link(PLinkQueue plqu,Datatype x);
//出对列
void deQueue_link(PLinkQueue plqu);
//在非空队列中求对头元素
Datatype frontqueue_link(PLinkQueue plqu);
