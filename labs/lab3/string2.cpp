#include<iostream>
#include<string>

using namespace std;

int main()
{
	string mess;
	
	cout<<"Enter a message:"<<endl;	
	
	getline(cin,mess);

	cout<<"Number of characters: "<<mess.length()<<endl;
	
	for(int i=0; i<=mess.length()-1; i++)
	{
		cout<<mess.at(i)<<endl;;
	}

	return 0;
}
