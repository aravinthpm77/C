#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
    int a,xc[100],i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&xc[i]);
    }
    for(i=0;i<a-1;i++){
        int min=i;
        for(j=i+1;j<a;j++){
            if (xc[j]<xc[min]) {
                min=j;
            }
        }
        if(min!=i){
            swap(&xc[i],&xc[min]);
        }

    }
    printf("Hello Dude");
    printf("Swapped List");
    printf("\n");
    for(i=0;i<a;i++){
        printf("%d ",xc[i]);
    }
    
    
}