#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;

	while(t--){
        int m, n, ci, cj;
        cin >> m >> n >> ci >> cj;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i-j == ci-cj || i+j == ci+cj-2)
                    cout << '*';
                else
                    cout << '.';
            }
            cout << endl;
        }
        cout << endl;
	}

	return 0;
}
