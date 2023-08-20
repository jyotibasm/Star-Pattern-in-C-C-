#include<stdio.h>
int main(){
    int m,n;
    printf("Enter m & n:");
    scanf("%d %d" ,&m ,&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n){
                printf("*\t");
            }else if(j==1|| j==n){
                printf("*\t");
            }else{
                printf(" \t");
            }
        }printf("\n");
    }
    return 0;
}