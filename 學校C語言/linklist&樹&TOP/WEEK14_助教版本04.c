#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define true 1
#define false 0
typedef struct NODE{
    int number;
    struct NODE*left;
    struct NODE*right;
}Data;

Data* createNode(int number){
	Data* temp=malloc(sizeof(Data));
	temp->number=number;
	temp->left =NULL;
	temp->right=NULL;
	return temp;
}
void add_one_node(Data**root,Data*newNode){
	Data*temp=*root;
	if(*root==NULL){
		*root=newNode;
	}else{
		while(1){
			if(temp->number > newNode->number){
				if(temp->left==NULL){
					temp->left=newNode;
					break;
				}
				else temp= temp->left;
			}else if(temp->number < newNode->number){
				if(temp->right==NULL){
					temp->right=newNode;
					break;
				}else temp= temp->right;
			}
		}
	}
}
Data*search(Data*root,int number){
	Data*temp = root;
	while(temp!=NULL){
		printf("%d ",temp->number);
		if(temp->number==number)return temp;
		else if(temp->number>number) temp= temp->left;
		else temp= temp->right;
	}
	return NULL;
} 
void delete(Data*node){
	if(node->left!=NULL)delete(node->left);
	if(node->right!=NULL)delete(node->right);
	free(node);
}
int main(){
	char cmd[20];
	int number;
	Data*root= NULL;
	while(scanf("%s %d",cmd,&number)!=EOF){
		if(strcmp(cmd,"add")==0){
			add_one_node(&root,createNode(number));
		}else {
			if(search(root,number)!=NULL)printf("True\n");
			else printf("False\n");
		}
	}
	delete(root);
	root = NULL;
}
