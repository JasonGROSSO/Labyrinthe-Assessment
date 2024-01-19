#include <stdio.h>
#include <stdlib.h>

int printMaze(void)
{
    FILE * maze;
    maze = fopen("./maze.txt", "r");
    if (maze == NULL)
    {
        printf("File not found.");
        exit(EXIT_FAILURE);
    }
    else
    {
        char hector;
        while((hector = fgetc(maze)) != EOF)
        {
            if(hector == '#')
            {
                printf("%c", '#');
            }
            else if(hector == '@')
            {
                printf("%c", '@');
            }
            else if(hector == '$')
            {
                printf("%c", ' ');
            }
            else if(hector == '&')
            {
                printf("%c", '&');
            }
            else if(hector == 'R')
            {
                printf("%c", 'R');
            }
            else if(hector == '|')
            {
                printf("%c", '|');
            }
            else if(hector == '_')
            {
                printf("%c", '_');
            }
            else if(hector == '\n')
            {
                printf("%c",'\n');
            }
            else
            {
                printf("Unknow character.");
                exit(EXIT_FAILURE);
            }
        }

    }
    fclose(maze);
    return 0;   
}