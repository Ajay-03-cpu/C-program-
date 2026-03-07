#include<stdio.h>
int main(){
    int n,i,min,index=0,length=0;
    scanf("%d",&n);
    int a[n],temp[100];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>0){
            length++;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>0){
            temp[index]=a[i];
            index++;
        }
    }
    if(length==0){
        printf("No positive values");
    }
    else{
        min=temp[0];
        for(i=0;i<length;i++){
            if(temp[i]<min){
                min=temp[i];
            }
        }
        printf("%d",min);
    }
    
   
}