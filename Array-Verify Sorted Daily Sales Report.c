#include <stdio.h>

int main() {
    int i,n;
    scanf("%d",&n);

    int sales[n];

    for(i=0;i<n;i++) {
        scanf("%d",&sales[i]);
    }
    int sorted=1; 

    for(i=1;i<n;i++) {
        if(sales[i]<sales[i-1]){
            sorted=0;
            break;
        }
    }

    if(sorted)
        printf("Yes");
    else
        printf("No");

    return 0;
}
