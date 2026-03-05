#include <stdio.h>
int main() {
    int i,n,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        max=a[i];
        for (int j=i+1;j<n;j++){
            if(a[j]>max){
                max=a[j];
            }   
        }
        printf("%d",max);
    }
    printf("-1");

    return 0;
}