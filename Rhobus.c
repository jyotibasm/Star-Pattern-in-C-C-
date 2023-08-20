#include<stdio.h>
int main(){
     int m;
     printf("Enter Number of rows:");
     scanf("%d",&m);
    for(int i=0;i<m;i++){
        for(int a=0;a<=i;a++){
            printf(" \t");
        }
        for(int j=0;j<m;j++){
           printf("*\t");
        }printf("\n");
    }
    return 0;
}