#include <stdio.h>

int main()
{
    int N;
    int arr[20];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Y의 요금제 구하기
    int Y = 0;
    for (int i = 0; i < N; i++)
    {
        Y += (arr[i] / 30 + 1) * 10;
    }
    // M의 요금제 구하기
    int M = 0;
    for (int i = 0; i < N; i++)
    {
        M += (arr[i] / 60 + 1) * 15;
    }

    printf("%d %d", Y, M);

    return 0;
}