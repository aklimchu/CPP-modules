/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklimchu <aklimchu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 09:11:21 by aklimchu          #+#    #+#             */
/*   Updated: 2025/02/12 09:11:22 by aklimchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	
	//---------------------Testing the constructors------------------//

	std::cout << "//----------------Let's try to create some bureaucrats--------------//" \
		<< std::endl << std::endl;

	try {
		Bureaucrat Andrei("Andrei", 0);
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << '\n';
		std::cout << "Couldn't create the bureaucrat" << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << '\n';
		std::cout << "Couldn't create the bureaucrat" << std::endl << std::endl;
	}

	Bureaucrat* John = nullptr;

	try {
		John = new Bureaucrat ("John", 200);
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << '\n';
		std::cout << "Couldn't create the bureaucrat" << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << '\n';
		std::cout << "Couldn't create the bureaucrat" << std::endl << std::endl;
	}

	try {
		if (John)
			std::cout << "John is here" << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << '\n';
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << '\n';
	}

	Bureaucrat* James = nullptr;

	try {
		James = new Bureaucrat ("James", 2);
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << '\n';
		std::cout << "Couldn't create the bureaucrat" << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << '\n';
		std::cout << "Couldn't create the bureaucrat" << std::endl << std::endl;
	}

	try {
		if (James)
			std::cout << "James is here" << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << '\n';
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << '\n';
	}

	//-------------------Testing the member functions----------------//


	std::cout << "//----------------Let's test the bureaucrats' grades--------------//" \
		<< std::endl << std::endl;

	std::cout << *James << std::endl << std::endl;

	try {
		James->incrementGrade();
		std::cout << *James << std::endl << std::endl;
		James->incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << '\n';
		std::cout << "Couldn't increment the grade" << std::endl << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << *James << std::endl << std::endl;

	try {
		for (int i = 0; i < 151; i++)
			James->decrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << '\n';
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << '\n';
		std::cout << "Couldn't decrement the grade" << std::endl << std::endl;
	}
	
	std::cout << *James << std::endl << std::endl;

	//------------------------Freeing the memory--------------------//

	if (John)
		delete John;
	if (James)
		delete James;
}