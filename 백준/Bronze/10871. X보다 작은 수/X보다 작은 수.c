#include <stdio.h>

int main()
{
    int n;
    int a;
    int x;
    
    scanf("%d %d", &n, &x);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);

        if (a < x)
        {
            printf("%d ", a);
        }
    }
    
    return 0;
}
