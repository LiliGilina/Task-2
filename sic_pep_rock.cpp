#include <iostream>
using namespace std;

int main() {
    int var_try=0;
    cout << "scissor (0), rock (1), paper (2):\n";
    cin >> var_try;
    srand(time(0)); //seed random number generator
    int comp_try = rand()%3 ;
    if (var_try==0 && comp_try==1 || var_try==1 && comp_try==2 || var_try==2 && comp_try==0)
    cout << "You lost";
    if (var_try==0 && comp_try==2 || var_try==1 && comp_try==0 || var_try==2 && comp_try==1)
    cout << "You won";
    if (var_try==comp_try)
    cout << "It's a draw";
	return 0;
}
