#include "include/my_stack.h"
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


//初始化栈
Status InitStack(SqStack &S)
{
    S.base = (ElemType*)malloc(STACK_INIT_SIZE*sizeof(ElemType));
    if (!S.base)
        exit(OVERFLOW);//存储分配失败
    S.top = S.base;
    S.stacksize = STACK_INIT_SIZE;
    return OK;
}

//销毁栈
Status DestroyStack(SqStack &S)
{
    S.top = NULL; 
    S.stacksize = 0; 
    free(S.base); 
    return OK;
}

//清空栈
Status ClearStack(SqStack &S)
{
    S.top = S.base;
    return OK;
}

//判断栈空
Status StackEmpty(SqStack S)
{
    if (S.top == S.base)
        return ERROR;
    else
        return TRUE;
}

//栈长
Status StackLength(SqStack S)
{
    if (S.top == S.base)
        return FALSE;
    else
        return (S.top - S.base);//也可以直接返回S.top - S.base
}

//栈顶元素
Status GetTop(SqStack S, ElemType &e)
{
    if (S.top == S.base)
        return FALSE;
    else
        e = *(S.top - 1);
    return e;
}

//压栈
Status Push(SqStack &S, ElemType &e)
{
    if (S.top - S.base >= STACK_INIT_SIZE)
    {
        S.base = (ElemType *)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(ElemType));
        if (!S.base)
        {
            return false;
        }
        S.top = S.base + STACK_INIT_SIZE;//栈底地址可能改变，重新定位栈顶元素
        S.stacksize = S.stacksize + STACKINCREMENT;
    }
    *S.top = e;
    S.top++;
    return OK;
}

//弹栈
Status Pop(SqStack &S, ElemType &e)
{
    if (S.top == S.base)
        return ERROR;
    else
    {
        S.top--;
        e = *S.top;//说明：此处容易使人迷惑，实际上此元素并没真正删除，仍在S.top中，但是如果插入元素，就会被更新，就像是删除了一样
        return e;
    }
}

//遍历
Status StackTraverse(SqStack S)
{
    if (S.base == NULL)
        return ERROR;
    if (S.top == S.base)
        cout << "栈中没有元素" << endl;
    ElemType *p;
    p = S.top;
    while (p > S.base)
    {
        p--;
        cout << *p << " ";
    }

    return OK;
}
