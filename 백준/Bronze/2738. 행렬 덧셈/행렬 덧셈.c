#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    int A[n][m];
    int B[n][m];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = A[i][j] + B[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
    
    return 0;
}
