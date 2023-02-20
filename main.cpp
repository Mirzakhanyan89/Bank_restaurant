/* main.cpp */

#include "restaurant.h"
#include "bank.h"

int main() {
	User us ("AN", "Isa");
	Bank ba;
	ba.add_deposit(us, 1000);
	us.add_money (1000);
	us.add_deposit (200);
	us.reduce_deposit (100);
	ba.withdraw (us, 500);
	std::cout << ba.get_balance() << " :\t Balance of bank"<< std::endl;
	std::cout << us.get_money() << " :\t Balance of user"<< std::endl;
	Restaurant res;
	Salad sal {"Capital", 50000};
	res.order_food (us, sal);
	res.order_reserve_table (us);

return 0;
}
