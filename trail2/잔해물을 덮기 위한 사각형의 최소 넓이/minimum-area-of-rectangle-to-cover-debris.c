#include <stdio.h>
#define SIZE 2001
#define OFFSET 1000

int main() {
    int r1_x1, r1_y1, r1_x2, r1_y2;
    int r2_x1, r2_y1, r2_x2, r2_y2;
    
    scanf("%d %d %d %d", &r1_x1, &r1_y1, &r1_x2, &r1_y2);
    scanf("%d %d %d %d", &r2_x1, &r2_y1, &r2_x2, &r2_y2);
    
    // Please write your code here.
    int area[SIZE][SIZE] = {0};

    for(int x = r1_x1; x < r1_x2; x++){
        for(int y = r1_y1; y < r1_y2; y++){
            area[x + OFFSET][y + OFFSET] = 1;
        }
    }

    for(int x = r2_x1; x < r2_x2; x++){
        for(int y = r2_y1; y < r2_y2; y++){
            area[x + OFFSET][y + OFFSET] = 0;
        }
    }
    int min_x = SIZE, max_x = -1;
    int min_y = SIZE, max_y = -1;
    int result = 0;

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(area[i][j] > 0) {
                result++;
            if(i < min_x) min_x = i;
            if(i > max_x) max_x = i;
            if(j < min_y) min_y = j;
            if(j > max_y) max_y = j;
            }
        }
    }
    if(result == 0){
        printf("0");
    }
    else
    {
        int width = max_x - min_x + 1;
        int heigth = max_y - min_y +1;

        printf("%d",width*heigth);
    }
    return 0;
}