#include<stdio.h>

int main(void){

struct node{              // creating a node
int data;                 // first data type to be stored in node
struct node *next         // next data type to be stored in another feild
};

struct node *newnode;     // declaring a pointer of name newnode of data type struct node

newnode = (struct node*)malloc(sizeof(struct node));          // creating a space using malloc and saving the adress in the pointer newnode
printf("enter the data to be stored");                     // normal print statement
scanf("%d",&newnode -> data);                                // taking input form the user and putting in node's data feild
newnode->next = 0;                                         // putting the value 0 in the address feild of the node


printf(" data is %d \n",newnode->data);                     // printing the data stored in the first data
printf("address pointing to another node is %d",newnode->next);    // printing the adress stored in the node
}
