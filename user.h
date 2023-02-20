/* user.h */

#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>

class User {
public:
	User (const std::string&, const std::string&);
	void add_money (const size_t); 
	void add_deposit (const size_t);
	void reduce_deposit (const size_t);
	void pay (const size_t);
	const size_t get_deposit () const;
	const size_t get_money () const;
	const size_t get_id () const;
	const std::string& get_addres () const;
private:
	std::string m_name;
	std::string m_addres;
	static inline size_t m_id {};
	size_t m_money {1000}; 			// initial amount
	size_t m_deposit_money {};
};

#endif // USER_H

