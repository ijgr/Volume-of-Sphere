// Sphere.cpp
// Calculate the volume of a sphere.
#include <iostream>
#include <cmath>
#include <algorithm>
#define PI 3.14
using namespace std;

int main()
{
	double radius, sphereVolume;
	cout<<"Enter radius of sphere: ";
	cin >> radius;
	sphereVolume= (4.0 / 3.0) * PI * pow(radius, 3);
	cout<<"Volume is "<< sphereVolume<<endl;
	// end method determineSphereVolume
	
	system("pause");
	return 0;
}
