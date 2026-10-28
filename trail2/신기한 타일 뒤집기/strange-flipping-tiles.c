#include <stdio.h>
#define SIZE 200001
// 회 = 0
// 검 = 1
// 흰 = 2
int main() {
    int n;
    scanf("%d", &n);
    
    int x[n];
    char c[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &x[i], &c[i]);
    }
    
    // Please write your code here.
    int position = SIZE/2;
    int Color[SIZE] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < x[i] ; j++){
            if(c[i] == 'L')
                Color[position] = 2;
            else if(c[i] == 'R')
                Color[position] = 1;

            if(j < x[i]-1)
            {
                if(c[i] == 'L')
                    position--; 
                else if(c[i] == 'R')
                    position++;
            }
        }
    }
    int white = 0;
    int black = 0;
    for(int i = 0 ; i < SIZE; i++)
    {
        if(Color[i] == 1)
            black++;
        else if(Color[i] == 2)
            white++;
    }
    printf("%d %d",white , black);

    return 0;
}