#include<stdio.h>
#include<string.h>
typedef struct NODE{
    int data;
    struct NODE *l;
}node;

node *creat_point(int d)
{
    node *p;
    p = (node *)malloc(sizeof(node));
    p->data = d;
    p->l = NULL;
    return p;
}
void append(node *n,int d)
{
    node *p = creat_point(d);
    node *temp = n;
    if((n->l) == NULL){
        n->l = p;
    }
    else{
        while(temp->l != NULL){
            temp = temp->l;
        }
        temp->l = p;
    }
}
void print(node *n)
{
	node *temp = n;
    temp = temp->l;
    while(temp != NULL){
        printf("%p %d %p\n",temp,temp->data,temp->l);
        temp = temp->l;
    }
    
}
void check(node *n,int i)
{
    node *temp = n;
    temp = temp->l;
    while(temp != NULL && temp->data != i){
        temp = temp->l;
    }
    if(temp == NULL){
        printf("False\n");
    }
    else{
        printf("True\n");
    }
}
void delete(node *n,int i)
{
    node *cur = n;
    node *pre;
    if(cur != NULL){
        pre = cur;
    	cur = cur->l;
	}
    while(cur != NULL &&cur->data != i){
    	pre = cur;
        cur = cur->l;
	}
    if(cur->data == i){
        pre->l = cur->l;
    }
}
int main()
{
    node n;
    n.data = NULL;
    n.l = NULL;
    char cmd[50];
    int ele;
    while(scanf("%s",cmd) != EOF){
        if(strcmp(cmd,"append") == 0){
            scanf("%d",&ele);
            append(&n,ele);
        }
        else if(strcmp(cmd,"print") == 0){
            print(&n);
        }
        else if(strcmp(cmd,"delete") == 0){
        	scanf("%d",&ele);
            delete(&n,ele);
        }
        else if(strcmp(cmd,"check") == 0){
        	scanf("%d",&ele);
            check(&n,ele);
        }
    }
}
