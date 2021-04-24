/*************************************************************************
** Program Filename: functions.cpp
** Author: Megan McCormick
** Date: 2/8/15
** Decription: Uses functions to turn a string into binary, and a binary
** string into decimal.
** Input: Character string, Binary string
** Output: Binary string, Character string.
**************************************************************************/
#include<cmath>
#include<iostream>
#include<string>
#include<cstring>

using namespace std;
//function for binary leading zeros.
int length_int(int number)
{
   int count;
   for(count = 0;number > 0;count++)
   {
      number = number/10;
   }
   return count;
}

/*******************************************************************
** Function: length_int
** Description: Counts the amount of bits used in a integer number
** and returns the count.
** Parameter: An integer number value.
** Pre-Conditions: Full integer number.
** Post-Condition: Count value is set at the number of bits in the
** integer.
*******************************************************************/
int dec_to_bin(string mssg)//converts to binary
{
   for(int x = 0; x <= mssg.length()- 1; x++)
   {
      int binary =0, i = 1, number;

      number = (int)mssg.at(x);

      while(number >0)
      {
	 binary = (number%2)*i + binary;
	 number = number/2;
	 i = 10*i;
      }
      if (length_int(binary) == 7)
	 cout << "0" << binary;
      else 
	 cout <<"00"<<binary;
   }	
   cout<<endl;
}

/*******************************************************************
** Function: dec_to_bin()
** Description: Converts a string of ASCII values to binary
** Parameter: String of characters
** Pre-Conditions: String of characters.
** Post-Condition: Binary values of string.
*******************************************************************/

string get_user_in()
{
   string mssg;//gets user input for ASCII string
	cout << "Please enter a string." << endl;
	getline(cin,mssg);
	return (string)mssg;
}
/*******************************************************************
** Function: get_user_in()
** Description: Prompts user for a string
** Parameter: String of characters
** Pre-Conditions: String of character.
** Post-Condition: String of characters as a veriable.
*******************************************************************/
int for1(string bbin);//prototype of function

int bin_check(string bin)
{
   for(int x=0; x <= bin.length()-1;x++)
   {
      if((bin.length()%8==0) && for1(bin)<128 && for1(bin)>32 && (bin.at(x) == '0' || bin.at(x) == '1'))// makes sure it is a correct string
      {
	 return 1;
      }
      else
      {
	 return 0;
      }
   }
}

/*******************************************************************
** Function: bin_check()
** Description: Error checks input
** Parameter: String of binary
** Pre-Conditions: String of binary.
** Post-Condition: true or false.
*******************************************************************/
string get_user_bin()
{
   string bin;
   cout<<"Please enter a binary number"<<endl;
   getline(cin,bin);//gets binary string

   while(bin_check(bin) == 0)
   {
      cout<<"Don't break my code dude. Try again."<<endl;
      getline(cin,bin);
   }

   return bin;
}

/*******************************************************************
** Function:get_user_bin()
** Description: Prompts user for binary number
** Parameter: None
** Pre-Conditions: None
** Post-Condition: Binary string
*******************************************************************/
int for1(string bbin)
{

   
	 int  bchar=0;
	 for (int bcount = 7; bcount >= 0; bcount--)
         {	 
      	    if (bbin.at(7-bcount) =='1')
	    {
	    	bchar += pow(2,bcount);
    	    }
            else if (bbin.at(7-bcount) == '0')
	    {
	    	bchar += 0;

            }
            else 
            {
		cout<< "You're an idiot. Stop trying to break my program."<<endl;
		break;
	    }	
          }      

	  return bchar;
   
}
/*******************************************************************
** Function: for1()
** Description: Converts a string of binary to ASCII part 1.
** Parameter: String of characters
** Pre-Conditions: String of characters.
** Post-Condition: ASCII characters
*******************************************************************/
void for2(string bin)
{	
   string bbin;
   int bytes = bin.length()/8;
   for (int bycount = 0;bycount < bytes;bycount++)
   {   
   	bbin.assign(bin, bycount *8, 8);
   	cout<<(char)for1(bbin);
   }

	
}
/*******************************************************************
** Function: for2()
** Description: Converts a string of binary to ASCII part 2.
** Parameter: String of characters
** Pre-Conditions: String of characters.
** Post-Condition: ASCII characters as a full string.
******************************************************************/
int main(int argc, char *argv[])//Takes input from comman line
{
   string mssg1,mssg2,letter1,letter2;
   letter1 = argv[1];
   letter2 = argv[3];
   mssg1 = argv[2];
   mssg2 = argv[4];//converts c-strings to c++ strings
    if(argc == 5 && letter1 =="-a" || letter1 == "-b" && letter2 =="-a" || letter2=="-b"){// error checking
      if( letter1 == "-a"){// setting guidlies for inputs
	 dec_to_bin(mssg1);
      }
      else if (letter2=="-a"){
	 dec_to_bin(mssg2);
      }
      if (letter1 == "-b"){
      	 if(bin_check(mssg1)==0)
         {
             cout<<"Don't break my code dude. Try again."<<endl;
         }  
         else if(bin_check(mssg1) ==1)
         {
             for2(mssg1);   
 	     cout<<endl;
	 }
      }
      
      else if (letter2 =="-b"){
      	 if(bin_check(mssg2)==0)
         {
               cout<<"Don't break my code dude. Try again."<<endl;
         }
         else if(bin_check(mssg2) ==1)
         {
	       for2(mssg2);
               cout<<endl;
         }
      }
   }
   else{
      cout<<"You did not enter the right amount of arguments or you didn't enter -a or -b right. Please try again"<<endl;

   }
}
 
