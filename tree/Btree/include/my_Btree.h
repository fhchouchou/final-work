#include<iostream>
#include<stack>
#include<queue>
#include <stdio.h>
#include<malloc.h>
using namespace std;

//二叉树结点
typedef struct BiTNode{
	//数据
	char data;
	//左右孩子指针
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

//按先序序列创建二叉树
int CreateBiTree(BiTree &T);

//输出
void Visit(BiTree T);

//先序遍历
void PreOrder(BiTree T);

//中序遍历  
void InOrder(BiTree T);


//后序遍历
void PostOrder(BiTree T);

/* 先序遍历(非递归)
   思路：访问T->data后，将T入栈，遍历左子树；遍历完左子树返回时，栈顶元素应为T，出栈，再先序遍历T的右子树。
*/
void PreOrder2(BiTree T);

/* 中序遍历(非递归)
   思路：T是要遍历树的根指针，中序遍历要求在遍历完左子树后，访问根，再遍历右子树。
         先将T入栈，遍历左子树；遍历完左子树返回时，栈顶元素应为T，出栈，访问T->data，再中序遍历T的右子树。
*/
void InOrder2(BiTree T);

//后序遍历(非递归)
typedef struct BiTNodePost{
	BiTree biTree;
	char tag;
}BiTNodePost,*BiTreePost;

void PostOrder2(BiTree T);

//层次遍历
void LevelOrder(BiTree T);






