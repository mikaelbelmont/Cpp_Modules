#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	typedef struct s_comment
	{
		std::string name;
		void (Harl::*action)(void);
	}t_comment;

	private:
		t_comment comment[4];
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);
};

#endif