// referenced by @https://github.com/fjozsef

#include <iostream>
using namespace std;

int main()
{
    int linenum;
    cin >> linenum;
    for(int i = 0; i < linenum; i++){
        int row, col, size;
        cin >> row >> col >> size;
        int length = size*2;
        for(int i = 0; i < row*length; i++){
            for(int j = 0; j < col*length; j++){
                int newi, newj;
                newi = i % length;
                newj = j % length;
                bool backslash = true;
                // mapping every quarter to right-top quarter

                // mapping to top-half
                if(newi >= length/2){
                    newi = length - newi - 1;
                    backslash = ! backslash;
                }
                // mapping to right-half
                if(newj < length/2){
                    newj = length - newj - 1;
                    backslash = !backslash;
                }
                // move the origin of the coordinate system to right-top quarter
                newj -= length/2;

                //output
                if(newi == newj)
                    cout << (backslash ? '\\' : '/');
                else if(newi > newj)
                    cout << '*';
                else
                    cout << '.';
            }
            cout << '\n';
        }
        cout << endl;
    }
    return 0;
}
