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
    int n, m;
    cout << "rows: ";
    cin >> n;
    cout << "columns: ";
    cin >> m;

    int **matrix = new int*[n];
    int five = 0, two = 0;
    for (int i=0; i<n; i++) {
        matrix[i] = new int[m];
        bool isFive = true, isTwo = false;
        for (int j=0; j<m; j++) {
            matrix[i][j] = randInt(2, 6);
            cout << matrix[i][j] << " ";
            if (matrix[i][j] == 2)
                isTwo = true;
            if (matrix[i][j] != 5)
                isFive = false;
        }
        if (isFive)
            five++;
        if (isTwo)
            two++;
        cout << endl;
    }
    cout << endl;
    cout << "two number: " << two << endl;
    cout << "five number: " << five << endl;

    return 0;
}
