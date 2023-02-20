/* food.h */
 
#ifndef FOOD_H
#define FOOD_H
#include <string>

class Food {
public:
	virtual const std::string& get_name () const = 0;
	virtual const size_t get_price () const = 0;
	virtual ~Food () = 0;
protected:
	std::string m_name;
	size_t m_price;
};

class Burger : public Food {
public:
	Burger (std::string, size_t);
	const std::string& get_name () const;
	const size_t get_price () const;
};

class Salad : public Food {
public:
	Salad (std::string, size_t);
	const std::string& get_name () const;
	const size_t get_price () const;
};

class Juice : public Food {
public:
	Juice (std::string, size_t);
	const std::string& get_name () const;
	const size_t get_price () const;
};

#endif // FOOD_H

