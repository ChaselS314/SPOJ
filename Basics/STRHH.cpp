#include <iostream>
#include <vector>
using namespace std;

int main() {
	int linenum;
	vector<string> vstr;
	string stmp;

    cin >> linenum;
	for(int i = 0; i < linenum; i++){
		cin >> stmp;
		vstr.push_back(stmp);
	}

	for(auto str : vstr){
		for(size_t i = 0; i < str.length()/2; i++){
			if(0 == i%2)
				cout << str[i];
		}
		cout << endl;
	}

	return 0;
}
