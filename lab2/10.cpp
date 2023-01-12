#include <iostream>
#include <time.h>

using namespace std;

int randInt(int min, int max)
{
	srand(rand());
	return min + (rand() % (max - min + 1)); 
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));
	int score, number, user_try;
	score = 0;
	bool running = true;
	while (running) {
		number = randInt(0, 10);
		cout << number << endl;
		for (int i=1; i<4; i++) {
			cout << "счет: " << score << " попытка " << i << ": ";
			cin >> user_try;
			if (user_try == number) {
				score++;
				cout << "Верно!" << endl;
				break;
			} else {
				cout << "Неверно!" << endl;
				if (i == 3) {
					cout << "Вы проиграли =(" << endl;
					string tmp = "";
					do {
						cout << "Хотите начать с начала (y / n): ";
						cin >> tmp;
					} while (!(tmp == "y" || tmp == "n"));
					if (tmp == "n") {
						running = false;
					} else {
						score = 0;
					}
				}
			}
		}
	}
	return 0;
}
