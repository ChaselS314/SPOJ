#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int linenum;
    cin >> linenum;
    for(int i = 0; i < linenum; i++)
    {
        int tuplenum;
        cin >> tuplenum;
        vector<int> index;
        for(int i = 0; i < tuplenum; i++)
        {
            int a = 0, b = 0;
            string tup;
            cin >> tup;
            for(int i = 0; i < 6; i++)
            {
                int tmp = 1;
                if(tup[i] & tmp << i)
                {
                    a = a | tmp << i;
                }
                if(tup[i] & tmp << ((i+3)%6))
                {
                    b = b | tmp << i;
                }
            }
            index.push_back(a);
            index.push_back(b);
        }
        string str;
        cin >> str;
        for(auto it = index.begin(); it != index.end(); it++){
            cout << str[*it];
        }
        cout << endl;
    }

    return 0;
}
