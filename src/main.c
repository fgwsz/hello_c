#include"main.h"

#include<stdio.h>

void say_hello(void){
    puts("hello world!\n");
}

int main(int argc,char* argv[]){
    for(int index=1;index<argc;++index){
        printf("argv[%d]: \"%s\"\n",index,argv[index]);
    }
    say_hello();
    return 0;
}
