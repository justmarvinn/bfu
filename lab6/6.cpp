#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

bool isFile(string name)
{
    return (name.find('.') != string::npos);
}

int main()
{
    string path;
    cout << "input Unix path: "; cin >> path;
    stringstream p(path);
    string segment;
    vector<string> seglist;

    while (getline(p, segment, '/')) {
        seglist.push_back(segment);
    }

    cout << "a) ";
    if (seglist.size() > 1)
        for (auto s : seglist)
            if (!isFile(s))
                cout << s << "/";
    cout << endl;

    cout << "b) " << seglist.back() << endl;

    string ext;
    stringstream ss(seglist.back());
    vector<string> list;

    while (getline(ss, ext, '.'))
        list.push_back(ext);

    cout << "c) " << list.back() << endl;
    cout << "d) " << list.front() << endl;
    cout << "e) " << seglist[seglist.size()-2] << endl;

    cout << "f) ";
    for (int i=0; i<(seglist.size()-1); i++)
        cout << seglist[i] << "/";
    cout << list.front() << ".html" << endl;
    
    return 0;
}
