#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,n,k=0;
    printf("enter the max no. of star in a row :- ");
    scanf("%d ",&n);
    for(i=0;i<(n+1);i++){
        for (j=0;j<n ; j++)
        {
            k=k+1;
            printf(" %d ",k);
        }
        printf("\n");
    }
}
