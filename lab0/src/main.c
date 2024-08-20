#include <stdio.h>

void main(){
    int x,y;
    for(;x>=0;){
        x++;
        if(x==10){
            y++;
            x = 0;
        }
    }
}