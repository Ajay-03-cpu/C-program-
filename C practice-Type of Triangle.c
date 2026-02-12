#include <stdio.h>
int main() {
  int angle1,angle2,angle3;
  scanf("%d%d%d",&angle1,&angle2,&angle3);
 if(angle1+angle2+angle3==180) 
  if (angle1==angle2&& angle2==angle3)
    printf("Eqvalent traingle");
    else if(angle1==90||angle2==90||angle3==90){
    printf("Right angle triangle");}
else {
    printf("Scalene Traingle");


}

    return 0;
}