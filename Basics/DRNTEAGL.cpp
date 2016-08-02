#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int index = 1;
        int maxdis_sq = 0;
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            if(maxdis_sq < x*x + y*y){
                maxdis_sq = x*x + y*y;
                index = i+1;
            }
        }
        cout << "Case " << i+1 << ": " << index <<endl;
    }
    return 0;
}
