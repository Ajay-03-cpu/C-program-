#include<stdio.h>
int main(){
    int i,n,temp,k;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    temp=a[0];
    for (i=0;i<n;i++){
       if(a[i]>temp){
           temp=a[i];
           k=i;
           
       } 
    }
    for (i=k;i<n;i++){
        printf("%d ",a[i]);
    }
    
}