//============================================================================
// Name        : Contour.cpp
// Author      : T N TOSELAND
// Version     :
// Copyright   : Your copyright notice
// Description : Contour Integral calculator, used in complex analysis.
// Note that this particular file deals with Toroidal coordinates, and transforming between cartesian and Toroidal coordinates as defined here:
// https://en.wikipedia.org/wiki/Toroidal_coordinates [online] (accessed 28/05/2022).
// Note that this can use complex valued inputs.
//============================================================================

#include <iostream>
#include <complex>
#include <vector>
#include <cstdlib>
#include <cmath>

int main()

{
// Note that these are all double precision variables for precision and accuracy purposes.

	using namespace std;
	complex<double> x;
	complex<double> y;
	complex<double> z;
	complex<double> phi;
	complex<double> rho;
	complex<double> d1;
	complex<double> d2;
	complex<double> tau;
	complex<double> sigma;
	double a;
	{
/* below are the inputs needed to begin converting between cartesian and toroidal coordinates. Note that these inputs
 * can be real or complex.
 */
		cout << "Please enter coordinate x \n";
		cin >> x;
		cout << "Please enter coordinate y \n";
		cin >> y;
		cout << "Please enter coordinate z \n";
		cin >> z;
		cout << "Please enter a parameter a \n";
		cin >> a;
		cout << "Please enter a parameter d1 \n";
		cin >> d1;
		cout << "Please enter a parameter d2 \n";
		cin >> d2;
	    // prints out the results from the conversion of y and x to coordinate phi.
		cout << "The results are phi: \n" << atan(y/x);
		cout << "Tau is \n" << std::abs(log(std::abs(d1)/std::abs(d2)));
	}
	return 0;
