#ifndef CPP_PHONEBOOK_CLASS_HPP
# define CPP_PHONEBOOK_CLASS_HPP

# include "Contact_Class.hpp"
# include <iostream>
# include <string>
# include <iomanip>
# include <stdlib.h>

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

enum	dataContact{
	first_name,
	last_name,
	nickname,
	phone_number,
	darkest_secret,
};

class	PhoneBook
{
private:
	Contact Coord[8];
	int	_nbContact;

public:
	PhoneBook(void);
//	~PhoneBook(void);

	void    ft_present(void) const;
	void	ft_add(void);
	void	ft_search(void);
};

#endif


