#include<stdio.h>
#include<string.h>
typedef struct{
    int stk[5];
    int top;
}stack;
void is_empty(stack *s)
{
    if(s->top == -1){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}
int top(stack *s)
{
    if(s->top == -1){
        printf("-1\n");
    }
    else{
        printf("%d\n",s->stk[s->top]);
    }
}
void push(stack *s,int i)
{
    if(s->top == 4){
        printf("Stack is full!\n");
    }
    else{
        s->stk[++(s->top)] = i;
    }
}
void pop(stack *s)
{
    if(s->top == -1){
        printf("Stack is empty!\n");
    }
    else{
        s->top--;
    }
}
void print(stack *s)
{
    int i;
    for(i = 0;i<=s->top;i++){
        printf("%d",s->stk[i]);
        if(i != s->top){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }
}
int main()
{
	stack s;
    s.top = -1;
    char cmd[50];
    int i;
    while(scanf("%s",cmd) != EOF){
        if(strcmp(cmd,"is_empty") == 0){
            is_empty(&s);
        }
        else if(strcmp(cmd,"push") == 0){
            scanf("%d",&i);
            push(&s,i);
        }
        else if(strcmp(cmd,"pop") == 0){
            pop(&s);
        }
        else if(strcmp(cmd,"top") == 0){
            
		top(&s);	
		}
        else if(strcmp(cmd,"print") == 0){
            print(&s);
        }
    }
}
