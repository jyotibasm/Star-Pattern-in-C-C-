#include<stdio.h>
int main(){
     int m;
    printf("Enter Number of Rows & Colums\n");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(j<m-i){
                printf("*\t");
            }else{
                printf(" \t");
            }
        }
        printf("\n");
    }
    return 0;
}