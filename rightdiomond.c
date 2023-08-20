#include<stdio.h>
int main(){
    int m,mid;
    printf("Enter a Even Number of rows:");
    scanf("%d",&m);
    // n=m-1;
    mid=m/2;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=mid;j++){
            if(i<=mid){
              if(j<=mid-i){
                printf(" ");
               }else{
                 printf("*");
               }
            }
            else if(i>=mid){
                if(j<=i-mid){
                    printf(" ");
                }else{
                    printf("*");
                }
            }
        }printf("\n");
    }
    return 0;
}