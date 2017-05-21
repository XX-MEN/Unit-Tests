#include "coffeeMachine.h"
#include <iostream>
#include <string>

CoffeeMachine::CoffeeMachine() {
	coffeeCounter= {0, 0, 0, 0};
	}

int CoffeeMachine::startCoffeeMachine()
{
	std::string schoice;
	int ichoice(0);
	do
	{
		do
		{
			std::cout << "\nWybierz jaką chcesz kawę \n";
			std::cout << "do wyboru są: (pierwsze dwie kawy są bez mleka, dwie kolejne z mlekiem)\n";
			std::cout << " 1. Espresso \n 2. Black coffee \n 3. Late \n 4. BIG Late \n";
			std::cout << " 5. Wyłączenie Kawomatu \n _________________ \n Twój wybór? :";
			std::cin >> schoice;

			try {
				ichoice=std::stoi(schoice);
			} catch (const std::exception& ex) {
				std::cerr << "\nUWAGA wpisano niedozolony znak. Można wpisywać TYLKO cyfry jako wybór\n";
				ichoice=6;
				//std::cout << komunikat << "\nUWAGA dokonano nieprawidłowego wyboru. Wybierz jeszcze raz właściwy numer\n";
				}
			// std::cout << ichoice << " <- i " << schoice << " <-s ";

			if ((ichoice>5) || (ichoice<1)) std::cout << "\nZły wybór. Wybierz jeszcze raz właściwy NUMER od 1 do 5\n";

		} while ((ichoice>5) || (ichoice<1));

		if (ichoice==5) return stopCoffeeMachine();
			else makeCoffee(ichoice);

	} while (true);

	return 0;
}



int CoffeeMachine::makeCoffee(int choice) {
	std::cout << "\nRobimy kawę ";
	switch (choice)
	{
		case 1:
			std::cout << "Espresso\n";
			coffeeCounter.at(0)++;
			break;
		case 2:
			std::cout << "Black coffee\n";
			coffeeCounter.at(1)++;
			break;
		case 3:
			std::cout << "Late\n";
			coffeeCounter.at(2)++;
			break;
		case 4:
			std::cout << "BIG Late\n";
			coffeeCounter.at(3)++;
			break;
		default:
			std::cout << "Nieprawidlowa opcja\n";
			choice=-1;
			break;
	}
	std::cout << "GOTOWE\n";
	return choice;
}

int CoffeeMachine::stopCoffeeMachine() {
	std::cout << "Od włączenia wykonałem:\n";
	std::cout << coffeeCounter.at(0) << "szt. Espresso\n";
	std::cout << coffeeCounter.at(1) << "szt. Black coffee\n";
	std::cout << coffeeCounter.at(2) << "szt. Late\n";
	std::cout << coffeeCounter.at(3) << "szt. BIG Late\n";
	std::cout << "\n _________________ \n Kawomat wyłączony \n _________________\n";
	return 0;
}
