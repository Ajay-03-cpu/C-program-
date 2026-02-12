#include <stdio.h>
int main() {
    int num1,num2;
    char operation;
    scanf("%d %c %d",&num1,&operation,&num2);
    switch(operation){
    case '+':printf("%d",num1+num2);break;
    case '-':printf("%d",num1-num2);break;
    case 'x':printf("%d",num1*num2);break;
    case '/':printf("%d",num1/num2);break;}
    return 0;
}