#include<iostream>

using  namespace std;

int main()
{
	int sweet;
	int mouse;
	int person;
	int life;
	int soda;
	int sweet_life;	
	int sweet_kill;

	cout << " How much sweetner does it take to kill the mouse?"<<endl;
	cin >> sweet;
	cout<<"How much does the mouse weighi(lbs)?"<<endl;
	cin >> mouse;
	cout<<"How much do you weight(lbs)?"<<endl;
	cin >> person;
	cout<<" How long will you live while dieting(years)?"<<endl;
	cin>> life;
	cout<< "How many diet sodas do you drink a week?"<<endl;
	cin<< soda;
	
	sweet_kill = (person*sweet)/mouse;
	cout<<"The amount of sweetner needed to kill you is "<< sweet_kill <<endl;
	
	sweet_life = life*52*soda;
	cout<<"The amount of sweetner you will consume in a lifetime "<< sweet_life <<endl;


	if(sweet_life == sweet_kill)
		cout<< "Yes, you will die of soda."<<endl;
	else 
		cout<<"No, soda will not kill you."<<endl;
}
