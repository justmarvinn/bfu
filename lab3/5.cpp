#include <iostream>

using namespace std;

int randInt(int min, int max)
{
	srand(rand());
	return min + (rand() % (max - min + 1)); 
}

static bool tr(int n=1234) {
    int number;
    if (n == 1234) {
        number = randInt(1, 10);
        return true;
    } else {
        if (n == number)
            return true;
        else
            return false;
    }
}

int main()
{
    bool running = true;
    setlocale(LC_ALL, "Russian");
    tr();
    while (running) {
        int tmp;
        cout << "Введите число: ";
        cin >> tmp;
        if (tr(tmp))
            cout << "Вы выиграли" << endl;
        else
            cout << "Вы проиграли" << endl;
    }
}
