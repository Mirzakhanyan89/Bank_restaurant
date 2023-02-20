/* restaurant.h	*/

#ifndef REST_H
#define REST_H
#include <vector> 
#include "user.h"
#include "food.h"

class Restaurant {
public:
	void order_food (User&, const Food&);
	const size_t get_free_tables () const;
	void order_reserve_table (const User&);
//	void add_food (const Food*);
private:
	std::vector <Food*> m_menu;
	size_t m_free_tables {50};
	size_t m_reserved_tables[50] {};
};

#endif  // REST_H

