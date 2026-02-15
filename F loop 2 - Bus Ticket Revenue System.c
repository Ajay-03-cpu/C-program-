#include<stdio.h>
int main(){
    int no_tickets,amt_ticket,tot_amt=0;
    scanf("%d",&no_tickets);
    for(int i=1;i<=no_tickets;i++){
        scanf("%d",&amt_ticket);
        tot_amt+=amt_ticket;
        
    }
    printf("Total collection : $%d",tot_amt);
    return 0;
}