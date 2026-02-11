#include <stdio.h>

int main() {
   int num;
   scanf("%d",&num);
   if (num%5==0){
       printf("Number divisible by 5");
   }
   else{
       printf("Number not divisible by 5");
   }
   return 0;
}