#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string nick_name;
		std::string darkest_secret;
	
	public:
		Contact(void);
		~Contact(void);
	
		void set_firstname(std::string str);
		void set_lastname(std::string str);
		void set_phone_number(std::string str);
		void set_nickname(std::string str);
		void set_secret(std::string str);

		std::string get_firstname();
		std::string get_lastname();
		std::string get_phone_number();
		std::string get_nickname();
		std::string get_secret();	
};

#endif