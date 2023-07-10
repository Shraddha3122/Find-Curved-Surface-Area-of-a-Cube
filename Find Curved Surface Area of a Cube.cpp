// C++ program to find area
// curved surface area of a cube
#include <bits/stdc++.h>
using namespace std;

// utility function
double CurvedareaCube(double a)
{
	return (4 * a * a);
}
// driver function
int main()
{
	double a = 2;
	cout << "Curved surface area = " << CurvedareaCube(a);
	return 0;
}
