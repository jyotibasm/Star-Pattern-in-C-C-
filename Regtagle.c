// Regtangle pattern using c programming
#include<stdio.h>
int main(){
    int m,n;
    printf("Enter Number of Rows & Colums\n");
    scanf("%d %d",&m ,&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}