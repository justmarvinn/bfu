#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

float randFloat(float min, float max)
{
	srand(rand());
	float res = ((max - min) * ((float)rand() / RAND_MAX)) + min;
	return res;
}

int main()
{
	srand(time(nullptr));
	float x, y;
	x = randFloat(1.0, 10.0);
	y = randFloat(1.0, 10.0);
	cout << "coordinates: (" << x << ", " << y << ")" << endl;
	float cosAlpha = x / sqrt(pow(x, 2) + pow(y, 2));
	float alpha = acos(cosAlpha);
	alpha = alpha * 180 / M_PI;
	cout << "alpha: " << alpha << endl;
	return 0;
}
