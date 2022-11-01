#include <stdio.h>
#include <stdlib.h>
#define size 10

// Creating a structure
struct stack{


int top;
int arr[size];

};

struct stack s;

void push()
{
  if(s.top == size -1)
  {
    printf("Stack is Full\n");
    return;
  }

  int number;
  printf("Enter value to be pushed: ");
  scanf("%d",&number);
  s.arr[++s.top] = number;

}

void pop()
{

  if(s.top == -1)
  {
    printf("Stack is empty\n");
    return ;
  }

  printf("The popped element is %d",s.arr[s.top]);
  s.top--;
  
 
}

void display()
{
  if (s.top == -1)
    {
        printf("Stack is EMPTY\n");
        return;
    }
    printf("The Elements in stack are:\n");
    for (int i = s.top; i >= 0; i--)
    {
        printf("%d\n", s.arr[i]);
    }
}


int main(){

int choice,n;

s.top = -1;


printf("Implementation of Stack using Array");


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
           push();
           break;
       }
   case 2:
    {
        pop();
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
