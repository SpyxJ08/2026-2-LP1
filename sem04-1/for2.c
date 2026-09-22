#include <stdio.h>
int main(){
    
    int hasta = 25;
    int desde = 1;
    for(;;){ //loop infito//
        if(desde > hasta)
        break;
        if(desde % 3 == 0){
            printf("%d\n",desde);
        }
        desde++;
    }
    return 0;
}