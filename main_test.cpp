#include "coffeeMachine.h"
#include <gtest/gtest.h>

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(App,startCoffeeMachine_OK)
{
	CoffeeMachine cm;
	std::stringstream input("5");
	std::cin.rdbuf(input.rdbuf());
	int l = cm.startCoffeeMachine();
	EXPECT_EQ(0, l);
}

/*TEST(App,startCoffeeMachine_FAIL)
{
	CoffeeMachine cm;
	std::stringstream input("1");
	std::cin.rdbuf(input.rdbuf());
	int l = cm.makeCoffee(input);
	EXPECT_NE(1, l);
}
*/
