#include <stdio.h>

int n, m, k;
int penalized_person[10000];

int main() {
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < m; i++) {
        scanf("%d", &penalized_person[i]);
    }
    
    // Please write your code here.
    int student_num[n];
    for(int i = 0 ; i < n; i++)
    {
        student_num[i] = 0;
    }
    
    int answer = -1;

    for (int i = 0; i < m; i++) {
        int student = penalized_person[i] - 1;

        student_num[student]++;

        if (student_num[student] >= k) {
            answer = student + 1;
            break;
        }
    }

    printf("%d\n", answer);

    return 0;
}