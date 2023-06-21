#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main(){
    int n,i,j,num[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    printf("UnSorted Array:");
    for(i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(num[j]<num[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(&num[i],&num[min]);
        }
    }
    printf("Sorted Array : ");
    for(i=0;i<n;i++){
        printf("%d ",num[i]);
    }
    printf("\n");
}

