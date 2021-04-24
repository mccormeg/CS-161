#include <iostream>
#include <cmath>
using namespace std;

int main(){

	float water_weight = 62.4;
	float radius, bforce, volume,weight;

	// Prompt user for weight and radius of sphere
	cout << "Please enter the weight: "<<endl;
	cin >> weight;

	cout << "Please enter the radius: "<<endl;
	cin >> radius;
	
	//Calculate the volume and buoyancy force
	volume = (4/3)*M_PI*pow(radius,3);
	bforce = volume * water_weight;

	//Determine if the sphere will sink or float
	if(bforce >= weight){
	   cout << "The sphere will float!\n";
	}
	else {
	   cout << "The sphere will sink!\n";
	}
	
	return 0;
}
