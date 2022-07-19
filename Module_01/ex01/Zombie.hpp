
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include<iostream>
# include<string>
# include<iomanip>

#ifndef COLOR
# define COLOR

# define CLEAR		"\x1B[2J\x1B[H"
# define NONE		"\033[0;37m"

# define WHITE		"\033[1;37m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define CYANE		"\033[1;36m"
# define ORANGE		"\033[1,38m"
# define YELLOW		"\033[1;33m"
# define BLUE		"\033[1,34m" 

#endif

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);

	void	announce(void);
	void	setName(std::string name);

private:
	std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif