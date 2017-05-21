#ifndef COFFEEMACHINE_H_
#define COFFEEMACHINE_H_

#include <array>

class CoffeeMachine {
public:
	CoffeeMachine();
	int startCoffeeMachine();

//private:	//jak bedzie private to nie mam dostepu w testach
	int makeCoffee(int choice);
	int stopCoffeeMachine();
	std::array<int,4> coffeeCounter;

};

#endif /* COFFEEMACHINE_H_ */
