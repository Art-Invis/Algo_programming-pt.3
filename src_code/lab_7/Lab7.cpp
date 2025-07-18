#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <iomanip> 

using namespace std;

void fillMatrix(int** matrix, int size);
void transposeMatrix(int** matrix, int size);
void addMatrices(int** matrix1, int** matrix2, int** result, int size);
void displayMatrix(int** matrix, int size, const string& name);

int main() {
    srand(time(0)); 

    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    int** matrix1 = new int*[size];
    int** matrix2 = new int*[size];
    int** result = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix1[i] = new int[size];
        matrix2[i] = new int[size];
        result[i] = new int[size];
    }

    fillMatrix(matrix1, size);

    displayMatrix(matrix1, size, "Matrix 1 (Original)");

    transposeMatrix(matrix1, size);

    fillMatrix(matrix2, size);

    addMatrices(matrix1, matrix2, result, size);

    displayMatrix(matrix1, size, "Matrix 1 (Transposed)");
    displayMatrix(matrix2, size, "Matrix 2");
    displayMatrix(result, size, "Sum of Matrix 1 and Matrix 2");

    for (int i = 0; i < size; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}

void fillMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 100; 
        }
    }
}

void transposeMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void addMatrices(int** matrix1, int** matrix2, int** result, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void displayMatrix(int** matrix, int size, const string& name) {
    cout << "\n" << name << ":\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << setw(5) << matrix[i][j] << " "; 
        }
        cout << endl;
    }
}
