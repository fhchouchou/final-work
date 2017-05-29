#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#define  TRUE  1
#define  FALSE 0
#define  OK    1
#define  ERROR 0
#define  INFEASIBLE -1
#define  OVERFLOW   -2
#define  STACK_INIT_SIZE  100
#define  STACKINCREMENT    10
typedef  int  ElemType;
typedef  int    Status;
using namespace std;
typedef struct
{
    ElemType *base;
    ElemType  *top;
    int  stacksize;
}SqStack;

//初始化
Status InitStack(SqStack &S);
//销毁栈
Status DestroyStack(SqStack &S);
//清空栈
Status ClearStack(SqStack &S);
//判断栈空
Status StackEmpty(SqStack S);
//栈长
Status StackLength(SqStack S);
//栈顶元素
Status GetTop(SqStack S, ElemType &e);
//压栈
Status Push(SqStack &S, ElemType &e);
//弹栈
Status Pop(SqStack &S, ElemType &e);
//遍历
Status StackTraverse(SqStack S);

