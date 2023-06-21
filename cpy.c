#include<stdio.h>
#include<conio.h>
int main(){
    int item;
    struct node{
        int key;
        struct node *left,*right;
    };
    struct node*temp=(struct node *)malloc(sizeof(struct node));
    temp->key= item;
    temp->left=temp->right=NULL;
    return temp;
        
    
}