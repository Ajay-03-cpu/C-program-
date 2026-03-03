#include <stdio.h>
int main(){
    int i,n,total,result,temp=0;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        temp+=a[i];
        
    }
    total =n*(n+1)/2;
    result=total-temp;
    printf("%d",result);
    
}