#include "include/my_queue.h"

PLinkQueue createEmptyQueue_link(){
    PLinkQueue plqu=(PLinkQueue)malloc(sizeof(struct LinkQueue));
    if (plqu==NULL)
    {
        printf("Out of space.\n");
    }else{
        // PNode pnode=(PNode)malloc(sizeof(struct Node));
        plqu->f=plqu->r=NULL;
    }
    return plqu;
}

void enQueue_link(PLinkQueue plqu,Datatype x){

   PNode pnode=(PNode)malloc(sizeof(struct Node));
   if(pnode==NULL){
     printf("Out of space.\n");
   }else{
     pnode->info=x;
     pnode->link=NULL;
         if (plqu->f==NULL)
         {
            plqu->f=pnode;
         }else{
            plqu->r->link=pnode;

         }
         plqu->r=pnode;
   }

}

void deQueue_link(PLinkQueue plqu){
    PNode pnode;
    if (plqu->f==NULL)
    {
        printf("Empty Queue\n");
    }else{
       pnode=plqu->f;
       plqu->f=plqu->f->link;
       free(pnode);
    }
}


Datatype frontqueue_link(PLinkQueue plqu){
    printf("%d\n",plqu->f->info);
    return(plqu->f->info);
}

int isEmptyQueue_link(PLinkQueue plqu){
    return (plqu->f==NULL);
}



