#include <iostream>
 
#define M 2 
#define N 2
using namespace std;

int main()
{

    int A[M][N],B[M][N],C[M][N];
   
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 100;
        }
    }
 
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            B[i][j] = rand() % 100;
        }
    }
    cout<<"\n MATRIX A\n";
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
  cout<<"\n MATRIX B\n";
  	for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }
	cout<<"\n Addition:\n";
       for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
	C[i][j]=A[i][j]+B[i][j];
            cout << C[i][j] << " ";
        }
        cout << "\n";
    }
   
    return 0;
}
