#include <stdio.h>
#include <stdlib.h>

struct stack{
    int data;
    struct stack *next;
};

struct stack *top = NULL;


struct stack *push()
{
    
 struct stack *newnode = (struct stack *)malloc(sizeof(struct stack));
 
 int number;
 printf("Enter a number to be pushed: ");
 scanf("%d",&number);

 if(top == NULL)
 {
    top = newnode;
    newnode->next = NULL;
    newnode->data = number;
    return top;
 }

  newnode->next = top;
  top = newnode;
  newnode->data = number;
  return top;
}

struct stack *pop()
{
    if(top == NULL)
    {
        printf("Stack is Empty!!\n");
        return top;
    }

    struct stack *helper;
    helper = top;
    top = top->next;
    free(helper);

    return top;
}


void display()
{
    if (top == NULL)
    {
        printf("Stack is Empty");
        return;
    }
    struct stack *helper = top;
    while (helper != NULL)
    {
        printf("%d ", helper->data);
        helper = helper->next;
    }
}





int main(){

int choice,n;

printf("Implementation of Stack using Linked List");


do{
   printf("-------------------------------\n");
   printf("1.Push");
   printf("2.Pop");
   printf("3.Display");
   printf("4.Exit");
   printf("Enter your choice: ");
   scanf("%d",&choice);

   switch(choice){

   case 1:
       {
           top =push();
           break;
       }
   case 2:
    {
        top = pop();
        break;
    }

   case 3:
    {
        display();
        break;
    }
   default:
    printf("Invalid Input!!!");

   }
}while(choice!=4);

return 0;
}
