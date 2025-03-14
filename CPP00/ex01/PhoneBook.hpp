#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add_new_contact(std::string first, \
			std::string last, std::string nickname, std::string phone, \
			std::string secret);
		void	print_all() const;
		int		print_entry(int entry_index) const;
		Contact get_contact(int i) const;
	
	private:
		Contact contact[8];
		int		number_of_contacts = 0;
		void str_to_shorter (int i, int field_num) const;
};

#endif
