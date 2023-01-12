#include <iostream>
#include <time.h>

using namespace std;

int randInt(int min, int max)
{
        int res = ((max - min) * ((float)rand() / RAND_MAX)) + min;
        return res;
}

void printArray2(int **arr, int n, int m)
{
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void m_sum(int **a, int **b, int **c, int n, int m)
{
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            c[i][j] = a[i][j] + b[i][j];
}

int main()
{
    srand(time(nullptr));
    int n, m;
    cout << "rows: ";
    cin >> n;
    cout << "columns: ";
    cin >> m;
    int **a = new int*[n];
    int **b = new int*[n];
    int **c = new int*[n];
    for (int i=0; i<n; i++) {
        a[i] = new int[m];
        b[i] = new int[m];
        c[i] = new int[m];
        for (int j=0; j<m; j++) {
            a[i][j] = randInt(1, 10);
            b[i][j] = randInt(1, 10);
        }
    }
    printArray2(a, n, m);
    cout << endl;
    printArray2(b, n, m);
    cout << endl;
    m_sum(a, b, c, n, m);
    printArray2(c, n, m);

    return 0;
}
