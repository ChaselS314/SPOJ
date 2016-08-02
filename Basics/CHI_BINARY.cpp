#include <iostream>
#include <algorithm>
using namespace std;

unsigned int bin2uint(string bin)
{
    unsigned int res = 0;

    for(auto i : bin)
    {
        res *= 2;
        res += i-'0';
    }

    return res;
}
string uint2bin(unsigned int uint)
{
    if(0 == uint) return "0";
    string res;

    while(uint)
    {
        if(uint%2)  res.append("1");
        else res.append("0");
        uint /= 2;
    }

    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    string sn;
    cin >> sn;
    int n = bin2uint(sn);

    while(n--)
    {
        string soper, sa, sb;
        cin >> soper >> sa >> sb;
        unsigned int oper, a, b;
        oper = bin2uint(soper);
        a = bin2uint(sa);
        b = bin2uint(sb);
        unsigned int resa, resb;
        switch(oper)
        {
        case 0 :
            resa = a > b ? 1 : 0;
            cout << uint2bin(resa) <<endl;
            break;
        case 1:
            resa = a+b;
            cout << uint2bin(resa) << endl;
            break;
        case 2:
            if(a < b){
                a += pow(2, sb.size());
            }
            resa = a-b;
            cout << uint2bin(resa) << endl;
            break;
        case 3:
            resa = a*b;
            cout << uint2bin(resa) << endl;
            break;
        case 4:
            resa = a/b;
            resb = a%b;
            cout << uint2bin(resa) << " " << uint2bin(resb) << endl;
            break;
        }
    }
    return 0;
}
