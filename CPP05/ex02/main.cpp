#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main() {
  // CREATING A SIMPLE BUREAUCRATE
  try {
    Bureaucrat test("test", 10);
    std::cout << test << std::endl;
    test.increment_grade(2);
    std::cout << test << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  // CREATING SOME ERRORS
  try {
    Bureaucrat michel("michel", 60);
    std::cout << michel << std::endl;
    michel.decrement_grade(100);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  // PRESIDENTIAL FORM
  try {
    Bureaucrat asd("test", 150);
    PresidentialPardonForm test(asd.getName());
    std::cout << test << std::endl;
    asd.SignedForm(test);
    std::cout << "GRADE : " << asd.getGrade() << std::endl;
    asd.executeForm(test);
    asd.increment_grade(8);
    std::cout << "GRADE : " << asd.getGrade() << std::endl;
    asd.executeForm(test);
    std::cout << test << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  // SHRUBBERY FORM
  try{
      Bureaucrat michel("michel", 40);
      ShrubberyCreationForm tree(michel.getName());
      std::cout << tree << std::endl;
      michel.SignedForm(tree);
      michel.executeForm(tree);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  // ROBOTOMY FORM
  try {
      Bureaucrat bender("bender", 10);
      RobotomyRequestForm rob(bender.getName());
      std::cout << rob << std::endl;
      bender.SignedForm(rob);
      bender.executeForm(rob);
  } catch (std::exception & e) {
      std::cout << e.what() << std::endl;
  }
}
