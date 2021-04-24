#include<iostream>
#include<cmath>

using namespace std;

float rec_integrate_rectangle(float step, float a,float w,float total)
{
	float area;
	area = (pow(a,5)+10)*(w);
	step--;
	total += area;

	if (step>0)
	{
	   a= a+w;
	   rec_integrate_rectangle(step,a,w,total);
	  
	}
	else
	{
	   return total;
	}
	
}
float iter_integrate_rectangle(float step,float a, float w)
{
   float total=0,area;
   for (int i = 0;i <step;i++)
   {
      area=(pow(a,5)+10)*(w);
      total+=area;
      a +=w;
   }
   return total;
}

 int main()
{
   float step,a,b,w,total =0;
   cout<<"Please enter how many rectangles you want."<<endl;
   cin>> step;
   cout<<"Please enter the lower bound."<<endl;
   cin>>a;
   cout<<"Please enter the upper bound."<<endl;
   cin>>b;
   w =((b-a)/step);
     cout<<"The area using the recursive function, under the curve (x^5)+10 between "<<a<<" and "<<b<<" is "<<rec_integrate_rectangle(step,a,w,total)<<endl;
     cout<<"The area using the iterative function, under the curve (x^5)+10 between "<<a<<" and "<<b<<" is "<<iter_integrate_rectangle(step,a,w)<<endl;
}


