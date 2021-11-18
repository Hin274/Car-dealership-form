#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Calculation
{
public:
	void i30calc();
	void Konacalc();
	void Corsacalc();
	void Astracalc();
	void Golfcalc();
	void Polocalc();
	
	int i30price = 20550;
	int konaprice = 25300;
	int corsaprice = 16000;
	int astraprice = 21200;
	int golfprice = 22350;
	int poloprice = 18100;

	int deposit;
	int monthly;
	
	
};

