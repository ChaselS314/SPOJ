#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i ++){
        int x0, y0, r0;
        cin >> x0 >> y0 >> r0;
        int x1, y1, r1;
        cin >> x1 >> y1 >> r1;
        if(abs(r0-r1)*abs(r0-r1) == abs(x0-x1)*abs(x0-x1) + abs(y0-y1)*abs(y0-y1))
            cout << 'E' << endl;
        else if(abs(r0-r1)*abs(r0-r1) > abs(x0-x1)*abs(x0-x1) + abs(y0-y1)*abs(y0-y1))
            cout << 'I' << endl;
        else
            cout << 'O' << endl;
    }
    return 0;
}
