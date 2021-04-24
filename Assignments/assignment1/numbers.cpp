/******************************************************************************
** Program: numbers.cpp
** Author: Megan McCormick
** Date 1/16/2015
** Description: Finding max and mins of numbers, and conversion to decimal binary and hexadecimal
** Input: letter
** Outout: binary, decimal, and hexadecimal
*******************************************************************************/
#include <iostream> 
#include <climits>
#include <cmath>
#include <string>

using namespace std;

char hexcon(int hexchar)
{
	if (hexchar == 0)
		return 0;
	else if (hexchar == 1)
		return '1';
	else if (hexchar == 2)
		return '2';
	else if (hexchar == 3)
		return '3';
	else if (hexchar == 4)
		return '4';
	else if (hexchar == 5)
		return '5';
	else if (hexchar == 6)
		return '6';
	else if (hexchar == 7)
		return '7';
	else if (hexchar == 8)
		return '8';
	else if (hexchar == 9)
		return '9';
	else if	(hexchar == 10)
		return 'A';
	else if (hexchar == 11)
		return 'B';
	else if (hexchar == 12)
		return 'C';
	else if (hexchar == 13)
		return 'D';
	else if (hexchar == 14)
		return 'E';
	else if (hexchar == 15)
		return 'F';
			
	
}

/******************************************************************************
 ** Function: hexcon()
 ** Description: converts decimal remainder values to hexadecimal
 ** Paramerter: hexchar
 ** Pre-Conditions: An integer value ranging from 0-15
 ** Post-Conditions: Either an integer value ranging from 0-9 or a character value ranging from A-F
******************************************************************************/

int main()
{

	std::cout << "Minimum value of signed char is " << SCHAR_MIN << std::endl;
	std::cout << "Maximum value of signed char is " << SCHAR_MAX << std::endl;
	std::cout << "Minimum value of unsigned char is " << 0 << std::endl;
	std::cout << "Maximum value of unsigned char is " << UCHAR_MAX << std::endl;
	cout << "Maximum value of short int is " << SHRT_MAX << endl;
	cout << "Minimum value of short int is " << SHRT_MIN << endl;
	cout << "Maximum value of unsigned  short int is " << USHRT_MAX << endl;
	cout << "Minimum value for unsigned short int is 0" <<  endl;
	cout << "Maximum value for int is " << INT_MAX << endl;
	cout << "Minimum value for int is " << INT_MIN << endl;
	cout << "Maximum value for unsigned int is " << UINT_MAX << endl;
	cout << "Minimum value for unsigned int is 0" << endl;
	cout << "Maximum value for long int is " << LONG_MAX << endl;
	cout << "Minimum value for long int is " << LONG_MIN << endl;
	cout << "Maximum value for unsigned long int is " << ULONG_MAX << endl;
	cout << "Minimum value for unsigned long int is 0" << endl;
	
	//Manual calculation of max and mins.

	short max_short; 
	short min_short;
	unsigned short max_ushort;

	max_short =( pow(2,(8*sizeof(short)-1)) - 1);
	min_short = (pow(-2,(8*sizeof(short)-1)));
	max_ushort = ((unsigned)pow(2,(8*sizeof(short))) - 1);
	
	cout << "Maximum short int is " <<  max_short << endl;
	cout << "Minimum short int is " << min_short << endl;
	cout << "Maximum unsigned short int is " << max_ushort << endl;    
	cout << "Minimum unsgned short int is 0" << endl;
	
	int max_int;
	int min_int;
	unsigned int max_uint;

	max_int = (pow(2,(8*sizeof(int)-1)) - 1);

	min_int = (pow(-2,(8*sizeof(int)-1)));
	max_uint = ((unsigned int)pow(2,(8*sizeof(int))) - 1);
	
	cout << "Maximum int is " << max_int << endl;
	cout << "Minimum int is " << min_int << endl;
	cout << "Maximim unisgned int is " << max_uint << endl;
	cout << "Minimum unsigned int is 0" << endl;


	cout << "Maximum long int is " << (long)pow(2,8*sizeof(long)-1)-1 << endl;
	cout << "Minimum long int is " << (long)pow(-2,8*sizeof(long)-1) << endl;
	cout << "Maximum unsigned long int is " << (unsigned long)pow(2,8*sizeof(long))-1 << endl;
	cout << "Minimum usigned long int is 0" << endl;

	//New values for signed will produce the min amout of bits that can be sued, for unsigned the code prints 0.
	
	cout << (long) pow(2,8*sizeof(long)-1)<<endl;
	cout << (unsigned long) pow(2,8*sizeof(unsigned long))<<endl;
	
	cout <<(int) pow(2,8*sizeof(int)-1)<<endl;
	cout <<(unsigned int) pow(2,8*sizeof(unsigned int))<<endl;

	cout <<(short) pow(2,8*sizeof(short)-1)<<endl;
	cout <<(unsigned short) pow(2,8*sizeof(unsigned short))<<endl;	
	
	// Characer prompter 
	
	char letter;
	
	cout << "Please enter a letter. Do note that if more than one character "<<endl;
	cout <<"is given this program will only print the values for the first character" << endl;
	cin >> letter;
	cout << "Here is your letter in ASCII: " << letter << endl;
	cout << "Here is your letter in decimal: " << (int)letter << endl;

	//Binary program and converter

	int binary =0; 
	int i =1;
	int number;
		
	number = (int)letter;
	while(number > 0)
	{
		binary = (number%2)*i + binary;
		number = number/2;
		i=10*i;
	}
	
	
	cout << "Here is you letter in binary: " << binary << endl;
	
	//Hexadecimal conversion math with use of hexcon function.
	
	int hex1;
	int hex2;
	char hexchar1;
	char hexchar2;
	int num;

	num = (int)letter;
	hex1 = num%16;
	hex2 = (num/16)%16;

	hexchar1 = hexcon(hex2);
	hexchar2 = hexcon(hex1);
	
	cout<<"Here in your letter in hexadecimal: " <<hexchar1<<hexchar2<<endl;
		
	return 0;

}
