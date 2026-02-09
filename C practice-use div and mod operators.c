#include<stdio.h>
int main(){
    int num1,num2,temp1,temp2;
    scanf("%d %d",&num1,&num2);
    temp1=num1;
    temp2=num2;
    num1/=num2;
    temp1%=num2;
    
    
    printf("%d %d",num1,temp1);
    return 0;
}