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

    int ipq = 0;    // a simple pointer pointed to Q sequence
    bool belong = false;
    for(int i = 0; i < n; i++){
        int curitem = s[i];
        belong = false;
        for(; ipq < m; ipq++){
            if(q[ipq] == curitem){
                belong = true;
                break;
            }
            if(q[ipq] > curitem){
                break;
            }
        }
        if(belong)
            cout << curitem << ' ';
    }
    cout << endl;
    return 0;

}
