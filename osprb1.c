#include<stdio.h>
int main( ){
    int p[10],np,b[10],nb,ch,c[10],d[10],alloc[10],flag[10],i,j;
    printf("\nEnter the no of process:");
    scanf("%d",&np);
    printf("\nEnter the no of blocks:");
    scanf("%d",&nb);
    printf("\nEnter the size of each process:");
    for(i=0;i<np;i++){
        printf("\nProcess %d:",i);
        scanf("%d",&p[i]);
    }
    printf("\nEnter the block sizes:");
    for(j=0;j<nb;j++)
    {
        printf("\nBlock %d:",j);
        scanf("%d",&b[j]);c[j]=b[j];d[j]=b[j]; 
    }

    if(np<=nb)
    {
        printf("\nFirst Fit\n");
        for(i=0;i<np;i++)
        {
            for(j=0;j<nb;j++)
                {
                    if(p[i]<=b[j])
                    {
                        alloc[j]=p[i];printf("\n\nAlloc[%d]",alloc[j]);
                        printf("\n\nProcess %d of size %d is allocated in block:%d of size:%d",i,p[i],j,b[j]);
                        flag[i]=0,b[j]=0;break;
                    }
                    else
                    {
                        flag[i]=1;
                    }
                }
        }
        for(i=0;i<np;i++)
        {
            if(flag[i]!=0)
            printf("\n\nProcess %d of size %d is not allocated",i,p[i]);
        }
    
    }
}