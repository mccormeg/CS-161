#include<cmath>
#include<iostream>
#include<string>

using namespace std;

void numrom(int num)
{
   string out;
   while(num >0)
   {
      if(num>=1000)
      {
	 out.append("M");
	 num-=1000;
      }
      else if (num>=500)
      {
	 out.append("D");
	 num-=500;
      }
      else if (num>=900)
      {
	 out.append("CM");
	 num-=900;
      }
      else if (num>=400)
      {
	 out.append("CD");
	 num-=400;
      }
      else if (num>=100)
      {
	 out.append("C");
	 num-=100;
      }
      else if (num>=90)
      {
	 out.append("XC");
	 num-=90;
      }	 
      else if (num>=50)
      {
	 out.append("L");
	 num-=50;
      }
      else if (num>=40)
      {
	 out.append("XL");
	 num-=40;
      }
      else if (num>=10)
      {
	 out.append("X");
	 num-=10;
      }
      else if (num>=9)
      {
	 out.append("IX");
	 num-=9;
      }
      else if (num>=5)
      {
	 out.append("V");
	 num-=5;
      }
      else if (num>=4)
      {
	 out.append("IV");
	 num-=4;
      }
      else if (num>=1)
      {
	 out.append("I");
	 num-=1;
      }
   }
   cout<<"Your number is "<<out<<endl;
}

int main()
{
   int x = 1,bytes,dec=0;
   string romnum;
   
   
       cout<<"Please enter a string of roman numerals."<<endl;
       getline(cin,romnum);
       
       bytes = romnum.length();

       for(int bycount = 0; bycount < bytes; bycount++)
       {
	  if(bycount+1<bytes && bycount-1>=0 && romnum.at(bycount) == romnum.at(bycount-1) && romnum.at(bycount) == romnum.at(bycount+1))
          {
	  	cout<<"You cannot have more then three of the same roman numerals. Try again."<<endl;
	  }	

	  else if (romnum.at(bycount) == 'I')
	  {
	     if(bycount+1 < bytes && romnum.at(bycount+1)== 'V') 
	     {
		dec+=4;
	     }
	     else if(bycount+1 < bytes && romnum.at(bycount+1)=='X')
	     {
		dec+=9;
	     }
	     else
	     {
	        dec += 1;
	     }
	  }
	  else if (romnum.at(bycount) == 'V')
	  {
	     if(bycount-1>=0 && romnum.at(bycount-1) == 'I')
	     {
		dec+=0;
	     }
	     else if (bycount+1<bytes && romnum.at(bycount+1) == 'L')
	     {
		dec+=45;
	     }
	     else 
	     {
		dec+=5;
	     }

	  }
	  else if (romnum.at(bycount) == 'X') 
	  {
	     if(bycount-1>=0 && romnum.at(bycount-1) == 'I')
	     {
		dec+=0;
	     }
	     else if (bycount+1 <bytes && romnum.at(bycount+1) == 'L')
	     {
		dec+=40;
	     }
	     else if (bycount+1 <bytes && romnum.at(bycount+1) == 'C')
	     {
		dec+=90;
	     }

	     else 
	     {
		dec+=10;
	     }
	     
	  }
	  else if (romnum.at(bycount) == 'L')
	  {
	     if(bycount-1>=0 && romnum.at(bycount-1) == 'X')
	     {
		dec+=0;
	     }
	     else if(bycount-1>=0 && romnum.at(bycount-1) == 'V')
	     {
		dec+=0;
	     }
	     else 
	     {
		dec+=50;
	     }
	  }
	  else if (romnum.at(bycount) == 'C')
	  {
	     if(bycount-1>=0 && romnum.at(bycount-1) == 'X')
	     {
		dec+=0;
	     }
	     else if (bycount+1 <bytes && romnum.at(bycount+1) == 'D')
	     {
		dec+=400;
	     }
	     else if (bycount+1 <bytes && romnum.at(bycount+1) == 'M')
	     {
		dec+=900;
	     }
	     else 
	     {
		dec+=100;
	     }
	 }
	  else if (romnum.at(bycount) == 'D')
	  {
	     if(bycount-1>=0 && romnum.at(bycount-1) == 'L')
	     {
		dec+=0;
	     }
	     else if (bycount -1 >=0 && romnum.at(bycount-1) == 'C')
	     {
		dec+=0;
	     }
	     else 
	     {
		dec+=100;
	     }
	  }
          else if (romnum.at(bycount) == 'M')
	  {
	     dec += 1000;
	  }
	  else
	  {
	     cout<<"That Is not a roman numeral try again."<<endl;
	     break;
	  }
	 
       }
       cout<<dec<<endl;
       dec = 0;
       
    int num;
    
    cout<<"Please eneter a decimal number."<<endl;
    cin>> num;
    numrom(num);	 


}
