#include "Cars.h"

//car brands and model specs
void Hyundai::i30() {
	
	auto specificationi30 = { "Model: i30", "Engine: 1.4","Fuel: Petrol","Doors: 5","Seats: 4","Gear: Manual","Price: 20,550 Pounds"};

	for (auto listi30 : specificationi30) {
		cout << listi30 << endl;
	}

}

void Hyundai::Kona() {
	
	auto specificationKona = { "Model: Kona", "Engine: 1.2","Fuel: Diesel","Doors: 3","Seats: 2","Gear: Automatic","Price: 25,300 Pounds" };

	for (auto listKona : specificationKona) {
		cout << listKona << endl;
	}

}

void Vauxhall::Corsa(){
	
	auto specificationCorsa = { "Model: Corsa-E", "Engine: Battery 50kWh","Fuel: Electric","Doors: 5","Seats: 4","Gear: Automatic","Price: 16,000 Pounds" };

	for (auto listCorsa : specificationCorsa) {
		cout << listCorsa << endl;
	}
}

void Vauxhall::Astra() {

	auto specificationAstra = { "Model: Astra", "Engine: 1.2","Fuel: Petrol","Doors: 5","Seats: 4","Gear: Manual","Price: 21,200 Pounds" };

	for (auto listAstra : specificationAstra) {
		cout << listAstra << endl;
	}
}

void VolksWagen::Golf() {

	auto specificationGolf = { "Model: Golf", "Engine: Plug-in Hybrid 1.4 & 10,4kWh","Fuel: Petrol & Electric","Doors: 5","Seats: 4","Gear: Automatic","Price: 22,350 Pounds" };

	for (auto listGolf : specificationGolf) {
		cout << listGolf << endl;
	}
}

void VolksWagen::Polo() {

	auto specificationPolo = { "Model: Polo", "Engine: 1.2","Fuel: Petrol","Doors: 5","Seats: 4","Gear: Manual","Price: 18,100 Pounds" };

	for (auto listPolo : specificationPolo) {
		cout << listPolo << endl;
	}
}
