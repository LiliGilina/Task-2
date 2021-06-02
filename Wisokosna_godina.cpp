#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Въведете число:\n";
    cin >> i;
    if(i%4==0)
         cout << "Годината " << i << " е високосна.\n";
    if(i%4!=0)
         cout << "Годината " << i << " не е високосна.\n";
	return 0;
}
