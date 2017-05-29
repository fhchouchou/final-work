#include "include/my_queue.h"

#include <iostream>
using namespace std;
int main(){
     PLinkQueue p=createEmptyQueue_link();	cout<<"初始化链队列"<<endl;
     enQueue_link(p,5);		cout<<"插入5:"<<endl;
     enQueue_link(p,15);	cout<<"插入15:"<<endl;
     enQueue_link(p,35);	cout<<"插入35:"<<endl;
     cout<<"队头:";	frontqueue_link(p);
     deQueue_link(p);cout<<"删除队头:"<<endl;
     cout<<"队头:";	frontqueue_link(p);
     cout<<"队列测试完毕!!!!"<<endl;
    return 0;
}
