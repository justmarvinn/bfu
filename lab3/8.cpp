#include <iostream>

using namespace std;

string convert(int dec, string bin)
{
/*     if (dec > 0) { */
/*         convert(dec/2, bin); */
/*         bin += to_string(dec % 2); */
/*     } */
/*     if (dec == 0) */
/*         return bin; */
/*     return bin; */

    bin += to_string(dec % 2);
    if (dec < 2)
        return bin;
    return convert(dec / 2, bin);
}

int main()
{
    int num;
    cout << "number: ";
    cin >> num;
    string res = convert(num, "");
    int len = res.length();
    for (int i=0; i<len/2; i++) {
        char tmp = res[i];
        res[i] = res[len-i-1];
        res[len-i-1] = tmp;
    }
    cout << res << endl;
    return 0;
}
