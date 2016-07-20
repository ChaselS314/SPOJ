#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    char chartmp[] = "*.";
    int linenum;
    cin >> linenum;
    vector<array<int, 2>> vaboundary;

    for(int i = 0; i < linenum; i++){
        int num1, num2;
        cin >> num1 >> num2;
        array<int, 2> atmp{num1, num2};
        vaboundary.push_back(atmp);
    }

    for(auto boundary : vaboundary){
        for(int i = 0; i < boundary[0]; i++){
            for(int j = 0; j < boundary[1]; j++){
                if(i > 0 && i < boundary[0]-1 && j > 0 && j < boundary[1]-1)
                    cout << chartmp[1];
                else
                    cout << chartmp[0];
            }
            cout << '\n';
        }
        cout << endl;
    }
	return 0;
}
