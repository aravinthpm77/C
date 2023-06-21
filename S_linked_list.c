#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void insertAtBeginning(int);
void insertAtEnd(int);
void insertAtBetween(int,int,int);
void display();
void removeAtBeginning();
void removeEnd();
void removeSpecific(int);

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

void main(){
    int choice,value,choice1,loc1,loc2;
    
    while(1){
        mainmenu:printf("\n--------- MAIN MENU ---------- \n 1. Insert \n 2. Display \n 3.Delete \n 4. Exit \n Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter your value to insert : ");
            scanf("%d",&value);
            printf("Where to Insert : \n 1.At Beginning \n 2. At Middle 3. At End \n Enter your Choice:");
            scanf("%d",&choice1);
            switch (choice1){
                case 1:
                //     insertAtBeginning(value);
                //     break;
                // case 2:
                //     printf("Enter the two Values to insert : ");
                //  S   scanf("%d %d",&loc1,&loc2);
                //     insertAtBetween(value,loc1,loc2);
                //     break;
                // case 3:
                //     insertAtEnd(value);
                //     break; 
                // default:
                //     printf("Wrong input !!");
                //     goto mainmenu;
            }
            case 2:
            display();
            break;

            case 3:
            printf("How do want to delete: \n 1.At Beginning \n 2. At Middle 3. At End \n Enter your Choice:");
            scanf("%d",&choice1);
            switch (choice1)
            {
                case 1:
                    // removeAtBeginning();
                    // break;

        
                case 2:
                    // printf("Enter the vlau to Remove");
                    // scanf("%d",&loc1);
                    // removeSpecific(loc1);
                    // break;
                case 3:
                //     removeEnd();
                //     break;
                // default:
                //     break;
            }
            case 4:

        
        }
        

    }
    
}