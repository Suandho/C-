#include <stdio.h>

#define MAX_N 10
#define SIZE 201

int x1[MAX_N], y1[MAX_N], x2[MAX_N], y2[MAX_N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
    }
    
    // Please write your code here.
    int board[SIZE][SIZE] = {0};
    int area = 0;

    for (int i = 0; i < n; i++) {
        for (int x = x1[i] + 100; x < x2[i] + 100; x++) {
            for (int y = y1[i] + 100; y < y2[i] + 100; y++) {
                board[x][y] = (i % 2 == 1);
            }
        }
    }

    for (int x = 0; x < SIZE; x++) {
        for (int y = 0; y < SIZE; y++) {
            area += board[x][y];
        }
    }

    printf("%d\n", area);
    return 0;
}
