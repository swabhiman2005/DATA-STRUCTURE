#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void push();
void pop();
void display();
main()
{
    int n=0;
    printf("enter the your choice");
    scanf("%d",&n);
    while(n!=5)
    {
        switch(n)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:peak();
            break;
            case 5:printf("exist from the program");
            exit(0);
            default:
                printf("your enter the wrong answer");
        }
        printf("enter your choise");
        scanf("%d",&n);
    }
    return 0;
}
void push()
{
    int value;
   // printf("enter the value");
   // scanf("%d",&value);
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("Ram is full");
    }
    else
    {
        printf("enter the value");
        scanf("%d",&value);
        if(head==NULL)
        {
            ptr->data=value;
            ptr->next=NULL;
            head = ptr;
        }
        else
        {
            ptr->data=value;
            ptr->next=head;
            head=ptr;
        }
    }
    printf("item pushed");
}
void pop()
{
    int value;
    struct node*temp;
    temp=head;
    if(temp==NULL)
    {
        printf("underflow condition");
    }
    else
    {
        value=temp->data;
        head=head->next;
        free(temp);
        printf("%d value is pop",value);
    }
}
void peak()
{
    printf("%d",head->data);
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
