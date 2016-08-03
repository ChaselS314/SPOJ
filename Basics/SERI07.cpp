#include <iostream>

using namespace std;

bool isprim(int num){
    if(num < 2) return false;
    for(int i = 2; i < num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int next_prim(int &start){
    int res;
    for(; !isprim(start); start++){}

    res = start;
    start ++;
    return res;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int len;
        cin >> len;
        int start = 0;
        while(len--){
            cout << (next_prim(start) * next_prim(start)) + next_prim(start) << ' ';
        }
        cout << endl;
    }

    return 0;
}
