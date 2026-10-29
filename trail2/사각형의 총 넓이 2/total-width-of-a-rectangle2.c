#include <stdio.h>

int n;
int x1[10], y1[10], x2[10], y2[10];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
    }
    // Please write your code here.

    int area[201][201] = {0};
    
    for(int i = 0 ; i < n ; i++)
    {
        for(int x = x1[i] ; x  < x2[i]; x++)
        {
            for(int y = y1[i] ; y  < y2[i]; y++)
            {
                area[x+100][y+100]=1;
            }
        }
    }

    int answer = 0;
    
    for(int i = 0 ; i < 201; i++)
    {
        for(int j = 0; j < 201; j++)
        {
            if(area[i][j] == 1)
                answer++;
        }
    }

    printf("%d", answer);
    
    return 0;
}