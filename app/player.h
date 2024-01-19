#include "labyrinthe.h"
#include <stdbool.h>

typedef struct player
{
    char name;
    int pos;
}player_t;

typedef struct oldPos{
    int OPos;
    char hector;
}oldPos_t;

int gameLoop(player_t *aPlayer)
{

    printf("p");
//     char tmp;
//     oldPos_t oldPos;
//     oldPos.OPos = aPlayer->pos;
//     //printf("press a key");
//     scanf("%c", &tmp);
//     switch (tmp)
//     {
//     case 'z':
//         aPlayer->pos = aPlayer->pos -= 15;
//         break;
//     case 's':
//         aPlayer->pos = aPlayer->pos += 15;
//         break;
//     case 'd':
//         aPlayer->pos = aPlayer->pos += 1;
//         break;
//     case 'q':
//         aPlayer->pos = aPlayer->pos -= 1;
//         break;
//     case 'p':
//         exit(EXIT_SUCCESS);
    
//     default:
//         break;
//     }
     return 0;
}

bool collision(player_t *aPlayer, oldPos_t *oldPos)
{

    if(oldPos->hector == '|' || oldPos->hector == '#')
    {
        return true;
    }
    else
    {
        return false;
    }
}