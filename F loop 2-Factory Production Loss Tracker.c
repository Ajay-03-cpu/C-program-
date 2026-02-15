#include<stdio.h>
int main(){
    int no_lossdays,amt_loss,tot_loss=0,max_loss=0;
    scanf("%d",&no_lossdays);
    for (int i=1;i<=no_lossdays;i++){
        scanf("%d",&amt_loss);
        tot_loss+=amt_loss;
        if(amt_loss>100){
            max_loss+=1;
        }
    }
    printf("Total loss : %d\nHigh loss days: %d",tot_loss,max_loss);
    return 0;
}