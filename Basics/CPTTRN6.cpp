#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
    int linenum;
    cin >> linenum;
    vector<array<int, 4>> vaboundary;

    for(int i = 0; i < linenum; i++)
    {
        int num1, num2, num3, num4;
        cin >> num1 >> num2 >> num3 >> num4;
        array<int, 4> atmp{num1, num2, num3, num4};
        vaboundary.push_back(atmp);
    }

    for(auto boundary : vaboundary)
    {
        for(int i = 0; i < boundary[0] + (boundary[0]+1) * boundary[2]; i++){
            for(int j = 0; j < boundary[1] + (boundary[1]+1) * boundary[3]; j++){
                if((i+1)%(boundary[2]+1) == 0 && (j+1)%(boundary[3]+1) == 0)
                    cout << '+';
                else if((i+1)%(boundary[2]+1) == 0)
                    cout << '-';
                else if((j+1)%(boundary[3]+1) == 0)
                    cout << '|';
                else
                    cout << '.';
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
