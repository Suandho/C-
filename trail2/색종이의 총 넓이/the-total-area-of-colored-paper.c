#include <stdio.h>
# define SIZE 200
# define OFFSET 100
int n;
int x[100], y[100];

int main(void) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    // Please write your code here.

    int square[SIZE][SIZE] = {0};
    for(int i = 0; i < n; i++)
    {
        for (int a = x[i]; a < x[i]+8; a++)
        {
            for (int b = y[i]; b < y[i]+8 ; b++)
            {
                square[a + OFFSET][b + OFFSET] = 1;
            }
        }
    }

    int area = 0;
    for(int x = 0; x < SIZE; x++)
    {
        for(int y = 0; y < SIZE; y++)
        {
            if(square[x][y] == 1)
                area++;
        }
    }
    printf("%d",area);
    return 0;
}