#include <stdio.h>

int arr[1000];

int main(void) {
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Please write your code here.
    int result = 0;
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == arr[i-1] || i == 0)
            count++;
        else if(arr[i] != arr[i-1])
            count = 1;
        
        if(count > result)
            result = count;
    }
    printf("%d",result);
    return 0;
}