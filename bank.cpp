/* bank.cpp */

#include "bank.h"

void Bank::add_deposit (User& user , size_t money) {
	if (user.get_money() >= money) {
		m_map[user.get_id()] += money;	
		user.add_deposit (money);
		m_bank_amount += money;
	} else 	{
		std::cout<< " You don't have enough money to make a deposity!\n";
	}
}

void Bank::withdraw (User& user, size_t money) {
	if (m_bank_amount >= money) {
		if (user.get_deposit () >= money) {
			user.reduce_deposit (money);
		} else { 
			user.add_money (money);
		}
	m_map[user.get_id()] -= money;	
	m_bank_amount -= money;
	} else {
		std::cout<< "Bank don't have enough money to give a loan!\n";
	}
}

const size_t Bank::get_balance() const {
	return m_bank_amount;
}


