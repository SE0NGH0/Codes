#include <stdio.h>
#define size 10001

int cnt[size];

int main()
{
    int n = 0;
    int num = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        cnt[num]++;
    }
    
    for (int i = 1; i <= size; i++)
    {
        if (cnt[i] != 0)
        {
            for (int j = 0; j < cnt[i]; j++)
            {
                printf("%d\n", i);
            }
        }
    }
    
    return 0;
    
}
