# pragma once

# include <iostream>

class Zombie{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce( void ) const;
	
	private:
		std::string name;
};
