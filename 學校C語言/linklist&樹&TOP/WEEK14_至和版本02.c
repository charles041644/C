#include<stdio.h>
#include<string.h>
typedef struct NODE{
    int data;
    struct NODE *l;
}node;

node *creat_point(int d){
    node *p = (node *)malloc(sizeof(node));
    p->data = d;
    p->l = NULL;
    return p;
}
void append(node *n,int d){
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
void print(node *n){
	node *temp = n;
    temp = temp->l;
    //if(l==) printf("NO DATA\n");
	 
    
	while(temp != NULL){
    printf("%p %d %p\n",temp,temp->data,temp->l);
    temp = temp->l;
	}
	

}
int main(){
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
    }
}
