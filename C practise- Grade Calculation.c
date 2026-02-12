#include <stdio.h>
int main() {
   int marks;
   scanf("%d",&marks);
   if(marks<50)
    printf("Fail");
else if(marks>=50&&marks<75)
    printf("Grade C");
else if(marks>=75&&marks <90)
    printf("Grade B");
else{
    printf("Grade A");
}
  return 0;
}