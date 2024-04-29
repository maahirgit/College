using namespace std;
#include<iostream>
//lower triangular
int main()
{
	
	int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
			{
			cout<<"0"<<" ";	
			}
			else
			{
			cout<<x[i][j]<<" ";
			}
		}
		cout<<"\n";
	}
	
	return 0;
}

// bool isLowerTriangularMatrix(int mat[N][N])
// {
// 	for (int i = 0; i < N; i++)
// 		for (int j = i + 1; j < N; j++)
// 			if (mat[i][j] != 0)
// 				return false;
// 		return true;
// }

// // Driver function.
// int main()
// {
// 	int mat[N][N] = { { 1, 0, 1, 0 },
// 					{ 1, 4, 0, 0 },
// 					{ 4, 6, 2, 0 },
// 					{ 0, 4, 7, 6 } };

// 	// Function call
// 	if (isLowerTriangularMatrix(mat))
// 		cout << "Yes";
// 	else
// 		cout << "No";
// 	return 0;
// }