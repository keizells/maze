#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    printf("  _____  _  _  ___   __  __    _    ____ ___ \n");
    printf(" |_   _|| || || __| |  \/  |  /_\  |_  /| __|\n");
    printf("   | |  | __ || _|  | |\/| | / _ \  / / | _| \n");
    printf("   |_|  |_||_||___| |_|  |_|/_/ \_\/___||___|\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("press any key to play");
    getch();
    /* variable*/
    int player = 7;
    int wall = 1;
    int hall = 0;
    int exit = 8;
    int maze[5][8]={{1 ,1 ,1 ,1 ,1 ,1 ,1 ,1},
                    {1 ,1 ,1 ,0 ,0 ,0 ,1 ,1},
                    {1 ,7 ,0 ,0 ,1 ,0 ,1 ,1},
                    {1 ,1 ,1 ,1 ,1 ,0 ,8 ,1},
                    {1 ,1 ,1 ,1 ,1 ,1 ,1 ,1}};
    int x = 1;
    int y = 2;
    int tx = x;
    int ty = y;

    int up = 8;
    int down = 2;
    int right = 6;
    int left = 4;

    /*first display*/
    int bloc_u  = maze[y-1][x];
    int bloc_d  = maze[y+1][x];
    int bloc_r  = maze[y][x+1];
    int bloc_l  = maze[y][x-1];
    int bloc_p  = maze[y][x];
    int bloc_ur = maze[y-1][x+1];
    int bloc_ul = maze[y-1][x-1];
    int bloc_dr = maze[y+1][x+1];
    int bloc_dl = maze[y+1][x-1];

    printf("OBJECTIF :FIND THE EXIT\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("%d , %d , %d \n",bloc_ul, bloc_u, bloc_ur );
    printf("%d , %d , %d \n",bloc_l, bloc_p, bloc_r );
    printf("%d , %d , %d \n",bloc_dl, bloc_d, bloc_dr );

    while ( y!= 3 && x!=6){
        printf("your next move ??? \n");
        int input;
        scanf("%d", &input);
        /*mouvement*/
        if (input=up);{
            ty =ty-1;
            if (maze[ty][tx]=1){
                ty =y;
            }
            else{
                maze[ty][tx]=7;
                maze[y][x]= 0;
                y=ty;
                x=tx;
            }
        }
        if (input=down){
            ty =ty+1;
            if (maze[ty][tx]=1){
                ty=y;
            }
            else{
                maze[ty][tx]=7;
                maze[y][x]= 0;
                y=ty;
                x=tx;
            }
        }
        if (input=right){
            tx = tx + 1;
            if (maze[ty][tx]=1){
                tx = x;
            }
            else{
                maze[ty][tx] = 7;
                maze[y][x] = 0;
                y=ty;
                x=tx;
            }
        }
        if (input=left){
            tx =tx-1;
            if (maze[ty][tx]=1){
                tx=x;
            }
            else{
                maze[ty][tx]=7;
                maze[y][x]=0;
                y=ty;
                x=tx;
            }
        }
        /*update display*/
        bloc_u  = maze[y-1][x];
        bloc_d  = maze[y+1][x];
        bloc_r  = maze[y][x+1];
        bloc_l  = maze[y][x-1];
        bloc_p  = maze[y][x];
        bloc_ur = maze[y-1][x+1];
        bloc_ul = maze[y-1][x-1];
        bloc_dr = maze[y+1][x+1];
        bloc_dl = maze[y+1][x-1];
        system("cls");
        printf("OBJECTIF :FIND THE EXIT\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("%d , %d , %d \n",bloc_ul, bloc_u, bloc_ur );
        printf("%d , %d , %d \n",bloc_l, bloc_p, bloc_r );
        printf("%d , %d , %d \n",bloc_dl, bloc_d, bloc_dr );


    }
    printf("YOU FOUND THE EXIT DUMO \n");
}



