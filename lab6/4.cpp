#include <iostream>
#include <string>

using namespace std;

string to_roman(int num)
{
    int Ms = num / 1000;
    num %= 1000;

    int CM = num / 900;
    num -= CM * 900;

    int D = num / 500;
    num -= D * 500;

    int CD = num / 400;
    num -= CD * 400;

    int Cs = num / 100;
    num %= 100;

    int XC = num / 90;
    num -= XC * 90;

    int L = num / 50;
    num -= L * 50;

    int XL = num / 40;
    num -= XL * 40;

    int Xs = num / 10;
    num %= 10;

    int IX = num / 9;
    num -= IX * 9;

    int V = num / 5;
    num -= V * 5;

    int IV = num / 4;
    num -= IV * 4;

    int Is = num;
    /* cout << "M: " << Ms << endl */
    /*      << "CM: " << CM << endl */
    /*      << "D: " << D << endl */
    /*      << "CD: " << CD << endl */
    /*      << "C: " << Cs << endl */
    /*      << "XC: " << XC << endl */
    /*      << "L: " << L << endl */
    /*      << "XL: " << XL << endl */
    /*      << "X: " << Xs << endl */
    /*      << "IX: " << IX << endl */
    /*      << "V: " << V << endl */
    /*      << "IV: " << IV << endl */
    /*      << "I: " << Is << endl; */

    string res = string(Ms, 'M') +
                 (CM ? "CM" : "") +
                 (D ? "D" : "") +
                 (CD ? "CD" : "") +
                 string(Cs, 'C') + 
                 (XC ? "XC" : "") + 
                 (L ? "L" : "") + 
                 (XL ? "XL" : "") +
                 string(Xs, 'X') +
                 (IX ? "IX" : "") +
                 (V ? "V" : "") +
                 (IV ? "IV" : "") +
                 string(Is, 'I');
    return res;
}

int main()
{
    int num;
    cout << "number: "; cin >> num;
    cout << to_roman(num) << endl;
    return 0;
}
