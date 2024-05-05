// wap to multiply two 3x3 matrices
#include<iostream>

using namespace std;

class Matrix
{
private:
    int mat[3][3];

public:
    void getData()
    {
        int i, j;
        cout << "Enter matrix elements:" << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << "Enter element [" << i << "][" << j << "] :";
                cin >> mat[i][j];
            }
        }
    }
    void showData()
    {
        int i, j;
        cout << "The matrix is: " << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

    friend Matrix processData(Matrix m1, Matrix m2);
};

Matrix processData(Matrix m1, Matrix m2)
{
    int sum = 0, i, j, k;
    Matrix temp;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            for (k = 0; k < 3; k++)
            {
                sum = sum + m1.mat[i][k] * m2.mat[k][j];
            }
            temp.mat[i][j] = sum;
            sum = 0;
        }
    }
    return temp;
}

int main()
{
    Matrix m1, m2, m3;
    m1.getData();
    // m1.showData();
    m2.getData();
    m3 = processData(m1, m2);
    m3.showData();
}