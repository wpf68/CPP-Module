#ifndef CPP_CONTACT_CLASS_HPP
# define CPP_CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>


#ifndef COLOR
# define COLOR

# define CLEAR		"\x1B[2J\x1B[H"
# define F_NONE		"\033[0;37m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define CYANE		"\033[1;36m"
# define F_BOLD		"\033[1m"
# define F_ORANGE	"\033[38m"
# define F_YELLOW	"\033[1;33m"
# define F_BLUE		"\033[34m" 

#endif


class	Contact
{
private:
	std::string		_repertory[5];
	static std::string	_input[5];
	
public:
	Contact(void);
	
	void	ft_create_repertory(Contact& Coord);
	void	ft_print_repertory(Contact Coord, int j);
	void	ft_print_contact(Contact Coord, int j);
};

#endif


