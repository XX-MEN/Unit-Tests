#include "coffeeMachine.h"
#include <gtest/gtest.h>

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(makeCoffeeTest, TestZwracania) {
	CoffeeMachine cm;
	EXPECT_EQ(1, cm.makeCoffee(1));
	EXPECT_EQ(2, cm.makeCoffee(2));
	EXPECT_EQ(3, cm.makeCoffee(3));
	EXPECT_EQ(4, cm.makeCoffee(4));
	EXPECT_NE(5, cm.makeCoffee(5));
	EXPECT_NE(0, cm.makeCoffee(0));
}

TEST(App,startCoffeeMachine_OK)
{
	CoffeeMachine cm;
	std::stringstream input("5");
	std::cin.rdbuf(input.rdbuf());
	int l = cm.startCoffeeMachine();
	EXPECT_EQ(0, l);
}

TEST(App,stopCoffeeMachine_FAIL)
{
	CoffeeMachine cm;
	int stop = cm.stopCoffeeMachine();
	EXPECT_NE(-1, stop);
}

