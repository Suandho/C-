#include <stdio.h>
#define MAX_N 1000

int n;
int arr[MAX_N];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Please write your code here.
    int count = 0;
    int result = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0)
        {
            count = 1;
        }
        else if(arr[i] > arr[i-1])
        {
            count++;
        }
        else if(arr[i] <= arr[i-1])
        {
            if(result < count)
            {
                result = count;
            }
            count = 1;
        }
    }
    if(result < count)
        result = count;
    printf("%d",result);
    return 0;
}