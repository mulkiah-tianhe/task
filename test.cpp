#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;

float distanceCalculate(double x1, double y1, double x2, double y2)
{
	float a = x1 - x2; //calculating number to square in next step
	float b = y1 - y2;
	float dist;

	dist = pow(a, 2) + pow(b, 2);       //calculating Euclidean distance
	dist = sqrt(dist);                  

	return dist;
}

 main()
{
	double x1, y1, x2, y2;
	float dist;
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;

    dist = distanceCalculate(x1, y1, x2, y2);    //initiate equation
	cout<<setprecision(4)<<dist;
	
}
