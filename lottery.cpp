#include <iostream>
using namespace std;

int main() {
    cout << "Enter your lottery pick (three digits): ";
	int guess = 0;// enter a guess
	cin >> guess;
	int a=(guess/100);
	int b=(guess/10)%10;
	int c=guess%10;
	cout << "Your guess is " << guess << endl;
    int lottery,lotteryDigit1,lotteryDigit2,lotteryDigit3;
    srand(time(0)); //seed random number generator
    do
        lotteryDigit1= rand() % 10;
    while (lotteryDigit1==0);
    do
        lotteryDigit2= rand() % 10;
    while (lotteryDigit2==lotteryDigit1);
    do
        lotteryDigit3= rand() % 10;
    while (lotteryDigit3==lotteryDigit1 || lotteryDigit3==lotteryDigit2);  
    lottery=lotteryDigit1*100+lotteryDigit2*10+lotteryDigit3;
    cout << "The lottery number is " << lottery << endl;
	// Check the guess
	if (guess == lottery){
		cout << "Exact match: you win $10,000";
	}
	else if (a == lotteryDigit2
	&& b == lotteryDigit3 && c == lotteryDigit1 || a == lotteryDigit3
	&& b == lotteryDigit1 && c == lotteryDigit2 || a == lotteryDigit3
	&& b == lotteryDigit2 && c == lotteryDigit1 || a == lotteryDigit1
	&& b == lotteryDigit3 && c == lotteryDigit2 || a == lotteryDigit2
	&& b == lotteryDigit1 && c == lotteryDigit3){
		cout << "Match all digits: you win $3,000";
	}
	else if (a == lotteryDigit1 || a == lotteryDigit2 || a == lotteryDigit3
	|| b == lotteryDigit1 || b == lotteryDigit2 || b == lotteryDigit3
	|| c == lotteryDigit1 || c == lotteryDigit2 || c == lotteryDigit3){
		cout << "Match one digit: you win $1,000";
	}
	else{
		cout << "Sorry, no match";
	}
	return 0;
} 