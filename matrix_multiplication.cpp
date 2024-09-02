#include <iostream>
using namespace std;

void matrixMultiplication(int A[][2], int B[][2], int C[][2], int n) {
   for(int i=0; i<n; i++ ){
    for(int j=0; j<n; j++) {
        C[i][j] = 0;
        for(int k=0; k<n; k++) {
            C[i][j] += A[i][k] * B[k][j];
        }
    }
   }
}

int main() {
    int n =2;
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {3, 0}};
    int C[2][2];

    matrixMultiplication(A, B, C, n);

    cout<<"Resultant matrix after multiplication:"<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<C[i][j]<< " ";
        }
        cout<<endl;
    }
}