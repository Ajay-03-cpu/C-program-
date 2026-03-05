#include <stdio.h>
int main() {
    int i,n,average=0,count=0;
scanf("%d",&n);
int a[n];
for (i=0;i<n;i++){
    scanf("%d",&a[i]);
    average+=a[i];
}
average/=n;

for(i=0;i<n;i++){
    if(a[i]>average){
        count++;
    }
        }
    printf("%d",count);

return 0;
}