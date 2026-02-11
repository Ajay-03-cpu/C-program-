#include <stdio.h>
#include <ctype.h>

int main() {
   char let;
   
   scanf("%c",&let);
   
   if (isdigit(let)){
       printf("Number");}
   
   else if(isalpha(let)){
       printf("Alphabet ");
   }
   else{
       printf("Charecter");
   }
   
   return 0;
}
