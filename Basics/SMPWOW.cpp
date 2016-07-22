#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int repetedtime;
    cin >> repetedtime;
    stringstream str;
    str << 'W';
    for(int i = 0; i < repetedtime; i++)
        str << 'o';
    str << 'w';
    cout<< str.str() <<endl;
    return 0;
}
