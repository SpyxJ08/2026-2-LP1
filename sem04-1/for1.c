#include <stdio.h>
int main(){
    
    int hasta = 25;

    for(int desde =1; desde <= hasta; desde++){
        
        if(desde%3==0){
        printf("%d\n",desde);
        }    
    }
    return 0;
}