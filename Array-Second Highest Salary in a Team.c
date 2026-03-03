#include <stdio.h>
int main() {
    int i, n,largest,l2;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for (i=0;i<=n;i++){
        if(a[i]>=largest){
            largest=a[i];
        }
    }
    l2=a[i];
    for(i=1;i<=n;i++){
        if(a[i]>l2&&a[i]<largest){
            l2=a[i];
        }
    }
    printf("%d",l2);
}