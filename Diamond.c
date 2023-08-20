#include<stdio.h>
int main(){
    int m,n,mid;
    printf("Enter a Even Number:");
    scanf("%d" ,&m);
    n=(m-1);
    mid=m/2;
    for(int i=1;i<m;i++){
        for(int j=1;j<=n;j++){
            if(i<mid){
                 if(j<=mid-i || j>=mid+i){
                    printf(" \t");
                 }else{
                    printf("*\t");
                 }
            }
            else if(i==mid){
                printf("*\t");
            }
            else if(i>mid){
                    if(j<(i-mid)+1 || j>((mid)+mid-(i-mid))-1){
                        printf(" \t");
                    }else{
                        printf("*\t");
                    }
            }
            
        }
        printf("\n");
    }
    return 0;
}