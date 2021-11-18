#include "Calculation.h"

//cost calculation for each car model
void Calculation::i30calc() {

	do
	{
		cout << "Enter your deposit" << endl;
		cin >> deposit;
		
		if (deposit < (i30price / 10))
		{	
			cout << "Minimum deposit must be 10%" << endl;
		}
		else if (deposit > i30price)
			{
				cout << "You are overpaying the value" << endl;
			}
		else
		{
			cout << "The deposit you put in " << deposit << endl;

			if (deposit == i30price)
			{
				cout << "You have paid for the car in the full" << endl;
			}
			else
			{
				int totaldepositi30 = (i30price - deposit);
				do
				{
				cout << "Total amount left to pay is " << totaldepositi30 << endl;
				cout << "How much do you want to pay monthly?" << endl;
				cin >> monthly;
				cout << "=============" << endl;
				if (monthly>totaldepositi30)
				{
					cout << "You are over paying for the remaining amount" << endl;
				}
				else if (monthly ==totaldepositi30)
				{
					cout << "You will be paying the remaining amount in full" << endl;
				}
				else
				{
					int financei30 = ceil(totaldepositi30 / monthly);
					cout << "It will take " << financei30 << " months to pay " << endl;
				}
				} while (monthly > totaldepositi30);
				
			}
		}
	} while (deposit < (i30price / 10)|| deposit > i30price);
}

void Calculation::Konacalc() {

	
	do
	{
		cout << "Enter your deposit" << endl;
		cin >> deposit;

		if (deposit < (konaprice / 10))
		{
			cout << "Minimum deposit must be 10%" << endl;
		}
		else if (deposit > konaprice)
		{
			cout << "You are overpaying the value" << endl;
		}
		else
		{
			cout << "The deposit you put in " << deposit << endl;

			if (deposit == konaprice)
			{
				cout << "You have paid for the car in the full" << endl;
			}
			else
			{
				int totaldepositkona = konaprice - deposit;
				do
				{
					cout << "Total amount left to pay is " << totaldepositkona << endl;
					cout << "How much do you want to pay monthly?" << endl;
					cin >> monthly;

					cout << "=============" << endl;
					if (monthly > totaldepositkona)
					{
						cout << "You are over paying for the remaining amount" << endl;
					}
					else if (monthly == totaldepositkona)
					{
						cout << "You will be paying the remaining amount in full" << endl;
					}
					else
					{
						double financekona = ceil(totaldepositkona / monthly);
						cout << "It will take " << financekona << " months to pay " << endl;
					}
				} while (monthly > totaldepositkona);

			}
		}
	} while (deposit < (konaprice / 10) || deposit > konaprice);
}


void Calculation::Corsacalc() {

	do
	{
		cout << "Enter your deposit" << endl;
		cin >> deposit;

		if (deposit < (corsaprice / 10))
		{
			cout << "Minimum deposit must be 10%" << endl;
		}
		else if (deposit > corsaprice)
		{
			cout << "You are overpaying the value" << endl;
		}
		else
		{
			cout << "The deposit you put in " << deposit << endl;

			if (deposit == corsaprice)
			{
				cout << "You have paid for the car in the full" << endl;
			}
			else
			{
				int totaldepositcorsa = corsaprice - deposit;
				do
				{
					cout << "Total amount left to pay is " << totaldepositcorsa << endl;
					cout << "How much do you want to pay monthly?" << endl;
					cin >> monthly;

					cout << "=============" << endl;
					if (monthly > totaldepositcorsa)
					{
						cout << "You are over paying for the remaining amount" << endl;
					}
					else if (monthly == totaldepositcorsa)
					{
						cout << "You will be paying the remaining amount in full" << endl;
					}
					else
					{
						double financecorsa = ceil(totaldepositcorsa / monthly);
						cout << "It will take " << financecorsa << " months to pay " << endl;
					}
				} while (monthly > totaldepositcorsa);

			}
		}
	} while (deposit < (corsaprice / 10) || deposit > corsaprice);
}


