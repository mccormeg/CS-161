#include<cmath>
#include<string>
#include<iostream>

using namespace std;
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000 

string userin()
{
   string rom;
   cout<<"Please enter a string of roman numerals."<<endl;
   cin>>rom;
   return rom;
}


int numcheck(string rom)
{ 
  int bad; 
  for ( int x = 0; x >= rom.length()-1;x++)
  {
     if ( rom.at(x) == 'I' || rom.at(x) == 'V' || rom.at(x)== 'X' || rom.at(x) == 'L'|| rom.at(x) == 'C'|| rom.at(x) == 'D'|| rom.at(x) == 'M')
     { 
	cout<<"Thanks for inputing a correct string."<<endl;
	bad = 1;
     }
     else 
     {
	cout<< "You need to stop"<<endl;
	break;
	bad =0;
     }
  }
}

int con(string rom)
{
   int dec=0;
 
   for( int x = 0; x >= rom.length()-1; x++)
   {
      if ( rom.at(x-1)< rom.at(x) && rom.at(x-1)<= rom.length()-1)
      { 
	 dec += (rom.at(x) - rom.at(x-1));
      }
      else
      {
	 dec += rom.at(x);
      }

   }
   return dec;
}

int main()
{
   string rom;
   rom = userin();
   
   cout<<"The number you entered is "<<con(rom)<<endl;
}





