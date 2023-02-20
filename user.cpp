/* user.cpp */

#include "user.h"

User::User (const std::string& name, const std::string& addres) : m_name {name}, m_addres {addres} {
	m_id = ++m_id; 
} 

void User::add_money (const size_t money) {
	m_money += money;
}

void User::add_deposit (const size_t money) {
	if (m_money >= money) {
		m_deposit_money += money;
		m_money -= money;
	}
}

void User::reduce_deposit (const size_t money) {
	if (m_deposit_money >= money) {
		m_deposit_money -= money;
		m_money += money;
	} else {
		std::cout<< "You don't have enough deposite_money to withdraw!\n";
	}
}

void User::pay (const size_t money) {
	if (m_money >= money) {
		m_money -= money;
	} else {
		std::cout<< "You cann't buy that food; you haven't so much mony!\n";
	}
}

const size_t User::get_deposit () const {
	return m_deposit_money;
}

const size_t User::get_money () const {
	return m_money;
}

const size_t User::get_id () const {
	return m_id;
}

const std::string& User::get_addres () const {
	return m_addres;
}
