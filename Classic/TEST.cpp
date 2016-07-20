#include <iostream>
using namespace std;

int main() {
	
	int ival;
	while(cin >> ival){
		if(ival == 42)
		break;
		cout << ival << endl;
	}

	return 0;
}