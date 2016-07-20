#include <iostream>
using namespace std;

short isprimary[100000];

int isPrimary(int n)
{
    if(n < 2) return 0;

    for (int i = 2; i < n; i++)
    {
        if( n % i == 0) return 0;
    }
    return 1;
}

int main()
{
    int linenum;
    int ibegin, iend;
    int range[10][2];

    for(int i = 0; i < 100000; i++)
        isprimary[i] = -1;

    /// Input
    cin >> linenum;
    for(int i = 0; i < linenum; i++)
    {
        cin >> range[i][0] >> range[i][1];
        if(i == 0)
        {
            /// Initialize
            ibegin = range[0][0];
            iend = range[0][1];
        }
        else
        {
            if(range[i][0] < ibegin)
                ibegin = range[i][0];
            if(range[i][1] > iend)
                iend = range[i][1];
        }
    }

    /// Calculate
    for(int i = 0; i < linenum; i++){
        for(int j = range[i][0]; j <= range[i][1]; j++){
            if(-1 == isprimary[j-ibegin]){
                if(isprimary[j-ibegin] = isPrimary(j))
                    cout << j << '\n';
            }
            else if(isprimary[j-ibegin])
                cout << j << '\n';
        }
        cout << '\n';
    }

    return 0;
}
