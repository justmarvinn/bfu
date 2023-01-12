#include <iostream>
#include <time.h>
#include <thread>
#include <stdlib.h>
#include <vector>

using namespace std;

const int height = 156;
const int width = 32;
const int pixels = width * height;

int main()
{
    srand(time(nullptr));
    vector<vector<bool>> field(width, vector<bool>(height));
    vector<vector<bool>> nfield(width, vector<bool>(height));
    char *screen = new char[pixels+1];
    screen[pixels] = '\0';
    for (int i=0; i<width; i++) {
        for (int j=0; j<height; j++)
            field[i][j] = rand() % 2;
    }

    while (true) {
        for (int x=0; x<width; x++) {
            for (int y=0; y<height; y++) {
                int n = 0;
                for (int i=-1; i<2; i++)
                    for (int j=-1; j<2; j++) {
                        if (i == 0 && j == 0)
                            continue;
                        try {
                            if (field.at(x+i).at(y+j))
                                n++;
                        } catch (const out_of_range& ignored) {}
                    }
                bool isAlive = field[x][y];
                if (!isAlive && n == 3)
                    nfield[x][y] = true;
                else if (isAlive && (n == 2 || n == 3))
                    nfield[x][y] = true;
                else
                    nfield[x][y] = false;
                isAlive? cout << '@' : cout << ' ';
            }
            cout << endl;
        }
        field = nfield;
        cout << flush;
        this_thread::sleep_for(chrono::milliseconds(250));
        system("clear");
    }

    return 0;
}
