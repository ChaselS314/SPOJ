#include <iostream>
using namespace std;

int main()
{
    int n , x;
    int s[100], q[100];
    cin >> n >> x;
    for(int i = 0; i < n; i++)
        cin >> s[i];
    for(int i = 0; i < n; i++)
        cin >> q[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= x; j++){
            if(i-j >= 0 && s[i] == q[i-j] || i+j < n && s[i] == q[i+j])
                cout << i+1 << ' ';
        }
    }
    cout << endl;
    return 0;

}
