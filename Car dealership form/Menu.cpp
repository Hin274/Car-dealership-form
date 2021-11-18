#include "Menu.h"
#include "Cars.h"
#include "Calculation.h"


void Menu::menu() {
	
	cout << "Car brands" << endl;
	cout << "=============" << endl;
	cout << hyundai << endl;
	cout << vauxhall << endl;
	cout << volksWagen << endl;
	cout << "=============" << endl;
	cout << "Choose your make" << endl;


	do
	{
		cin >> menuinput;
		if (menuinput == hyundai) {
			
			cout << "=============" << endl;
			cout << "Select your model to view the specification" << endl;
			cout << "i30" << endl;
			cout << "Kona" << endl;
			cout << "=============" << endl;
			do {
				cin >> hyundaiinput;
				if (hyundaiinput == i30)
				{
					Hyundai list;
					list.i30();
					
					cout << "=============" << endl;
					
					Calculation cost;
					cost.i30calc();
				}
				else if (hyundaiinput == kona)
				{
					Hyundai list;
					list.Kona();

					cout << "=============" << endl;

					Calculation cost;
					cost.Konacalc();
				}
				else
				{
					cout << "Please enter the model name" << endl;
				}
			} while (hyundaiinput!=i30&&hyundaiinput!=kona);
		}
		else if (menuinput == vauxhall) {
			{
				
				cout << "=============" << endl;
				cout << "Select your model to view the specification" << endl;
				cout << "Corsa-E" << endl;
				cout << "Astra" << endl;
				cout << "=============" << endl;
				do {
					cin >> vauxhallinput;
					if (vauxhallinput == corsa)
					{
						Vauxhall list;
						list.Corsa();

						cout << "=============" << endl;

						Calculation cost;
						cost.Corsacalc();
					}
					else if (vauxhallinput == astra)
					{
						Vauxhall list;
						list.Astra();

						cout << "=============" << endl;

						Calculation cost;
						cost.Astracalc();
					}
					else
					{
						cout << "Please enter the model name" << endl;
					}
				} while (vauxhallinput != corsa && vauxhallinput != astra);
			}
		}
		else if (menuinput == volksWagen) {
			{
			
				cout << endl;
				cout << "Select your model to view the specification" << endl;
				cout << "Golf" << endl;
				cout << "Polo" << endl;
				cout << "=============" << endl;
				do {
					cin >> volkswageninput;
					if (volkswageninput == golf)
					{
						VolksWagen list;
						list.Golf();

						cout << "=============" << endl;

						Calculation cost;
						cost.Golfcalc();
					}
					else if (volkswageninput == polo)
					{
						VolksWagen list;
						list.Polo();

						cout << "=============" << endl;

						Calculation cost;
						cost.Polocalc();
					}
					else
					{
						cout << "Please enter the model name" << endl;
					}
				} while (volkswageninput != golf&&volkswageninput!=polo);
			}
		}
		else
		{
			cout << "Please enter the make" << endl;
		}
	} while (menuinput != hyundai&& menuinput != vauxhall&& menuinput != volksWagen);
}