#include <stdio.h>

int n;
int a[101], b[101];

int main() {
    int i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        scanf("%d %d", &a[i], &b[i]);
    
    // Please write your code here.
    int result[101] = {0};

    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = a[i]; j <= b[i]; j++)
        {
            result[j]++;
        }
    }
    
    int len = sizeof(result)/sizeof(result[0]);
    int answer = 0;
    
    for(int i = 1 ; i < len; i++)
    {
        if(answer < result[i])
            answer = result[i];
    }

    printf("%d",answer);
    return 0;
}