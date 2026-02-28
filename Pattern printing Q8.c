#include<stdio.h>
int main(){
    int n,i,j;
    char let=64;
    scanf("%d",&n);
    for (i=n;i>0;i--){
        for (j=1;j<=i;j++){
            printf("%c ",let+j);
        }
        printf("\n");
        
    }
    return 0;
}