#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        double totalAmount = 0;
        double totalGST = 0;
        while(n--){
            int num;
            string sgst;
            double price;
            cin >> sgst >> num >> price >> sgst;

            if(sgst == "SR"){
                totalGST += num * price * 0.06;
                totalAmount += num * price * 1.06;
            }
            else{
                totalAmount += num * price;
            }
        }
        cout << "Case #" << i+1 << ":\n";
        cout << setiosflags(ios::fixed);
        cout << setprecision(2);
        cout << "Total Amount Include GST: " << totalAmount << endl;
        cout << "Total Amount GST Paid: " << totalGST << endl;
    }

    return 0;
}
