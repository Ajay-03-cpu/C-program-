#include<stdio.h>
int main(){
    int n,i,j,s;
    char let=64;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf("  ");
        }
        for (j=1;j<=i;j++){
            printf("%c ",let+j);
        }
        for(j=i;j>1;j--){
            printf("%c ",let+j-1);
        }
        printf("\n");
        
    }
    return 0;
}