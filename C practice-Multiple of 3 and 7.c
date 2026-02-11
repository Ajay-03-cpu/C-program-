#include <stdio.h>


int main() {
   int num;
   
   scanf("%d",&num);
   
   if (num%3==0&&num%7==0){
       printf("Multiples of both 3 and 7");}
   
   else if(num%3==0){
       printf("Multiples of 3");
   }
   else{
       printf("Charecter");
   }
   
   return 0;
}
