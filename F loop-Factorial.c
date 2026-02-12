#include <stdio.h>

int main() {
    int i,num,fact=1;
    scanf("%d",&num);
    for (i=num;i>1;i--){
        fact*=i;
    }
    
    printf("%d",fact);

    return 0;
}