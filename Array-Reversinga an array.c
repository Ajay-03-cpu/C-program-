#include <stdio.h>

int main() {
    int i,n;
    scanf("%d",&n);

    int a[n],reversed_array[n];

    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
     

    for(i=0;i<n;i++) {
        reversed_array[i]=a[n-1-i];
        printf("%d",reversed_array[i]);

        }
        
    return 0;
}.is this code is perfect for reversing a array