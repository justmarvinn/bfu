#include <iostream>
#include <time.h>

using namespace std;

int randInt(int min, int max)
{
	int res = ((max - min) * ((float)rand() / RAND_MAX)) + min;
	return res;
}

void transp(int **m, int n)
{
    int **m1 = new int*[n];
    for (int i=0; i<n; i++) {
        m1[i] = new int[n];
        for (int j=0; j<n; j++)
            m1[i][j] = m[j][i];
    }
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            m[i][j] = m1[i][j];
}

int main()
{
    srand(time(nullptr));
    int n;
    cout << "matrix size: ";
    cin >> n;
    int **matrix = new int*[n];
    for (int i=0; i<n; i++) {
        matrix[i] = new int[n];
        for (int j=0; j<n; j++) {
            matrix[i][j] = randInt(1, 10);
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n" << string(2*n-1, '*') << "\n\n";
    transp(matrix, n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}
