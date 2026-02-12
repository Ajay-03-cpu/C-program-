#include <stdio.h>
int main() {
   char letter;;
   scanf("%c",&letter);
   if(letter>=65&&letter<=90)
    printf("Upper case");
else if(letter>=97&&letter<=122)
    printf("Lower case");

else{
    printf("Not upper case not lower case");
}
  return 0;
}