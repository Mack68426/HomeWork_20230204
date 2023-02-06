#include <iostream>
#include <iomanip>
#include "twbank/account.h"


int main()
{
	twbank::account acc1;			// 0
	twbank::account acc2(500.50F);	// 500.50
	//twbank::account acc3 = 500.50F;	// compile error


	acc1.deposit(400);	// +400
	acc1.withdraw(500); // -500

	std::cout << std::boolalpha
	 	<< acc1.withdraw(500) << std::endl; // 錢不夠不能扣錢而且 print false

	// print the money in the bank
	std::cout << acc1.balance() << std::endl;

	return 0;
}