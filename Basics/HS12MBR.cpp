#include <iostream>
#include <vector>
#include <array>
using namespace std;


int xl = -1000, yl = -1000, xr = 1000, yr = 1000;
bool initialed = false;

void updatebounding(const int x, const int y)
{
    if(!initialed){
        xl = xr = x;
        yl = yr = y;
        initialed = true;
        return ;
    }
    xl = x < xl ? x : xl;
    yl = y < yl ? y : yl;
    xr = x > xr ? x : xr;
    yr = y > yr ? y : yr;
}
int main()
{
    int linenum;
    cin >> linenum;
    for(int i = 0; i < linenum; i++)
    {
        int objnum;
        cin >> objnum;
        initialed = false;
        for(int i = 0; i < objnum; i++)
        {
            char ch;
            cin >> ch;
            int a, b, c, d;
            switch(ch)
            {
            case 'p':
                cin >> a >> b;
                updatebounding(a, b);
                break;
            case 'c':
                cin >> a >> b >> c;
                updatebounding(a-c, b-c);
                updatebounding(a+c, b+c);
                break;
            case 'l':
                cin >> a >> b >> c >> d;
                updatebounding(a, b);
                updatebounding(c, d);
                break;
            }
        }
        cout << xl << ' ' << yl << ' ' << xr << ' ' << yr << endl;
    }

    return 0;
}
