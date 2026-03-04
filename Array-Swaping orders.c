#include<stdio.h>
int main(){
    int i,n,temp,k;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for (i=0;i+k<n;i++){
        temp=a[k+i];
        a[k+i]=a[i];
        a[i]=temp;
    }
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
}