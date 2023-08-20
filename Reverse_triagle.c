#include<stdio.h>
int main(){
     int m,n;
    printf("Enter a odd number of rows:");
    scanf("%d",&m);
    n=(2*m)-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
           if(j<=i || j>=(m)+(m-i)){
            printf(" \t");
           }else{
            printf("*\t");
           }
        }
        printf("\n");
    }
    return 0;
}