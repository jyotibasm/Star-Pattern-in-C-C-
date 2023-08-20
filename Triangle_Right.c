#include<stdio.h>
int main(){
     int m;
    printf("Enter Number of Rows & Colums\n");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
         if(j<=m-i){
            printf(" \t");
         }else{
            printf("*\t");
         }
        }
        printf("\n");
    }
    return 0;
}