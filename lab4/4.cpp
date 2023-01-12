#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int randInt(int min, int max)
{
	return min + (rand() % (max - min + 1)); 
}

int findMax(int* arr, int n)
{
    int max = -1;
    for (int i=0; i<n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int map(int omin, int omax, int val, int nmin, int nmax)
{
    return (val - omin) * (nmax - nmin) / (omax - omin) + nmin;
}

int main()
{
	srand(time(nullptr));
    int arr[5000];
    int nums[21] = {0};
    for (int i=0; i<5000; i++) {
        int n = randInt(0, 20);
        arr[i] = n;
        nums[n]++;
    }
    int m = findMax(nums, 21);
    for (int i=0; i<21; i++) {
        string n_str = i / 10 > 0 ? to_string(i) : "0" + to_string(i);
        cout <<  n_str << " " << string(map(0, m, nums[i], 0, 10), '*') << " (" << nums[i] << ")" <<endl;
        /* cout << i << " " << string(3, '*') << endl; */
    }
    return 0;
}
