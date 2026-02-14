#include <iostream>
using namespace std;

void addmatrices(int matA[3][3], int matB[3][3], int matsum[3][3])
{
    for(int i = 0; i < 3; i++)
    {
    	 for(int j = 0; j < 3; j++)
    	 {
    	 	matsum[i][j] = matA[i][j] + matB[i][j];
		 }
	}       
}

void multiplymatrices(int matA[3][3], int matB[3][3], int matproduct[3][3])
{
    for(int i = 0; i < 3; i++)
    {
    	for(int j = 0; j < 3; j++)
    	{
    		matproduct[i][j]=0;
            for(int k = 0; k < 3; k++)
            {
            	matproduct[i][j] += matA[i][k] * matB[k][j];
			}
                
		}
	}
}

int main()
{
    int matA[3][3], matB[3][3], matsum[3][3], matproduct[3][3];

    cout << "Enter elements in matrix A (3x3): "<<endl;
    for(int i = 0; i < 3; i++)
    {
    	for(int j = 0; j < 3; j++)
    	{
    		cin >> matA[i][j];
		}
	}
        
    cout << "Enter elements in matrix B (3x3): "<<endl;
    for(int i = 0; i < 3; i++)
    {
    	for(int j = 0; j < 3; j++)
    	{
    		 cin >> matB[i][j];
		}
	}
        
    addmatrices(matA, matB, matsum);

    cout << "Sum of matrices A and B: "<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
        	cout << matsum[i][j] << "\t";
		}
        cout << endl;
    }

    multiplymatrices(matA, matB, matproduct);

    cout << "Product of matrices A and B :"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
        	cout << matproduct[i][j] << "\t";
		}
        cout << endl;
    }

    return 0;
}
