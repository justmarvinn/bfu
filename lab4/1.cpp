#include <iostream>

using namespace std;

int randInt(int min, int max)
{
	srand(rand());
	return min + (rand() % (max - min + 1)); 
}

void edges(double &min, double &max, double* arr, int n)
{
    for (int i=0; i<n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
}

int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    double array[n];
    for (int i=0; i<n; i++)
        array[i] = (double)randInt(-1000, 1000);
    double min, max;
    edges(min, max, array, n);
    cout << "minimum " << min << endl;
    cout << "maximum " << max << endl;

    return 0;
}
