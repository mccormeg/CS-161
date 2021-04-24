/******************************************************************************
** Program Filename: strings.cpp
** Author: Megan McCormick
** Date: 1/26/15
** Description: Takes a string and outputs a binary, and takes a binary and
** outputs a string.
** Input: String, binary string.
** Output: Binary string, string.
******************************************************************************/
#include<cmath>
#include<iostream>
#include<string>

using namespace std;

int length_int(int number)
{
	int count;
	for(count=0;number>0;count++)
	{		
		number= number/10;
	}
	return count;
}

/******************************************************************************
** Function: length_int
** Description: Counts the amount of bits used in a integer number and returns
** the count.
** Parameter: An integer number value.
** Pre-Conditions: Full integer number.
** Post-Condition: Count value is set at the number of bits in the integer.
******************************************************************************/

int main()
{
	//Prompting for user input of string.
	string mssg;
	cout<<"Please enter a string of characters."<<endl;
	getline(cin,mssg);
	
	//For loop is used to separate each character in th string.
	for(int x = 0; x <= mssg.length() - 1; x++)
	{	int binary = 0;
		int i = 1;
		int number;

		number = (int)mssg.at(x);
		
		//While loop converts each character decimal value into binary.
		while(number > 0)
		{
			binary = (number%2)*i + binary;
			number = number/2;
			i = 10*i;
		}
	
		//Callng of length_int function to add leading zeros to binary
		//value
		int count;
		count = length_int(binary) ;
	
		if (count == 7)
			cout<<"0"<<binary;
		else if (count == 6)
			cout<<"00"<<binary;
		else if (count == 5)
			cout<<"000"<<binary;
		else if (count == 4)
			cout<<"0000"<<binary;
		else if (count == 3)
			cout<<"00000"<<binary;
		else if (count == 2)
			cout<<"000000"<<binary;
		else if (count == 1)
			cout<<"0000000"<<binary;
		else
			cout<<"I don't know what you did but you screwed up."<<endl;
	
	}
	
	cout<<endl;
	
	//Conversion from binary string to character(ASCII) string.	
	string bin;
	int binl;
	int x = 1;
	string bbin;
	int bytes;
	int bchar =0;
	int notb;
	int ibin;
	string sout;

	//Will reprompt user for another string if the string is not binary.
	while(x>0)
	
	{
		cout<<"Please enter a string of binary numbers."<<endl;
		getline(cin,bin);
	
		binl = bin.length();
		bytes = binl/8;
		
		//First set of parameters for binary string. String must 
		//consist of charaters in multiples of eight.
		if (binl%8 == 0)
		{
			cout<<"Thank you for putting in the correct number of characters."<<endl;
			//Will split binary into each charater by splitting
			//into pieces of eight.
			for (int bycount = 0; bycount < bytes ; bycount++)
			{
				bbin.assign(bin, bycount * 8, 8);
								
				//Takes binary piece and converts to decimal
				for (int bcount = 7; bcount >=0; bcount--)
				{
					if (bbin.at(7-bcount) == '1')
					{
						bchar += pow(2,bcount);
					}	
					else if (bbin.at(7-bcount) == '0')
					{
						bchar += 0;
						notb = 1;
					}	
					//Breaks loop if a character is not
					//1 or 0.
					else 
					{
						cout<<"I see you tried to enter a number that is not binary, you are a jerk, try again."<<endl;
						notb = 0;
						break;
					}	
				}
				//Breaks second for loop if a non binary 
				//number is imputed.	
				if ( notb == 0)
				{
					break;
				}
				else 
				{
					ibin = 0;
				}
				//Appends character back into string
				sout.append(1,bchar);
				bchar = 0;	
			}
			//Breaks original while loop if a correct binary
			//string was entered. This will stop re-prompting.
			if (ibin == 0)
	
				break;		
		}	
		//Loops back to re-prompting when a non-binary string
		//is entered.
		else   
		{
			cout<<"You are a terrible person, write a correct binary string."<<endl;
		}	
	}
	//Prints character(ASCII) string.
	cout << sout << endl;
	return 0;

}







