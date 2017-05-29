#include <stdio.h>
#include <iostream>
#include "include/my_stack.h"

int main()
{
    SqStack S;
    cout << "初始化空栈:" << endl;
    InitStack(S);
    int i,n ;
    cout << "输入栈的长度:" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << "输入栈的第" << i << "个元素" << endl;
        ++S.top;
        cin >> *(S.top-1);
    }
    cout << "栈空?:" << endl;
    if (StackEmpty(S) == 1)
        cout << "NO !" << endl;
    else
        cout << "YES!" << endl;
    cout << "栈长:" << endl;
    int m;
    m = StackLength(S);
    cout << "栈的长度是:" << endl;
    cout << m << endl;
    cout << "遍历栈:" << endl;
    StackTraverse(S);
    cout << endl;
    cout << "栈顶元素:" << endl;
    int e;
    e = GetTop(S, e);
    cout << "栈顶元素是:" << endl;
    cout << e << endl;
    cout << "栈顶插入元素:" << endl;
    cout << "请输入要插入的元素的数值:" << endl;
    cin >> e;
    Push(S,e);
    cout << "现在栈中的元素是:" << endl;
    StackTraverse(S);
    cout << endl;
    cout << "删除栈顶元素" << endl;
    e = Pop(S,e);
    cout << "被删除的元素是:" << endl;
    cout << e << endl;
    cout << "现在栈中的元素是:" << endl;
    StackTraverse(S);
    cout << endl;
    cout << "清空栈:" << endl;
    ClearStack(S);
    cout << "现在栈中的元素是:" << endl;
    StackTraverse(S);
    cout << "销毁栈" << endl;
    if(DestroyStack(S)==1)
        cout << "销毁栈成功" << endl;
    else
        cout << "销毁栈失败" << endl;
    cout << "栈测试完成!!!!\n\n\n" << endl;
    return 0;
}
