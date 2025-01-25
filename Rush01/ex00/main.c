#include <stdio.h>
#include <unistd.h>

#define N 4

void ft_putchar(void);
int is_in_row(int row[], int num);
int is_in_col(int matrix[N][N], int col, int num);
int visible_blocks_from_left(int matrix[N][N], int row);
int visible_blocks_from_right(int matrix[N][N], int row);
int visible_blocks_from_top(int matrix[N][N], int column);
int visible_blocks_from_bottom(int matrix[N][N], int column);
int is_valid_matrix(int matrix[N][N], int left_constraints[N], int right_constraints[N], int top_constraints[N], int bottom_constraints[N]);
int generate_matrix(int matrix[N][N], int row, int col, int left_constraints[N], int right_constraints[N], int top_constraints[N], int bottom_constraints[N]);

int main()
{
        int left_constraints[N] = {4, 3, 2, 1} ;
        int right_constraints[N] = {3, 2, 2, 2};
        int top_constraints[N] = {4, 3, 2, 1};
        int bottom_constraints[N] = {2, 2, 2, 2};

        int matrix[N][N];
        for (int i = 0; i < N; i++)
        {
                for (int j = 0; j < N; j++)
                {
                        matrix[i][j] = 0;
                }
        }

        if (generate_matrix(matrix, 0, 0, left_constraints, right_constraints, top_constraints, bottom_constraints))
        {
             for(int i = 0; i < N; i++)
                {
                        for (int j = 0; j < N; j++)
                        {
                                printf("%d", matrix[i][j]);
                        }
                        printf("\n");
                }
                printf("\n");
        }
        else
        {
        printf("Error. \n");
        }
        return (0);

}