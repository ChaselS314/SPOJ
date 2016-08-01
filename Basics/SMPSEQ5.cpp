#include <iostream>
using namespace std;

int main()
{
    int n , m;
    int s[100], q[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> q[i];

    for(int i = 0; i < n && i < m; i++){
        if(s[i] == q[i])
            cout << i+1 << ' ';
    }
    cout << endl;
    return 0;

}
