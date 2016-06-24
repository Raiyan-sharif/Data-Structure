#include <cstdio>
#include <cstdlib>

struct Node
{
    int Data;
    struct Node *next;
}*top;

void popStack()
{
    Node *temp, *var=top;
    if(var==top)
    {
        top = top->next;
        free(var);
    }
    else
    printf("\nStack Empty");
}

void push(int value)
{
    Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->Data=value;
    if (top == NULL)
    {
         top=temp;
         top->next=NULL;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}

void display()
{
     Node *var=top;
     if(var!=NULL)
     {
          printf("\nElements are as:\n");
          while(var!=NULL)
          {
               printf("%d\n",var->Data);
               var=var->next;
          }

     }
     else
     printf("\nStack is Empty");
}

int main()
{
     int i=0;
     top=NULL;

     while(1)
     {
         printf(" \n1. Push to stack");
         printf(" \n2. Pop from Stack");
         printf(" \n3. Display data of Stack");
         printf(" \n4. Exit\n");

         printf(" \nChoose Option: ");
         scanf("%d",&i);
         switch(i)
          {
               case 1:
               {
               int value;
               printf("\nEnter a valueber to push into Stack: ");
               scanf("%d",&value);
               push(value);

               break;
               }
               case 2:
               {
               popStack();

               break;
               }
               case 3:
               {
               display();
               break;
               }
               case 4:
               {
               struct Node *temp;
               while(top!=NULL)
               {
                    temp = top->next;
                    free(top);
                    top=temp;
               }
               exit(0);
               }
               default:
               {
               printf("\nwrong choice for operation");
               }
         }
    }
}
