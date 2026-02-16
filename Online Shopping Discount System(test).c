#include <stdio.h>
int main() {
    int membership,amount;
    float bill;
    scanf("%d %d",&membership,&amount);
    if(membership==1){
        if(amount>=100){
            bill=amount-(amount*0.20);
        }
        else
            bill=amount-(amount*0.10);
    }
    else if(membership==0)
        bill=amount;
    else
        printf("Invalid Membership status");
    printf("%.2f",bill);

    return 0;
}