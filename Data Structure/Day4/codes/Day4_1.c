#include<stdio.h> 
#include<stdlib.h> 


typedef struct node 
{
    int data; 
    struct node *next; 
}node_t; 

node_t *head = NULL; 
node_t* create_node(int data); 
void add_node_at_last_pos(int data); 
void add_at_first_position(int data); 
void display_list(void); 
int main()
{
    // add_node_at_last_pos(10); 
    // add_node_at_last_pos(20); 
    // add_node_at_last_pos(30);
    // // 10=>20=>30   
    
    add_at_first_position(10); 
    add_at_first_position(20);
    add_at_first_position(30); 
    
    //30=>20=>10 
    display_list( );  
    return 0;
}

node_t* create_node(int data)
{
    //int *ptr = (int*)malloc(sizeof(int)); 
    node_t *temp =(node_t*)malloc(sizeof(node_t));
    //malloc function allocates memory dynamically from heap section
    //on success it returns the starting address of dynamically 
    //allocated block 
    // on failure it returns NULL

    if(temp == NULL )
    {
        printf("Malloc failed"); 
        exit(1); 
    }     
    // init member of the node
    temp->data = data;   
    temp->next = NULL; 

    return temp; 
}
void add_at_first_position(int data)
{
    //1.Create the node 
    node_t *newnode =create_node(data); 
    //2.If list is empty 
    if(head == NULL)
    {
         head = newnode;    
    }
    else //if list is not empty 
    {
           newnode->next = head; 
           head = newnode; 
    }
}

void display_list(void)
{
    //if linked list is not empty 
    if(head!=NULL)
    {
         //start the traversal from first node 
         node_t *trav = head; 
         //traverse till last node 
         while(trav!=NULL)
         {
            printf("%d ",trav->data); 
            trav = trav->next;    
         }
         printf("null\n");      
    }
    else 
     printf("linked list is empty"); 
}

void add_node_at_last_pos(int data)
{
    //1.Create the node 
    node_t *newnode =create_node(data); 

    //2. if list is empty 
    if(head == NULL )
    {
        head = newnode; 
    }
    else // if list is not empty  
    {
        node_t *trav = head;   
        while(trav->next!=NULL)
        {
            trav = trav->next; 
        }
        trav->next = newnode;  
    }
}
