#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    int n, m;
    string str, stmp;
    vector<string> vstr;
    char trans[26];

    cin >> n;
    cin >> str;
    cin >> m;
    getchar();
    for(int i = 0; i < m; i++)
    {
        getline(cin, stmp);
        vstr.push_back(stmp);
    }

    for(int i = 0; i < 26; i++)
        trans[i] = 'a' + i;
    for(int i = 0; i < n; i++)
        trans[str[i]-'a'] = str[(i+1)%n];

    for(auto str : vstr)
    {
        for(auto i : str)
        {
            if(i == ' ') cout << ' '; 
            else
                cout << trans[i-'a'];
        }
        cout << endl;
    }
    return 0;
}
