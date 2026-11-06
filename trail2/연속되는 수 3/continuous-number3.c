#include <stdio.h>

int arr[1000];

int main() {
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Please write your code here.
    int result = 0;
    int low = 0;
    int plus = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(arr[i] > 0 && arr[i-1] > 0)
            plus++;
        else if(arr[i] < 0 && arr[i-1] < 0)
            low++;
        else if(arr[i] > 0 && arr[i-1] < 0)
        {
            if(result < low)
                result = low;
            low = 0;
            plus++;
        }
        else if(arr[i] < 0 && arr[i-1] > 0)
        {
            if(result < plus)
                result = plus;
           plus = 0;
           low++;
        }
        else if(i == 0)
        {
            if(arr[i] > 0)
                plus++;
            else if(arr[i] < 0)
                low++;   
        }

        if(i == n-1)
        {
            if(result < plus)
                result = plus;
            else if(result < low)
                result = low;
        }

    }


    printf("%d", result);
    return 0;
}