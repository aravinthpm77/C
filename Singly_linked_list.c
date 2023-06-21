#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insertAtBeginning(int);
void insertAtEnd(int);
void insertBetween(int,int,int);
void display();
void removeAtBeginning();
void removeEnd();
void removeSpecific(int);

struct node{
    int data;
    struct Node *next;

}*head=NULL;
void main(){
    int choice,value,choice1,loc1,loc2;
    
    while(0){
        printf("\n --------MAIN MENU--------- \n 1. Insert \n 2. Delete \n 3. Display \n 4. Exit \n Enter your Choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the value to Insert : ");
            scanf("%d",&value);
        }
    }
}