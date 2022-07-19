# include<iostream>
# include<string>
# include<iomanip>

# define CLEAR		"\x1B[2J\x1B[H"
# define NONE		"\033[0;37m"

# define WHITE		"\033[1;37m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define CYANE		"\033[1;36m"
# define ORANGE		"\033[1,38m"
# define YELLOW		"\033[1;33m"
# define BLUE		"\033[1,34m" 

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "	 _    _   _____     _______   _    _   _____    _____     _____    _____     ____    _____               _____   _   _" << std::endl;
	std::cout << "	| |  | | |_   _|   |__   __| | |  | | |_   _|  / ____|   |_   _|  / ____|   |  _ \\  |  __ \\      /\\     |_   _| | \\ | |" << std::endl;
	std::cout << "	| |__| |   | |        | |    | |__| |   | |   | (___       | |   | (___     | |_) | | |__) |    /  \\      | |   |  \\| |" << std::endl;
	std::cout << "	|  __  |   | |        | |    |  __  |   | |    \\___ \\      | |    \\___ \\    | _  <  |  _  /    / /\\ \\     | |   | . ` |" << std::endl;
	std::cout << "	| |  | |  _| |_       | |    | |  | |  _| |_   ____) |    _| |_   ____) |   | |_) | | | \\ \\   / ____ \\   _| |_  | |\\  |" << std::endl;
	std::cout << "	|_|  |_| |_____|      |_|    |_|  |_| |_____| |_____/    |_____| |_____/    |____/  |_|  \\_\\ /_/    \\_\\ |_____| |_| \\_|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	ft_present();

	std::cout << WHITE "memory address to string    = " GREEN << &string << std::endl;
	std::cout << WHITE "memory address to stringPTR = " GREEN << stringPTR << std::endl;;
	std::cout << WHITE "memory address to stringREF = " GREEN << &stringREF << std::endl;;
	std::cout << NONE << std::endl;
	std::cout << WHITE "value of the string    = " GREEN << string << std::endl;
	std::cout << WHITE "value of the stringPTR = " GREEN << *stringPTR << std::endl;
	std::cout << WHITE "value of the stringREF = " GREEN << stringREF << std::endl;
	std::cout << NONE << std::endl;

	return (0);
}