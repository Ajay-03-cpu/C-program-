#include<stdio.h>
int main(){
    int no_day,amt_data,tot_data=0,h_usage=0;
    scanf("%d",&no_day);
    for (int i=1;i<=no_day;i++){
        scanf("%d",&amt_data);
        tot_data+=amt_data;
        if(amt_data<2){
            h_usage+=1;
        }
    }
    printf("Total Data: %d\nHigh usage: %d",tot_data,h_usage);
    return 0;
}