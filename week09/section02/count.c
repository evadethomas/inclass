#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc < 2) {
        printf("Usage: ./2d_demo <board size>");
        exit(-1);
    }

    int board_size = atoi(argv[1]);
    int board[board_size][board_size];

    for (int r = 0; r < board_size; r++) {
        for (int c = 0; c < board_size; c++) {
            board[r][c] = r * board_size + c + 1;
        }
    }

    for (int r = 0; r < board_size; r++) {
        int* row = board[r];
        for (int c = 0; c < board_size; c++) {
            printf("%2d ", row[c]);
        }
        printf("\n");
    }
    printf("\n");
}
