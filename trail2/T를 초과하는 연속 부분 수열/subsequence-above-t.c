#include <stdio.h>

int arr[1000];

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Please write your code here.
    int count = 0;
    int result = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > t) {
            count++;
        } else {
            count = 0;
        }

        if (result < count) {
            result = count;
        }
    }

    printf("%d", result);
    return 0;
}