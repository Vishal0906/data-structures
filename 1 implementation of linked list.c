#include<stdio.h>
void main(){
    int n, count=0;
    printf("enter the number of node you want to create");
    scanf("%d",&n);
    struct node{
    int data;
    struct node *next
    };
    struct node *head,*newnode,*temp;
    head = 0;
    for(int i = 1 ; i <= n ; i++){
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode -> next = 0;
        if(head==0){
            head = temp = newnode;
            }else{
                  temp -> next = newnode;
                  temp = newnode;}
        }
        temp = head;
        while(temp!= 0){
            printf("%d\n",temp -> data);
            temp = temp -> next;
            count++;
        }
        printf("total number of nodes are %d",count);

        }
