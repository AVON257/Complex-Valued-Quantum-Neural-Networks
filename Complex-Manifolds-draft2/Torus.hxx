/*
 * Torus.hxx
 *
 *  Created on: 6 Jun 2022
 *
 * This header file deals with converting between coordinate systems, both cartesian and toroidal, including complex valued ones.
 *      Author: Thomas N Toseland.
 */

#ifndef TORUS_HXX_
#define TORUS_HXX_

#include <complex>
#include <iostream>
#include <vector>

// Below are variable declarations for Toroidal coordinates, and functions used for this.
// Note that these CAN be complex or real valued.

namespace Toroid {
std::vector<std::complex<double>> x;
std::vector<std::complex<double>> y;
std::vector<std::complex<double>> z;
std::vector<std::complex<double>> rho;
std::vector<std::complex<double>> phi;
std::vector<std::complex<double>> d1;
std::vector<std::complex<double>> d2;
std::vector<std::complex<double>> sigma;
std::vector<std::complex<double>> r;
std::vector<double> a;
namespace cartesian { // This namespace is used exclusively to convert from cartesian to toroidal coordinates.

// Converts between Cartesian and Toroidal coordinates for the phi coordinate (toroidal).
void carttor() {
std::cout << "The result for phi is" << std::atan(y[1]/x[1]);
}
void carttau() { // converts between cartesian and toroidal coordinates for the tau coordinate (toroidal).
std::cout << "The result for tau is" << std::abs(std::log(std::abs(d1[1])/std::abs(d2[1])));
}
void cartrho() { // returns the result for the rho coordinate.
std::cout << "The result for rho is" << std::abs(std::sqrt(std::abs(x[1])+std::abs(y[1])));
}
void cartd1 () {
std::cout << "The result for d1 is" << std::sqrt(std::pow(rho[1], 2) + std::pow(a[1], 2) + std::pow(z[1], 2));
}
void cartd2 () {
std::cout << "The result for d2 is" << std::sqrt(std::pow(rho[1], 2) - std::pow(a[1], 2) + std::pow(z[1], 2));
}
void cartr () {
std::cout << "The result for r is" << std::sqrt(std::pow(rho[1], 2) + std::pow(z[1], 2));
}
void cartsigma () {
std::cout << "The result for sigma is \n"; // This needs to be finished asap.
}
}
}

#endif /* TORUS_HXX_ */
