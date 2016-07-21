#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
    int linenum;
    cin >> linenum;
    vector<array<int, 3>> vaboundary;

    for(int i = 0; i < linenum; i++)
    {
        int num1, num2, num3 ;
        cin >> num1 >> num2 >> num3 ;
        array<int, 3> atmp{num1, num2, num3 };
        vaboundary.push_back(atmp);
    }

    for(auto boundary : vaboundary)
    {
        for(int i = 0; i < boundary[0]*boundary[2]*2; i++){
            for(int j = 0; j < boundary[1]*boundary[2]*2; j++){
                int l = i % (boundary[2]*2);
                int c = j % (boundary[2]*2);
                if((l+c)%(2*boundary[2]) == boundary[2]-1)
                    cout << '/';
                else if((c+boundary[2]*2 -l)%(2*boundary[2]) == boundary[2])
                    cout << '\\';
                else
                    cout << '.';
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
