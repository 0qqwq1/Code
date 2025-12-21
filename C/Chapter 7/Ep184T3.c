#include <stdio.h>

int main(){
    int ji=0,ou=0;
    int count_ji=0,count_ou=0;
    float ji_ave=0,ou_ave=0;
    char ch;
    int c=0;
    ch=getchar();

    while(ch!='0'){
        switch(ch){
        case '1':c=1;break;
        case '2':c=2;break;
        case '3':c=3;break;
        case '4':c=4;break;
        case '5':c=5;break;
        case '6':c=6;break;
        case '7':c=7;break;
        case '8':c=8;break;
        case '9':c=9;break;
        default: break;
        }

        if(c%2==0){
            count_ou++;
            ou=c+ou;
        }
        else if((c+1)%2==0){
            count_ji++;
            ji=c+ji;
        }

        ch=getchar();
    }

    ji_ave=ji/count_ji;
    ou_ave=ou/count_ou;

    printf("ji:%d,%.2f\n",count_ji,ji_ave);
    printf("ou=%d,%.2f\n",count_ou,ou_ave);
    
    return 0;
}