#include<stdio.h>
int main(){
    int i,j,n,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            for(j=i+1;j<n;j++){
                if(a[j]!=0){
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    break;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    
}
