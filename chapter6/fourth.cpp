int main(int argc, char const *argv[])
{
    int matrix_a [3][3] = {
                            {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}
                          };

    int matrix_b [3][3] = {
                            {1, 1, 1},
                            {2, 2, 2},
                            {3, 3, 3}
                          };

    int result_matrix [3][3] = {
                            {0, 0, 0},
                            {0, 0, 0},
                            {0, 0, 0}
                          };
                

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                result_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j];

            }
        }
    };

    return 0;
}