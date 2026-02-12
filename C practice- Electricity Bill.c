#include <stdio.h>
int main() {
  int units,bill=0 ;
  scanf("%d",&units);
 
 if(units<=50) {
    bill+=units*3;
      printf("%d\n",bill);
 }
else{
    bill+=50*3;
    units-=50;
   
   
}
 if(units<50){
 bill+=50*5;
      
 }
 else{
 bill+=50*5;
 units-=50;
     
 }
 if(units>0){
     
    bill+=units*10;
}

    
printf("%d",bill);

    return 0;
}