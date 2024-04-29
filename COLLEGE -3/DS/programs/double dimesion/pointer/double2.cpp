#include <iostream>
 
#define M 4
#define N 5
using namespace std;

int main()
{

	//int *x=new int[5];
	//delete []x;
        int** A = new int*[4];
   
    for (int i = 0; i < M; i++) {
        A[i] = new int[N]; 
    }
   
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 100;
        }
    }
 
    
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
 
  
    for (int i = 0; i < M; i++) {
        delete[] A[i];
	//delete[] X;
    }
    delete[] A;
 
    return 0;
}