void Calculation::Astracalc() {

	do
	{
		cout << "Enter your deposit" << endl;
		cin >> deposit;

		if (deposit < (astraprice / 10))
		{
			cout << "Minimum deposit must be 10%" << endl;
		}
		else if (deposit > astraprice)
		{
			cout << "You are overpaying the value" << endl;
		}
		else
		{
			cout << "The deposit you put in " << deposit << endl;

			if (deposit == astraprice)
			{
				cout << "You have paid for the car in the full" << endl;
			}
			else
			{
				int totaldepositastra = astraprice - deposit;
				do
				{
					cout << "Total amount left to pay is " << totaldepositastra << endl;
					cout << "How much do you want to pay monthly?" << endl;
					cin >> monthly;

					cout << "=============" << endl;
					if (monthly > totaldepositastra)
					{
						cout << "You are over paying for the remaining amount" << endl;
					}
					else if (monthly == totaldepositastra)
					{
						cout << "You will be paying the remaining amount in full" << endl;
					}
					else
					{
						double financeastra = ceil(totaldepositastra / monthly);
						cout << "It will take " << financeastra << " months to pay " << endl;
					}
				} while (monthly > totaldepositastra);

			}
		}
	} while (deposit < (astraprice / 10) || deposit > astraprice);
}

void Calculation::Golfcalc() {
	do
	{
		cout << "Enter your deposit" << endl;
		cin >> deposit;

		if (deposit < (golfprice / 10))
		{
			cout << "Minimum deposit must be 10%" << endl;
		}
		else if (deposit > golfprice)
		{
			cout << "You are overpaying the value" << endl;
		}
		else
		{
			cout << "The deposit you put in " << deposit << endl;

			if (deposit == golfprice)
			{
				cout << "You have paid for the car in the full" << endl;
			}
			else
			{
				int totaldepositgolf = golfprice - deposit;
				do
				{
					cout << "Total amount left to pay is " << totaldepositgolf << endl;
					cout << "How much do you want to pay monthly?" << endl;
					cin >> monthly;

					cout << "=============" << endl;
					if (monthly > totaldepositgolf)
					{
						cout << "You are over paying for the remaining amount" << endl;
					}
					else if (monthly == totaldepositgolf)
					{
						cout << "You will be paying the remaining amount in full" << endl;
					}
					else
					{
						double financegolf = ceil(totaldepositgolf / monthly);
						cout << "It will take " << financegolf << " months to pay " << endl;
					}
				} while (monthly > totaldepositgolf);

			}
		}
	} while (deposit < (golfprice / 10) || deposit > golfprice);
}


void Calculation::Polocalc() {
	do
	{
		cout << "Enter your deposit" << endl;
		cin >> deposit;

		if (deposit < (poloprice / 10))
		{
			cout << "Minimum deposit must be 10%" << endl;
		}
		else if (deposit > poloprice)
		{
			cout << "You are overpaying the value" << endl;
		}
		else
		{
			cout << "The deposit you put in " << deposit << endl;

			if (deposit == poloprice)
			{
				cout << "You have paid for the car in the full" << endl;
			}
			else
			{
				int totaldepositpolo = poloprice - deposit;
				do
				{
					cout << "Total amount left to pay is " << totaldepositpolo << endl;
					cout << "How much do you want to pay monthly?" << endl;
					cin >> monthly;

					cout << "=============" << endl;
					if (monthly > totaldepositpolo)
					{
						cout << "You are over paying for the remaining amount" << endl;
					}
					else if (monthly == totaldepositpolo)
					{
						cout << "You will be paying the remaining amount in full" << endl;
					}
					else
					{
						double financepolo = ceil(totaldepositpolo / monthly);
						cout << "It will take " << financepolo << " months to pay " << endl;
					}
				} while (monthly > totaldepositpolo);

			}
		}
	} while (deposit < (poloprice / 10) || deposit > poloprice);
}
