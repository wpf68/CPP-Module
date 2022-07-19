#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << " _    _                                                                                            _           _" << std::endl;
	std::cout << "| |  | |                                                                                          (_)         | |" << std::endl;
	std::cout << "| |  | |  _ __    _ __     ___    ___    ___   ___   ___    __ _   _ __   _   _           __   __  _    ___   | |   ___   _ __     ___    ___" << std::endl;
	std::cout << "| |  | | | '_ \\  | '_ \\   / _ \\  / __|  / _ \\ / __| / __|  / _` | | '__| | | | |          \\ \\ / / | |  / _ \\  | |  / _ \\ | '_ \\   / __|  / _ \\" << std::endl;
	std::cout << "| |__| | | | | | | | | | |  __/ | (__  |  __/ \\__ \\ \\__ \\ | (_| | | |    | |_| |           \\ V /  | | | (_) | | | |  __/ | | | | | (__  |  __/" << std::endl;
	std::cout << " \\____/  |_| |_| |_| |_|  \\___|  \\___|  \\___| |___/ |___/  \\__,_| |_|     \\__, |            \\_/   |_|  \\___/  |_|  \\___| |_| |_|  \\___|  \\___|" << std::endl;
	std::cout << "                                                                           __/ |  ______" << std::endl;
	std::cout << "                                                                          |___/  |______|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int main()
{
	ft_present();
	std::cout << WHITE << std::endl;

	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	} {
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}	
	
	std::cout << NONE << std::endl;

	return 0;
}



/*
it's better to use a pointer for Weapon of HumanB because 
HumanB doesn't always have a WEAPON
*/