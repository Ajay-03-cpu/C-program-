#include<stdio.h>
int main(){
    int no_days,amt_rain,tot_rain=0,max_rain=0;
    scanf("%d",&no_days);
    for (int i=1;i<=no_days;i++){
        scanf("%d",&amt_rain);
        tot_rain+=amt_rain;
        if(amt_rain>50){
            max_rain+=1;
        }
    }
    printf("Total Rain fall : %d\nHeavy rain days: %d",tot_rain,max_rain);
    return 0;
}