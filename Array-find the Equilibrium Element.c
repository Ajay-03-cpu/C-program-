#include <stdio.h>
int main() {
    int i,r,l,n,left_sum=0,right_sum=0,result;
scanf("%d",&n);
int a[n];
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for (i=0;i<n;i++){
    left_sum=0;
    right_sum=0;
    for(l=0;l<i;l++){
        left_sum+=a[l];
    }
    for(r=i+1;r<n;r++){
        right_sum+=a[r];
    }
    if(left_sum==right_sum){
        result=a[i];
        break;
    }
  }
printf("%d",result);

    return 0;
}