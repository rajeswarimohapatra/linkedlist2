#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*next;
};
void Traversal(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("The elements are :%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct Node*head;
     struct Node*second;
      struct Node*third;
    head=(struct Node*)malloc(sizeof(struct Node));
 second=(struct Node*)malloc(sizeof(struct Node));
 third=(struct Node*)malloc(sizeof(struct Node));
 printf("Enter the head data:");
 scanf("%d",&head->data);
 head->next=second;
 printf("Enter the second data:");
 scanf("%d",&second->data);
 second->next=third;
 printf("Enter the third data:");
 scanf("%d",&third->data);
 third->next=NULL;
 Traversal(head);
 return 0;
}




