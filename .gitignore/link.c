#include<stdio.h>
#include<stdlib.h>
 
/* A linked list node */
struct Node
{
    int data;
    struct Node *next;
};
struct Node *header, *ptr, *temp ,*p ,*q;


void printList()
{   temp=header;
    while(temp != NULL){
    printf("%d ",temp->data);
    temp=temp->next;
    }
    
}
void insert(int data){
    if(header->data==0){
        header->data=data;
    }else{
    	temp = (struct Node *) malloc(sizeof(struct Node));
	    ptr = header;
	    while(ptr->next != NULL)
    	{
    		ptr = ptr->next;
	    }
    	temp->data = data;
    	temp->next = ptr->next;
    	ptr->next = temp;
}
}
void reverse()
{
    struct Node *head=q;
    struct Node *a, *b, *c;
 
    a = b = c = head;
    if(a->next!=NULL ){
    a = a->next->next;
    b = b->next;
    c->next = NULL;
    b->next = c;
    
    while (a != NULL)
    {
        c = b;
        b=a;
        a = a->next;
        b->next = c;
    }
    head = b;
    q=head;
    }
}
void edit(){
    p=header;
    q=p->next;
    ptr=q;
    
    while(p->next->next !=NULL )
	{
        p->next=p->next->next;
        p=p->next;
        if(ptr->next->next != NULL)
        {
			ptr->next=ptr->next->next;
			ptr=ptr->next;}
        else
		{
            ptr->next=NULL;
        }
        if(p->next==NULL)
        {
            break;
        }
    }
    p->next=NULL;
    reverse();
    p->next=q;
}

int main(){
    int n,i,dt=5;
    header = (struct Node *) malloc(sizeof(struct Node));
    header->next=NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       insert(i+1);
    }
   edit();
   printList();
}