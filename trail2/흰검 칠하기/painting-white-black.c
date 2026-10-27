#include <stdio.h>
#define SIZE 200001

int x[1000];
char d[1000];
// 회색조건 흰색으로 칠한 횟수 >=2 && 검은색으로 칠한 횟수 >=2
// 0: 아직 칠하지 않음
// 1 : 흰색
// 2 : 검정색
// 3 : 회색

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &x[i], &d[i]);
    }
    // Please write your code here.
    int white_count[SIZE] = {0};
    int black_count[SIZE] = {0};
    int color[SIZE] = {0};
    int position = 100000;

    for(int i = 0 ; i < n;i++)
    {
        for(int j = 0 ; j < x[i]; j++)
        {
            if(color[position] != 3)
            {
                if(d[i] == 'L')
                {
                    white_count[position]++;
                    color[position] = 1;
                }
                else
                {
                    black_count[position]++;
                    color[position] = 2;
                }
                if(white_count[position] >=2 && black_count[position] >= 2)
                    color[position] = 3;
            }

            // 마지막으로 칠한 타일에서는 이동하지 않음
            if(j < x[i] -1)
            {
                if(d[i] == 'L')
                    position--;
                else
                    position++;
            }
        }
    }
    int white = 0;
    int black = 0;
    int gray = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if(color[i] == 1)
            white++;
        else if(color[i] == 2)
            black++;
        else if(color[i] == 3)
            gray++;
    }
    printf("%d %d %d", white, black, gray);
    return 0;
}