#include<iostream>

using namespace std;

int main() 
{
	float cereal_weight;
	float weight_ton;
	float boxes;
	
	cout << "Enter the weight (in ounces) of a box of cereal: "  << endl;
	cin >> cereal_weight; //cereal_weight contains input

	weight_ton = (cereal_weight/35273.92);

	cout << "The weight of a  box of cereal in mectric tons is " << weight_ton << endl;
	
	boxes = (1/weight_ton);

	cout << "The number of boxes in a metric ton is " << boxes << endl;
	
	float lifespan;
	float eat;
	float life_cereal;

	cout << "Please enter your expected life span (in years)." << endl;
	cin >> lifespan;
	cout << "Please enter the number of boxes of cereal you eat a week." << endl;
	cin >> eat;
		
	life_cereal =  (lifespan*52)*eat; 
	cout << "This is how many boxes of cereal you will eat in your lifetime: " << life_cereal << endl;


return 0;
}
