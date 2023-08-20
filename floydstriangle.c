#include<stdio.h>
int main(){
    int m;
    printf("Enter a number of rows:");
    scanf("%d",&m);
    int a=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            printf("%d\t",a);
            a+=1;
        }printf("\n");
    }
    return 0;
}