#include "Menu.h"
#include "Cars.h"


void Menu::menu() {
	string hyundai = "Hyundai";
	string vauxhall = "Vauxhall";
	string volksWagen = "VolksWagen";

	cout << "Choose your make" << endl;
	cout << hyundai << endl;
	cout << vauxhall << endl;
	cout << volksWagen << endl;
	string menuinput;

	do
	{
		cin >> menuinput;
		if (menuinput == hyundai) {
			string i30 = "i30";
			string kona = "Kona";
			string hyundaiinput;
			cout << endl;
			cout << "Select your model to view the specification" << endl;
			cout << "i30" << endl;
			cout << "Kona" << endl;
			cout << endl;
			do {
				cin >> hyundaiinput;
				if (hyundaiinput == i30)
				{
					Hyundai list;
					list.i30();
				}
				else if (hyundaiinput == kona)
				{
					Hyundai list;
					list.Kona();
				}
				else
				{
					cout << "Please enter the model name" << endl;
				}
			} while (true);
		}
		else if (menuinput == vauxhall) {
			{
				string corsa = "Corsa-E";
				string astra = "Astra";
				string vauxhallinput;
				cout << endl;
				cout << "Select your model to view the specification" << endl;
				cout << "Corsa-E" << endl;
				cout << "Astra" << endl;
				cout << endl;
				do {
					cin >> vauxhallinput;
					if (vauxhallinput == corsa)
					{
						Vauxhall list;
						list.Corsa();
					}
					else if (vauxhallinput == astra)
					{
						Vauxhall list;
						list.Astra();
					}
					else
					{
						cout << "Please enter the model name" << endl;
					}
				} while (true);
			}
		}
		else if (menuinput == volksWagen) {
			{
				string golf = "Golf";
				string polo = "Polo";
				string volkswageninput;
				cout << endl;
				cout << "Select your model to view the specification" << endl;
				cout << "Golf" << endl;
				cout << "Polo" << endl;
				cout << endl;
				do {
					cin >> volkswageninput;
					if (volkswageninput == golf)
					{
						VolksWagen list;
						list.Golf();
					}
					else if (volkswageninput == polo)
					{
						VolksWagen list;
						list.Polo();
					}
					else
					{
						cout << "Please enter the model name" << endl;
					}
				} while (true);
			}
		}
		else
		{
			cout << "Please enter the make" << endl;
		}
	} while (true);
}