#include <iostream>
#include <sstream>
using namespace std;


int main()
{
    string str;
    stringstream sres;
    cin >> str;
    bool first = true;
    while(str != "#")
    {
        if((str[0] == ':' || str[0] == '-' || str[0] == '>') && str.length() > 1)
        {
            if(first)
            {
                sres << ' ';
            }
            sres << str;
            cin >> str;         // Skip next emo.
        }
        else{
            sres << str;
        }
        first = false;
        char chtmp = cin.get();
        while(chtmp == ' ')
            chtmp = cin.get();
        if(chtmp == '\n')
        {
            sres << "\n";
            first = true;
        }
        else
        {
            cin.putback(chtmp);
            sres << " ";
        }

        cin >> str;
    }

    while(getline(sres, str))
        cout << str << endl;
    return 0;
}
