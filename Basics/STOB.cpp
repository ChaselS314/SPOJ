#include <iostream>
#include <algorithm>
using namespace std;

string uint2bin(unsigned int num)
{
    if(num == 0) return "0";
    string res;
    while(num)
    {
        if(num%2) res.append("1");
        else res.append("0");
        num /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string str;
        cin >> str;
        bool duplicated[200];
        for(int i = 0; i < 200; i++)
            duplicated[i] = false;
        unsigned int res = 0;
        for(auto i : str)
        {
            if(!duplicated[i])
            {
                res += i;
                duplicated[i] = true;
            }
        }
        cout << "#" << i+1 << " : " << uint2bin(res) <<endl;
    }

    return 0;
}
