#include<stdio.h>
int main(){
    int n,i,j,count;
    scanf("%d",&n);
    count=1;
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
}