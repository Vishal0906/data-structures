#include<stdio.h>

int main(void){
struct node{
int data;
struct node *next};

struct node *temp,*head=0,*newnode;
int choice=1;
while(choice==1){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be inserted\n");
    scanf("%d",&newnode->data);
    newnode->next=0;

    /*
    if(head==0){                  - only once the starting head will be NULL else the previous node formed will be lost and
    head = newnode;                the lost, and the latest node address will be saved in it.
    }else{                        - if we write this ..... the head pointing the node will store the address of latest
    head->next=newnode             node formed and will loose the other previous node formed.
    }
    */

    if(head==0){
    head = temp = newnode;        // initially both temp and head pointer will be pointing to the first node.
    }else{
    temp -> next = newnode;      // the latest node address is saved in the previous node.
    temp = newnode;                // temp is pointing towards the newnode.
    }

    printf("if you want to add  a new node enter 1 \n");
    scanf("%d",&choice);
}

// printing the link list

temp = head;               // bringing the temp to the initial node by saving the address of first node in the temp pointer
while(temp!=0){
    printf(" data stored %d\n",temp->data);
    printf("address stored in it %d\n",temp->next);
    temp=temp->next;
}
}
