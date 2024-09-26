#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

int main() {
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
      for (int i = 0; i < 10; i++)
        bender.executeForm(rob);
  } catch (std::exception & e) {
      std::cout << e.what() << std::endl;
  }
}
