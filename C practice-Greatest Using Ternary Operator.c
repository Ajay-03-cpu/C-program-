#include <stdio.h>
int main() {
    char num1,num2;
    scanf("%d %d",&num1,&num2);
    (num1>num2) ? printf("%d",num1):printf("%d",num2);
    
    return 0;
}