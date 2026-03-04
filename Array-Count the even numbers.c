#include<stdio.h>
int main(){
    int i,n,e_count=0,o_count=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            e_count+=1;
        }
        else{
            o_count+=1;
        }
    }
    printf("Even : %d \n Odd : %d",e_count,o_count);
}