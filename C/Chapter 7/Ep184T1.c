#include <stdio.h>
#define SPACE ' '

int main(){
    int g=0,h=0,q=0;
    char ch;
    ch=getchar();

    while(ch!='#') {
        switch(ch){
            case SPACE: g++;break;
            case '\n' : h++;break;
            default: q++;break;
        }
        ch=getchar();  
        }
    
    printf("SPACE:%d\n",g);
    printf("huanhan:%d\n",h);
    printf("qita:%d\n",q);

    return 0;
}
//为什么如果变量不初始化换行符数值就会变得很奇怪？
//好像说如果未初始化，变量的值可能是任何数