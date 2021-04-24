#include<cmath>
#include<iostream>
#include<string>

using namespace std;

int numrom1(int num)
{
      if(num>=1000)
      {
	 cout<<"M";
	 num-=1000;
      }
      else if (num>=500)
      {
	 cout<<"D";
	 num-=500;
      }
      else if (num>=900)
      {
	 cout<<"CM";
	 num-=900;
      }
      else if (num>=400)
      {
	 cout<<"CD";
	 num-=400;
      }
      else if (num>=100)
      {
	 cout<<"C";
	 num-=100;
      }
      else if (num>=90)
      {
	 cout<<"XC";
	 num-=90;
      }	
      return num;
}

int numrom2(int num)
{      
      if (num>=50)
      {
	 cout<<"L";
	 num-=50;
      }
      else if (num>=40)
      {
	 cout<<"XL";;
	 num-=40;
      }
      else if (num>=10)
      {
	 cout<<"X";
	 num-=10;
      }
      else if (num>=9)
      {
	 cout<<"IX";
	 num-=9;
      }
      else if (num>=5)
      {
	 cout<<"V";
	 num-=5;
      }
      else if (num>=4)
      {
	 cout<<"IV";
	 num-=4;
      }
      else if (num>=1)
      {
	 cout<<"I";
	 num-=1;
      }
	return num;
}
int romancon(char input){
   int roman;
   if(input == 'M')
      roman = 1000;
   else if (input == 'D')
      roman = 500;
   else if (input == 'C')
      roman = 100;
   else if ( input == 'L')
      roman = 50;
   else if (input == 'X')
      roman = 10;
   else if ( input == 'V')
     roman = 5;
   else if (input == 'I')
     roman = 1;
   else 
      roman =0;

   return roman;

}

int romint()
{
   string input;
   cout<<"Please enter a Roman numeral: "<<endl;
   getline(cin,input);

   int total=0;
   if(input.length()>=2)
   {
      for(int x=0; x<=input.length()-2; x++)
      {
	 if(romancon(input.at(x)) < (romancon(input.at(x+1))))
	 {
	    total -= romancon(input.at(x));
         }
	 else if (romancon(input.at(x))>= romancon(input.at(x)))
	 {
	    total += romancon(input.at(x));
	 }
	 else 
	 {
	    total += romancon(input.at(x));
	 }
      }
   }
   total += romancon(input.at(input.length()-1));
   cout<< "Your number is: "<<total << endl;
}

	


int main()
{


    int num;
    romint();
    cout<<"Please eneter a decimal number."<<endl;
    cin>> num;
    while (num>0){
    num = numrom2(numrom1(num));
    }  
    cout<<endl; 


}
