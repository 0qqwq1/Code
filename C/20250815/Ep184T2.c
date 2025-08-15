#include <stdio.h>

int main(){
    int count=0;
    char ch;
    ch=getchar();

    while(ch!='#'){
        printf("%c-%d ",ch,ch);
        count++;
        if(count%8==0){
            printf("\n");
        }
        ch=getchar();
    }
    return 0;
}