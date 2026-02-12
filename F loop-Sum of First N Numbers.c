#include<stdio.h>
int main(){
    int i,range,sum=0;
     scanf("%d",&range);
    if(range>0&&range<=1000){
   
    for (i=1;i<=range;i++){
        sum+=i;}
        printf("%d ",sum);
    }
    return 0;
}