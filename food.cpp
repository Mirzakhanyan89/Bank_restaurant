/* food.cpp */

#include "food.h"

 Food::~Food () {}

Burger::Burger (std::string name, size_t price) { 
 	m_name = name; 
	m_price = price; 
}  

const std::string& Burger::get_name () const {
	return m_name;
}

const size_t  Burger::get_price () const {
	return m_price;
}

Salad::Salad (std::string name, size_t price) {
	m_name = name; 
	m_price = price;
}  

const std::string& Salad::get_name () const {
	return m_name;
}

const size_t Salad::get_price () const {
	return m_price;
}

Juice::Juice (std::string name, size_t price) { 
	m_name = name; 
	m_price = price; 
}  

const std::string& Juice::get_name () const {
	return m_name;
}

const size_t Juice::get_price () const {
	return m_price;
}

