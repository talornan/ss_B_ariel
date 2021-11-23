#include <stdio.h>
#include "my_mat.h"
#define N 10
int main()
{
    char function;
    while (1)
    {
        scanf("%c", &function);

        if (function == 'A')
        {
            int matrix[N][N];
            for (int i = 0; i < N; i++)
                for (int j = 0; j < N; j++)
                    scanf("%d", &matrix[i][j]);
            putValueInMatrix(matrix);
        }
        if (function == 'B')
        {
            int i, j;
            scanf("%d %d", &i, &j);
            isPath(i, j);
            printf("\n");
        }
        if (function == 'C')
        {
            int i, j;
            scanf("%d %d", &i, &j);
            Floyd_Warshall_algorithm(i, j);
            printf("\n");
        }
        if (function == 'D')
        {
            break;
        }
    }
}
