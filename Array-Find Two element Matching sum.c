#include <stdio.h>
int main() {
    int i,j,n,sum,flag=0,a1,b;
scanf("%d",&n);
int a[n];
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}
scanf("%d",&sum);
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]+a[j]==sum){
            flag=1;
            a1=a[i];
            b=a[j];
            break;
        }
        if(flag==1){
            break;
        }
        else{
            flag=0;
        }
    }
}
if(flag==0){
    printf("No pair");}
else{
    printf("%d %d",a1,b);
}



    return 0;
}