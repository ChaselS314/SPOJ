#include <iostream>
using namespace std;

int main()
{
    int n;
    int s[100];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s[i];

    int i = 0, j = n-1;
    while(true){
        if(i+1 < n && s[i] > s[i+1])
            i++;
        else break;
    }
    while(true){
        if(j-1 >= 0 && s[j] > s[j-1])
            j--;
        else break;
    }
    if(i == j || i+1 == j)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;

}
