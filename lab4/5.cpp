#include <iostream>
#include <time.h>

using namespace std;

int randInt(int min, int max)
{
	int res = ((max - min) * ((float)rand() / RAND_MAX)) + min;
	return res;
}

int trace(int *m, int n)
{
    int res = 0;
    for (int i=0; i<n; i++) 
        res += *(m+i*n+i);
    return res;
}

int main()
{
    srand(time(nullptr));
    int matrix[20][20];
    for (int i=0; i<20; i++) {
        for (int j=0; j<20; j++) {
            matrix[i][j] = randInt(0, 10);
            cout << matrix[i][j] << " "; 
        }
        cout << endl;
    }
    int tr = trace(matrix[0], 20, 20);
    cout << "trace: " << tr << endl;
    return 0;
}
