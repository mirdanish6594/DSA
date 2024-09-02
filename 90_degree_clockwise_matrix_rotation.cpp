#include <iostream>
using namespace std;

void printMatrix(int matrix[][3], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int matrix[][3], int n) {
      for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

void reverseRows(int matrix[][3], int n) {
    for(int i=0; i<n; i++) {
        int start = 0; 
        int end = n-1;
        while(start<end) {
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
    }
}

int main() {
    int n = 3; // Size of the matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout<<"Original matrix:"<<endl;
    printMatrix(matrix, n);

    transpose(matrix, n);

    reverseRows(matrix, n);

    cout<<"\nmatrix after 90 degree rotation:"<<endl;
    printMatrix(matrix, n);
}