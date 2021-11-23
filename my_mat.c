#include <stdio.h>
#include <limits.h>

void putValueInMatrix(int temp[10][10]);
void isPath(int i, int j);
void Floyd_Warshall_algorithm(int x, int y);

int matrix[10][10];
#define MAX 99999


void putValueInMatrix(int temp[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(temp[i][j] == 0 && i!=j) {
                matrix[i][j] = MAX;
            }
            else
            matrix[i][j] = temp[i][j];
        }
    }
}


void isPath(int x, int y)
{ 
    int i, j, k;
    for (k = 0; k < 10; k++)
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
    if (matrix[x][y] > 0 && matrix[x][y]<MAX)
    {
        printf("True");
    }
    else{
        printf("False");
        } 
}
void Floyd_Warshall_algorithm(int x, int y)
{
    int i, j, k;
    for (k = 0; k < 10; k++)
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
    if (matrix[x][y] > 0 && matrix[x][y]<MAX)
        printf("%d", matrix[x][y]);
    else
        printf("-1");
}
