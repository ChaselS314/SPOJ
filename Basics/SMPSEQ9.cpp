#include <iostream>
using namespace std;

int main() {

	int n, m;
	int s[100], q[100];
	double sums = 0, sumq = 0;

	cin >> n;
	for(int i = 0; i < n; i++){
        cin >> s[i];
        sums += s[i];
	}

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> q[i];
        sumq += q[i];
    }

    if(sums/n > sumq/m){
        for(int i = 0; i < n; i++)
            cout << s[i] << ' ';
    }
    else{
        for(int j = 0; j < m; j++)
            cout << q[j] << ' ';
    }
    cout << endl;
	return 0;
}
