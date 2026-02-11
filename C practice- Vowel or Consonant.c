#include <stdio.h>
int main() {
   char let;
   
   scanf("%c",&let);
   
   if (let=='a'|| let=='e'||let=='i'||let=='o'||let=='u'){
       printf("Vowel");}
   
   else{
       printf("Not Vowel ");
   }
   
   return 0;
}
