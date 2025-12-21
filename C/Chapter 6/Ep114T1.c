#include <stdio.h>
#define H 60

int main(){
 int m,h;
 _Bool i=0;

do{
    printf("min:");
    scanf("%d",&m);
    if(m<=0){
        i=0;break;
    }
    else{
        i=1;
    }
    h=m/H;
    m=m-H*h;
    printf("%dh%dmin\n",h,m);
}while (i==1);

return 0;
}