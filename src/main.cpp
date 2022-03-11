#include <stdio.h>
#define Success 01
extern "C" void gameloop() {
    system("clear")
    printf("Coming Soon To Your Terminal");
}
int main(){
    gameloop();
    return Success;
}
