#include <stdio.h>
#define SIZE 2001
#define OFFSET 1000
int x1[3], y1[3];
int x2[3], y2[3];

int main(void) {
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
    }
    
    // Please write your code here.
    int area[SIZE][SIZE] = {0};
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int x = x1[i] ; x < x2[i]; x++ )
        {
            for(int y = y1[i] ; y < y2[i]; y++ ){
                if(i == 0)
                {
                    area[x + OFFSET][y + OFFSET] = 1;
                }
                if(i == 1)
                {
                    area[x + OFFSET][y + OFFSET] = 1;
                }
                if(i==2)
                {
                    area[x + OFFSET][y + OFFSET] = 0;
                }
            }
        }   
    }
    int leftarea = 0;
    
    for(int i = 0 ; i < SIZE ; i++)
    {
        for(int j = 0 ; j < SIZE; j++){
            if(area[i][j] > 0)
                leftarea++;
        }
    }
    printf("%d",leftarea);

    return 0;
}