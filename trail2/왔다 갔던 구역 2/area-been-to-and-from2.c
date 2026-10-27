#include <stdio.h>
#define MAX_N 100

int n;
int distances[MAX_N];
char directions[MAX_N];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &distances[i], &directions[i]);
    }
    // Please write your code here.
    int result[2001] = {0};
    int start = 1000;
    for(int i = 0; i < n; i++)
    {
        int value = 100;
        if(directions[i] == 'L' )
        {
            for(int j = 0; j <distances[i]; j++)
            {
                start--;
                result[start]++;
            }
        }
        else
            for(int j = 0; j <distances[i]; j++)
            {
                result[start]++;
                start++;
            }
    }

    int count = 0;
    for(int i = 0 ; i < 2001; i++)
    {
        
        if(result[i] > 1)
         count++;
    }
    printf("%d",count);
    return 0;
}