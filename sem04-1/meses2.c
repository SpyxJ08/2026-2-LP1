#include <stdio.h>
int main(){
int mes;
mes=8;
switch(mes){
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12: printf(" tiene 31 dias \n");break;
case 4:
case 6:
case 9:
case 11: printf(" tiene 30 dias \n");break;
case 2: printf("tiene 28 dias \n");break;
default:printf(" mes invalido\n");
}

    return 0;
}
