
#include<cstdio>
struct node{
    int info;
    node *link;
};

void display(node *start){
   node *p;
   if(start==NULL){
        printf("List is empty\n\n");
        return;
   }
   p=start;
   while(p!=NULL){
    printf("%d ",p->info);
    p=p->link;
   }

}
node *addatbeg(node *start,int num){
    node *temp;
    temp=new node;
    temp->info=num;
    temp->link = start;
    start=temp;
    return start;
}

void addatend(node *start, int num){
    node *temp,*p;
    if(start==NULL){
        printf("This function cannot be used to add a node to an empty list \n");
       return;
       }
    temp=new node;
    temp->info = num;
    p=start;
    while(p->link!=NULL){
        p=p->link;
    }
    p->link =temp;
    temp->link = NULL;
}
node *del(node *start,int num){
    node *temp,*p;
    if(start==NULL){
            printf("List is empty\n");
            return start;

    }
    if(start->info == num){
        temp=start;
        start=start->link;
        delete(temp);
        return start;
    }
    p=start;
    while(p->link!=NULL){
        if(p->link->info==num){
            temp=p->link;
            p->link=temp->link;
            delete(temp);
            return start;
        }
        p=p->link;
    }
    printf("%d not present in the list\n",num);
    return start;
}

void search(node *start ,int num){
    node *p;
    int pos=1;
    p=start;
    while(p!=NULL){
        if(p->info==num)
            {
            printf("%d found at position %d ",num,pos);

           }
        p=p->link;
        pos++;
        }

        printf("%d not found in the list\n",num);

}
void count (node *start){
    int count =0;
    node *p;
    p=start;
    while(p!=NULL){
        p=p->link;
        count++;
    }
    printf("Number of nodes %d",count);
}
node *addbefore(node *start,int num,int num2){
    node *temp,*p;
    if(start->info==num2){
        temp=new node;
        temp->info=num;
        temp->link =start;
        start=temp;
        return start;

    }
    while(p->link!=NULL){
        if(p->link->info==num2){
            temp=new node;
            temp->info=num;
            temp->link=p->link;
            p->link=temp;

        }
        p=p->link;
    }
    printf("%d not present in the list\n",num2);
    return start;
}

node *reverse(node *start){
    node *previous,*ptr,*next;
    previous = NULL;
    ptr = start;

    while(ptr!=NULL){
        next=ptr->link;
        ptr->link = previous;
        previous =ptr;
        ptr= next;

    }
    start = previous;
    return start;

}
void addafter(node *start, int num,int num2){
    node *temp,*p;
    p = start;
    while(p!=NULL){
        if(p->info == num2){
            temp=new node;
            temp->info = num;
            temp->link = p->link;
            p->link = temp;
            return;
        }
        p=p->link;
    }
    printf("%d not present in the list\n",num2);

    }
int main(){
    node *start = NULL;
    int x,num,num2;

    while(1){
        printf("\nInput 1 to display\n");
        printf("Input 2 to add at the beginning\n");
        printf("Input 3 to add node at the end\n");
        printf("Input 4 to delete from list\n");
        printf("Input 5 to search\n");
        printf("Input 6 to count number of nodes\n");
        printf("Input 7 to add after node\n");
        printf("Input 8 to add before node\n");
        printf("Input 9 to reverse list\n");
        printf("Input 10 to Exit the loop\n\n");

        scanf("%d",&x);
        if(x==1){

            display(start);
        }
        else if(x==2){
            printf("Enter the number to be inserted\n");
            scanf("%d",&num);
            start = addatbeg(start,num);
        }
        else if(x==3){
            printf("Enter the number to be inserted\n");
            scanf("%d",&num);
            addatend(start,num);
        }
        else if(x==4){
            printf("Enter the number to be deleted\n");
            scanf("%d",&num);
            start = del(start,num);
        }
        else if(x==5){
            printf("Enter the number to be search :  ");
            scanf("%d",&num);
            search(start,num);
        }
        else if(x==6){
            count(start);
        }
        else if(x==7){
            printf("Enter the number to be inserted\n");
            scanf("%d",&num);
            printf("Enter the number after which to insert\n");
            scanf("%d",&num2);
            addafter(start,num,num2);
        }
        else if(x==8){
            printf("Enter the number to be inserted\n");
            scanf("%d",&num);
            printf("Enter the number before which to insert\n");
            scanf("%d",num2);
            start = addbefore(start,num,num2);
        }
        else if(x==9){
            start=reverse(start);
        }
        else if(x==10){
           break;
        }

        else{
            printf("Wrong option\n");
        }
    }
      return 0;
}
