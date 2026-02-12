#include<stdio.h>
int main(){
    int i,num;
     scanf("%d",&num);
    if(num>0&&num<=20){
   
    for (i=num;i>0;i--){
        printf("%d\n",i);
    }
    return 0;
}}