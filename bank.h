/* bank.h */

#ifndef BANK_H
#define BANK_H
#include <map>
#include "user.h"

class Bank {
public:
	void add_deposit (User&, size_t);
	void withdraw (User&, size_t);
	const size_t get_balance() const;
private:
	size_t m_bank_amount {100000};
	std::map <size_t, int> m_map;
};

#endif // BANK_H

