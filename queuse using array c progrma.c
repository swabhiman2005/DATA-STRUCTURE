#include<stdio.h>
#define MAX_SIZE 5
    int queue[MAX_SIZE];
    int rear,choise,element;
    int front;
  void enqueue(void);
  void dequeue(void);
  void display(void);
  void main()
  {
      rear=-1;
      front=-1;
  int choice;
  do
  {
  	printf("\n");
  printf("enter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  enqueue();
  break;
  case 2:
  dequeue();
  break;
  case 3:
    display();
    break;
  case 4:
  exit(0);
  default:
  printf("enter vaild choice");
  }
}
while(choice!=4);
return 0;
  }
void enqueue()
 {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    printf("enter the value");
    scanf("%d",&element);
    rear++;
    queue[rear] = element;
}
void dequeue()
 {
    if (front == -1 || front > rear) {
        printf("Queue is empty");
        return -1;
    }
    printf("%d,<dequeue",queue[front]);
    front++;
//    return 0;
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
        printf("\n%d",queue[i]);
        printf("\n");
}
//int main() {
  //  enqueue(10);
    //enqueue(20);
    //enqueue(30);
    //printf("%d ", dequeue());
    //printf("%d ", dequeue());
    //printf("%d ", dequeue());
    //printf("%d ", dequeue());
   // return 0;

