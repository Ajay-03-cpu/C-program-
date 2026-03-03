#include <stdio.h>
int main() {
    int i, n,x;
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    scanf("%d",&x);
   for (i=0;i<n;i++){
       if(marks[i]==x){
           printf("%d",i+1);
       }
   }

}