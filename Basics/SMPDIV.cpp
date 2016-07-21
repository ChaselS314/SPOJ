#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i ++){
        int n, x, y;
        cin >> n >> x >> y;
        for(int i = 2; i < n; i++){
            if(i%x == 0 && i%y != 0)
                cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}
