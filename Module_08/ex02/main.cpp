/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 07:51:33 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/11 07:51:33 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	ft_present(void);

int main()
{
	ft_present();

	std::cout << RED "\n================  Test MutantStack  ======================\n"  NONE	<< std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "** " <<  * it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << YELLOW "\nVerif : MutantStack<int> mstack;" CYANE "\nmstack = " ;
	for (int n : mstack)
		std::cout << n << ", ";
	std::cout << std::endl;

	std::cout << YELLOW "\nVerif : std::stack<int> s(mstack);" CYANE "\ns = " ;
	while (!s.empty()) {
		std::cout << s.top() << "; ";
		s.pop();
	}
	std::cout << "s ==> empty" << std::endl;

	mstack = mstack;

	/*
	for (std::list<int>::iterator it = s.begin(); it != s.end(); ++it)
		std::cout << *it << std::endl;*/

	/* ------------------------------------------------------------- */
	std::cout << GREEN "\n================  Test list  ======================\n" NONE << std::endl;


	std::list<int> mylist;
	mylist.push_back(5);
	mylist.push_back(17);
	std::cout << mylist.back() << std::endl;
	mylist.pop_back();
	std::cout << mylist.size() << std::endl;
	mylist.push_back(3);
	mylist.push_back(5);
	mylist.push_back(737);
	mylist.push_back(0);

	std::list<int>::iterator it2 = mylist.begin();
	std::list<int>::iterator ite2 = mylist.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << "** " << *it2 << std::endl;
		++it2;
	}
	
//	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
//		std::cout << "-" << * it << std::endl;

return 0;
}

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "" << std::endl;
	std::cout << "            _                           _                   _     _                                         _                     _          " << std::endl;
	std::cout << "    /\\     | |                         (_)                 | |   (_)                                       | |                   | |         " << std::endl;
	std::cout << "   /  \\    | |__     ___    _ __ ___    _   _ __     __ _  | |_   _    ___    _ __      _ __ ___    _   _  | |_    __ _   _ __   | |_    ___ " << std::endl;
	std::cout << "  / /\\ \\   | '_ \\   / _ \\  | '_ ` _ \\  | | | '_ \\   / _` | | __| | |  / _ \\  | '_ \\    | '_ ` _ \\  | | | | | __|  / _` | | '_ \\  | __|  / _ \\" << std::endl;
	std::cout << " / ____ \\  | |_) | | (_) | | | | | | | | | | | | | | (_| | | |_  | | | (_) | | | | |   | | | | | | | |_| | | |_  | (_| | | | | | | |_  |  __/" << std::endl;
	std::cout << "/_/    \\_\\ |_.__/   \\___/  |_| |_| |_| |_| |_| |_|  \\__,_|  \\__| |_|  \\___/  |_| |_|   |_| |_| |_|  \\__,_|  \\__|  \\__,_| |_| |_|  \\__|  \\___|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}