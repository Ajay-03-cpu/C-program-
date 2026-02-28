#include<stdio.h>
int main(){
    int n;
    char let,i,j;
    scanf("%d",&n);
    let=64;
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",let+j);
            
        }
        printf("\n");
    }
}