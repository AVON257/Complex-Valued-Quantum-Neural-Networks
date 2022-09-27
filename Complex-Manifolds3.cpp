//============================================================================
// Name        : Complex-Manifolds3.cpp
// Author      : T N TOSELAND
// Version     :
// Copyright   : Your copyright notice
// Description : This is a prototype machine learning loop for use with Bayesian Neural Networks, using several complex variables theory.
// Note that this can actually be adapted for use in other areas, such as numerical analysis.
// Note also that this does not produce a closed form derivative output.
// This file is primarily for the user interface.
//============================================================================

#include <iostream>
#include "Torus.hxx"

// Still to do on this: Implement the derivative and integral loops, Torus.hxx contains the required variables and coordinate transforms from cartesian.
// The formulae obtained are from here: https://mathworld.wolfram.com/ToroidalCoordinates.html

using namespace std;

int main() {
	cout << "Please enter x coordinate" << endl; // prints "Please enter x coordinate"
int n;
int i = 10;
for(i=0;i<n;i++)
	if (n >= 1)
		break;
	else
		continue;
{
  cin>> n;
  Toroid::x.push_back(n); // used to push the elements n which are complex doubles, into the vector x in the toroidal vector space.
cout << "Please enter a y coordinate \n";
cin >> n;
Toroid::y.push_back(n); // used to push the elements for y into the vector y.

cout << "Please enter a z coordinate \n";
cin >> n;
Toroid::z.push_back(n); // used to push the elements for y into the vector y.
}

class Derivative { // used to define derivatives in several complex variables theory (Toroidal coordinates).
public:

};

	return 0;
}
