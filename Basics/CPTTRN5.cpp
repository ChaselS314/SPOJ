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
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        array<int, 3> atmp{num1, num2, num3};
        vaboundary.push_back(atmp);
    }

    for(auto boundary : vaboundary)
    {
        for(int i = 0; i < boundary[0] * (boundary[2]+1) + 1; i++){
            for(int j = 0; j < boundary[1] * (boundary[2] + 1) + 1; j++){
                int L = i / (boundary[2]+1);
                int C = j / (boundary[2]+1);
                int l = i % (boundary[2]+1);
                int c = j % (boundary[2]+1);
                if (l == 0 || c == 0)
                    cout << '*';
                else if(0 == (L+C)%2 && l == c){
                    cout << '\\';
                }
                else if(1 == (L+C)%2 && boundary[2]+1 == (l+c)){
                    cout << '/';
                }
                else
                    cout << '.';
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
