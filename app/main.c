#if !defined(Header)
#define Header

// #include "labyrinthe.h"
#include "player.h"

#endif // Header


int main(void)
{
    player_t p1;
    p1.pos = 17;
    printMaze();
    gameLoop(&p1);
    return EXIT_SUCCESS;
}