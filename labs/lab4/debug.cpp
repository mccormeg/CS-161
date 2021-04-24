#include <iostream>

#define PROMPT "Please enter a whole number: "
#define NOT_PRIME "The number is not a prime number./n"
#define PRIME "The number is a prime number./n"
#define DONE 0
#define FIRST_FACTOR 2

using namespace std;

int main(){
   	int i;
	int number;

	cout << PROMPT << endl;
	cin >> number;
	/* Prime numbers are defined as any number
	 * greater than one that is only divisible
	 * by one and itself. Dividing the number
	 * be two shortens the time it takes to 
	 * complete. */

	for(i = FIRST_FACTOR; i <= number/2; i++)
	   if (number%i ==0){
	      cout << NOT_PRIME << number << endl;
	      return DONE;
	   }
	cout << PRIME << number << endl;

	return 0;
}       
