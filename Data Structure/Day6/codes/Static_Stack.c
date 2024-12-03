#include<stdio.h>
#include<stdlib.h> 
#define SIZE 5  

typedef struct 
{
    int arr[5]; 
    int top; 
}stack_t; 
void init_stack(stack_t *ps); 
int is_stack_full(stack_t *ps); 
void push_element(stack_t *ps,int ele); 
int is_stack_empty(stack_t *ps); 
int peek_element(stack_t *ps) ; 
void pop_element(stack_t *ps); 
int menu(void)
{
    int choice; 
    printf("0. Exit\n"); 
    printf("1. Push\n"); 
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("Enter the choice :");
    scanf("%d",&choice); 
    return choice; 
}
enum menu_options{EXIT , PUSH , POP , PEEK}; 

int main()
{
    stack_t s;  
    int ele; 
    init_stack(&s); 
    while(1)
    {
        int choice = menu( ); 
        switch(choice)
        {
            case EXIT: 
            exit(0); 

            case PUSH: 
            //step-1: check stack is not full
            if(!is_stack_full(&s))
            {
                 printf("Enter the ele : \n");
                 scanf("%d",&ele); //10 
                 push_element(&s,ele);  
                 printf("%d is pushed on to the stack..\n",ele);      
            }
            else 
              printf("Stack overflow!!!\n");
            break;  

            case POP: 
            //step-1: check stack is not empty
            if(!is_stack_empty(&s))
            {
                ele = peek_element(&s);
                pop_element(&s);   
                printf("Popped ele is :  %d\n",ele); 
            }
            else 
            printf("Stack Underflow!!!\n");
            break;  

            case PEEK: 
            //step-1: check stack is not empty  
            if(!is_stack_empty(&s))
            {
                ele = peek_element(&s); 
                printf("Topmost ele is : %d\n",ele); 
            }
            else 
              printf("Stack underflow!!!\n"); 
        }//end of switch 

    }//end of while loop 
    return 0;
}

void init_stack(stack_t *ps)
{
     ps->top = -1;  
}

int is_stack_full(stack_t *ps)
{
    if(ps->top == SIZE - 1)
       return 1; 
    else 
       return 0;  
}
int is_stack_empty(stack_t *ps)
{
     if(ps->top == -1)
       return 1; 
     else 
       return 0;   
}

void push_element(stack_t *ps,int ele)
{
    //step-2: increment the value of top by 1
      ps->top++; //ps->top = ps->top + 1
    //step-3: insert/push an element onto the stack at top end    
      ps->arr[ps->top] = ele; 
}
/*
       arr[0] = ele
       arr[top] = ele  
       ps->arr[ps->top] = ele; 
*/
void pop_element(stack_t *ps)
{
    //step-2: decrement the value of top by 1
      ps->top--; 
}
int peek_element(stack_t *ps) 
{
    return (ps->arr[ps->top]);
}
/*
       return arr[2];  
       return arr[top]; 
       return ps->arr[ps->top]; 

*/