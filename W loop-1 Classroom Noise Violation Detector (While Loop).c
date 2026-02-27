#include<stdio.h>
int main(){
    int  n_log,noice,strike=0,n_voilation=0,temp=0;
    scanf("%d",&n_log);
    while(n_log>0){
        scanf("%d",&noice);
        if(noice>70){
            n_voilation+=1;
            strike+=1;
            if (strike>temp){
                temp=strike;
            }
        }
    
        else{
            strike=0;
        }
        n_log--;
        
    }
    printf("Noise Violations:%d \nLongest Violation Streak:%d",n_voilation,temp);
}