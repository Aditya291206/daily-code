//Name: Aditya Pandya
//ID: 24IT471

#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int mat[10][10];

public:
    Matrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                mat[i][j] = 0;
    }

    void input() {
        cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend Matrix addMatrix(const Matrix &m1, const Matrix &m2);
    friend Matrix subtractMatrix(const Matrix &m1, const Matrix &m2);
    friend Matrix multiplyMatrix(const Matrix &m1, const Matrix &m2);
};

Matrix addMatrix(const Matrix &m1, const Matrix &m2) {
    if (m1.rows != m2.rows || m1.cols != m2.cols) {
        cout << "Cannot add matrices: Dimensions do not match!\n";
        return Matrix();
    }
    Matrix result(m1.rows, m1.cols);
    for (int i = 0; i < m1.rows; i++)
        for (int j = 0; j < m1.cols; j++)
            result.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
    return result;
}


Matrix subtractMatrix(const Matrix &m1, const Matrix &m2) {
    if (m1.rows != m2.rows || m1.cols != m2.cols) {
        cout << "Cannot subtract matrices: Dimensions do not match!\n";
        return Matrix();
    }
    Matrix result(m1.rows, m1.cols);
    for (int i = 0; i < m1.rows; i++)
        for (int j = 0; j < m1.cols; j++)
            result.mat[i][j] = m1.mat[i][j] - m2.mat[i][j];
    return result;
}

Matrix multiplyMatrix(const Matrix &m1, const Matrix &m2) {
    if (m1.cols != m2.rows) {
        cout << "Cannot multiply matrices: Invalid dimensions!\n";
        return Matrix();
    }
    Matrix result(m1.rows, m2.cols);
    for (int i = 0; i < m1.rows; i++) {
        for (int j = 0; j < m2.cols; j++) {
            result.mat[i][j] = 0;
            for (int k = 0; k < m1.cols; k++) {
                result.mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
            }
        }
    }
    return result;
}

int main() {
    int r, c;
    cout << "Enter rows and columns of first matrix: ";
    cin >> r >> c;
    Matrix m1(r, c);
    m1.input();

    cout << "Enter rows and columns of second matrix: ";
    cin >> r >> c;
    Matrix m2(r, c);
    m2.input();

    cout << "\nMatrix 1:\n";
    m1.display();
    cout << "\nMatrix 2:\n";
    m2.display();

    cout << "\n=== Addition ===\n";
    Matrix sum = addMatrix(m1, m2);
    sum.display();

    cout << "\n=== Subtraction ===\n";
    Matrix diff = subtractMatrix(m1, m2);
    diff.display();

    cout << "\n=== Multiplication ===\n";
    Matrix prod = multiplyMatrix(m1, m2);
    prod.display();

    return 0;
}
