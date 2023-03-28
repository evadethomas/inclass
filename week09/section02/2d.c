#include <stdio.h>
#include <stdlib.h>

#define NUM 3

int main(int argc, char **argv) {
    int i;
    // alloc base array
    int **arr = malloc(sizeof(int*) * NUM);

    // alloc sub arrays for matrix
    for (i = 0; i < NUM; i++)
        *(arr + i) = malloc(NUM);

    **arr = 1; // 0 0
    *(*(arr + 1)) = 10; // 1 0
    *(*(arr + 1) + 1) = 11; // 1 1
    
    *(*(arr + 2)) = 20; // 2 0
    *(*(arr + 2) + 2) = 22; // 2 2

    for (i = 0; i < NUM; i++)
        for (int j = 0; j < NUM; j++)
            printf("arr[%d][%d]: %d\n", i, j, arr[i][j]);

    for (i = 0; i < NUM; i++) 
        free(*(arr + i));
    free(arr);

    return 0;
}
