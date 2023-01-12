#include <iostream>
#include <time.h>

using namespace std;

int randInt(int min, int max)
{
    int res = ((max - min) * ((float)rand() / RAND_MAX)) + min;
    return res;
}

int main()
{
    srand(time(nullptr));
    int **arr, n, m;
    arr = new int*[n];
    double res[n];
    cout << "rows: ";
    cin >> n;
    cout << "columns: ";
    cin >> m;
    for (int i=0; i<n; i++) {
        arr[i] = new int[m];
        for (int j=0; j<m; j++)
            arr[i][j] = randInt(1, 10);
    }

    for (int i=0; i<n; i++) {
        int sum = 0;
        for (int j=0; j<m; j++) {
            sum += arr[i][j];
            cout << arr[i][j] << " ";
        }
        res[i] = (double)sum / n;
        cout << "avg: " << res[i] << endl;
    }
    return 0;
}
