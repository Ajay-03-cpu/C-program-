#include <stdio.h>
int main() {
  int units,bill=0 ;
  scanf("%d",&units);
 if(units<=50) {
    bill+=units*3;
      printf("%d\n",bill);
 }
else if(units<=100){
    bill+=(50*3)+(units-50)*5;
    (units-50)*10;
    printf("%d",bill);
}
else{
    bill=(50*3)+(50*5)+(units-100)*10;
}

    return 0;
}
