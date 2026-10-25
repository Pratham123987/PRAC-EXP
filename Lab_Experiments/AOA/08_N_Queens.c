#include <stdio.h>
#include <stdbool.h>
#define N 4
void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j]) {
                printf(" Q ");
            } else {
                printf(" . ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
bool isSafe(int board[N][N], int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        if (board[i][col]) {
            return false;
        }
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }
    for (i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j]) {
            return false;
        }
    }
    return true;
}
bool solveNQUtil(int board[N][N], int row) {
    if (row >= N) {
        return true;
    }
    for (int col = 0; col < N; col++) {
        if (isSafe(board, row, col)) {
            // Place the queen
            board[row][col] = 1;
            if (solveNQUtil(board, row + 1)) {
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;
}
bool solveNQ() {
    int board[N][N] = {0};
    if (!solveNQUtil(board, 0)) {
        printf("Solution does not exist for N = %d\n", N);
        return false;
    }
    printf("One valid solution for N = %d:\n\n", N);
    printSolution(board);
    return true;
}
int main() {
    solveNQ();
    return 0;
}
