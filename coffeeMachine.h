#ifndef COFFEEMACHINE_H_
#define COFFEEMACHINE_H_

class CoffeeMachine {
public:
	int startCoffeeMachine();

//private:	//jak bedzie private to nie mam dostepu w testach
	int makeCoffee(int choice);
	int stopCoffeeMachine();
};

#endif /* COFFEEMACHINE_H_ */
