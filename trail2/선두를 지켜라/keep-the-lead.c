#include <stdio.h>

int n, m;
int A_v[1000], A_t[1000];
int B_v[1000], B_t[1000];
int a_d[1000001], b_d[1000001];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d %d", &A_v[i], &A_t[i]);
    for (int i = 0; i < m; i++) scanf("%d %d", &B_v[i], &B_t[i]);

    int ta = 0, tb = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < A_t[i]; j++) {
            int prev = ta ? a_d[ta-1] : 0;
            a_d[ta++] = prev + A_v[i];
        }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < B_t[i]; j++) {
            int prev = tb ? b_d[tb-1] : 0;
            b_d[tb++] = prev + B_v[i];
        }

    int leader = 0, count = 0;
    for (int k = 0; k < ta; k++) {
        int cur;
        if (a_d[k] > b_d[k]) cur = 1;
        else if (a_d[k] < b_d[k]) cur = 2;
        else continue;
        if (leader != 0 && leader != cur) count++;
        leader = cur;
    }
    printf("%d\n", count);
    return 0;
}