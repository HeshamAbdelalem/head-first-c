#include <stdio.h>

int main(){
    
    int c = getchar();

    while (c) {
        putchar(c);
        c = getchar();
    }
}