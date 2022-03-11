#include <stdio.h>
#include <stdlib.h>
#define Success 01
extern "C" void gameloop() {
    printf("Coming Soon To Your Terminal");
}
int main(){
    system("clear")
    gameloop();
    return Success;
}
