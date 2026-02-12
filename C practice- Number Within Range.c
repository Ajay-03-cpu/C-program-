#include <stdio.h>
int main() {
  int num,starting_range,end_range;
  scanf("%d%d%d",&num,&starting_range,&end_range);
 if(num>=starting_range&& num<=end_range) 
  printf("Number in range");
else {
    printf("Number not in range");
}
    return 0;
}