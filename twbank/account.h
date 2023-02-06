#pragma once

namespace twbank
{
	class account
	{
	public:
		float& deposit(int );
		float& withdraw(int );
		float balance();

		account();
		explicit account(float );

	private:
		float Money;
	};
}