#include <stdio.h>

int N, M;
char A_dir[1000];
int A_time[1000];
char B_dir[1000];
int B_time[1000];
int main() {
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++) {
        scanf(" %c %d", &A_dir[i], &A_time[i]);
    }
    
    for (int i = 0; i < M; i++) {
        scanf(" %c %d", &B_dir[i], &B_time[i]);
    }
    
    int A_move[1000001] = {0};
    int B_move[1000001] = {0};
    // Please write your code here.

int a_t = 0;
int b_t = 0;

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < A_time[i]; j++)
    {
        if (A_dir[i] == 'L')
        {
            A_move[a_t + 1] = A_move[a_t] - 1;
        }
        else
        {
            A_move[a_t + 1] = A_move[a_t] + 1;
        }

        a_t++;
    }
}

for (int i = 0; i < M; i++)
{
    for (int j = 0; j < B_time[i]; j++)
    {
        if (B_dir[i] == 'L')
        {
            B_move[b_t + 1] = B_move[b_t] - 1;
        }
        else
        {
            B_move[b_t + 1] = B_move[b_t] + 1;
        }

        b_t++;
    }
}

int end = (a_t < b_t) ? a_t : b_t;
int answer = -1;

for (int t = 1; t <= end; t++)
{
    if (A_move[t] == B_move[t])
    {
        answer = t;
        break;
    }
}

printf("%d\n", answer);

    return 0;
}