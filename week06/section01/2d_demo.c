#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc < 2) {
        printf("Usage: ./2d_demo <board size>");
        exit(-1);
    }

    int board_size = atoi(argv[1]);
    int board[board_size][board_size];
    //board is type int**
    //board[0] is type int*
    //board[0][0] is type int
    for (int r = 0; r < board_size; r++) {
        for (int c = 0; c < board_size; c++) {
            board[r][c] = r * board_size + c + 1;
        }
    }
 
    for (int r = 0; r < board_size; r++) {
        for (int c = 0; c < board_size; c++) {
            printf("%p %d ", &board[r][c], board[r][c]);
        }
        printf("\n");
    }
    printf("\n");
 /*
    for (int r = 0; r < board_size; r++) {
        //int* row = *(board+r); 
        int* row = board[r];
        //this is wrong: int* column = board[c];
        // *(board+r) = board[r] = the int array for each row r
        for (int c = 0; c < board_size; c++) {
            printf("%p %2d ", &row[c], row[c]);
        }
        printf("\n");
    }
    printf("\n");

    for (int r = 0; r < board_size; r++) {
        int* row = *(board+r);
        for (int c = 0; c < board_size; c++) {
            printf("%p %2d ", row+c, *(row+c));
        }
        printf("\n");
    }
    printf("\n");*/ 
    printf("%p %d\n", board+2, **(board+2));  
    printf("%p %d\n", *board, *(*board));  

    printf("%p %d\n", *(board+1)+5, *(*(board+1)+5));  
    printf("%p %d\n", board[1]+5, *(board[1]+5));  
    printf("%p %d\n", *(board+8), **(board+8));  

    /*
    for (int r = 0; r < board_size * board_size; r++) {
        printf("%p %2d ", (*board)+r, *((*board)+r));
        if (((r+1) % board_size) == 0) {
            printf("\n");
        }
    }*/
    
}