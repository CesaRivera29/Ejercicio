#include <iostream>
using namespace std;

int main(){
	int n = 1234;
	int reverseOFn = 0;
	
	
	while (n > 0) { // test experssion
	 //loop body
	 reverseOFn = reverseOFn * 10 + n % 10;
	 // update expression
	 n = n / 10;
	}
	
	cout << "Reverse of n is: " << reverseOFn;
}