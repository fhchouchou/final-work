#include <time.h>
#include <stdlib.h>
#include "include/my_Btree.h"
#include <stdio.h>

int main()
{	
	BiTree T;
	printf("测试数据:ABC##DE#G##F###\n");
	CreateBiTree(T);
	printf("先序遍历：\n");
	PreOrder(T);
	printf("\n");
	printf("先序遍历(非递归)：\n");
	PreOrder2(T);
	printf("\n");
	printf("中序遍历：\n");
	InOrder(T);
	printf("\n");
	printf("中序遍历(非递归)：\n");
	InOrder2(T);
	printf("\n");
	printf("后序遍历：\n");
	PostOrder(T);
	printf("\n");
	printf("后序遍历(非递归)：\n");
	PostOrder2(T);
	printf("\n");
	printf("层次遍历：\n");
	LevelOrder(T);
	printf("二叉树测试完毕!!!\n");
    	return 0;
}
