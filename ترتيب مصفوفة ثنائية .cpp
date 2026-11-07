#include <iostream>
using namespace std;

int main()
{
    int rows = 3, cols = 3;

    int mat[3][3] =
    {
        {9, 3, 5},
        {1, 8, 2},
        {7, 4, 6}
    };

    // ترتيب المصفوفة الثنائية مباشرة
    for (int i1 = 0; i1 < rows; i1++)
    {
        for (int j1 = 0; j1 < cols; j1++)
        {
            for (int i2 = 0; i2 < rows; i2++)
            {
                for (int j2 = 0; j2 < cols; j2++)
                {
                    if (mat[i1][j1] < mat[i2][j2])
                    {
                        int temp = mat[i1][j1];
                        mat[i1][j1] = mat[i2][j2];
                        mat[i2][j2] = temp;
                    }
                }
            }
        }
    }

    // طباعة المصفوفة بعد الترتيب
    cout << "المصفوفة بعد الترتيب:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}