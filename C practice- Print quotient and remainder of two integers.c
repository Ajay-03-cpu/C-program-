#include<stdio.h>
int main(){
    int num1;
    int num2,quetient,remainder1;
    scanf("%d %d",&num1,&num2);
    quetient=num1/num2;
    remainder1=num1%num2;
    printf("Quetient= %d Remainder= %d",quetient,remainder1);
    return 0;
}