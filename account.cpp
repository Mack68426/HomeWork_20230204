#include "twbank/account.h"

namespace twbank
{
	float& account::deposit(int money)
	{ 
		this->Money += money;

		return this->Money;
	}

	float& account::withdraw(int money)
	{
		if (this->Money > money)
		{
			this->Money -= money;
		}

		return this->Money;
	}

	float account::balance()
	{
		return this->Money * 2.25F;
	}

	account::account(): account(0)
	{
	}

	account::account(float money_now): Money(money_now)
	{
	}
}

