/* restaurant.cpp */

#include "restaurant.h"

void Restaurant::order_food (User& us, const Food& fo) {
	if (us.get_money() >= fo.get_price()) {
		us.pay (fo.get_price());
	} else {
		std::cout<< "You cann't buy that food; you haven't so much mony!\n";
	}
}

const size_t Restaurant::get_free_tables () const {
	return m_free_tables;
}

void Restaurant::order_reserve_table (const User& us) {
	if (m_free_tables > 0) {
	m_reserved_tables[m_free_tables-1] = us.get_id();
	--m_free_tables;
	} else {
		std::cout<< "There aren't any free table!\n";
	}
}
/*
void Restaurant::add_food (const Food* fo) {
	m_menu.push_back (fo);
}
*/

