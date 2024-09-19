#include "Bureaucrat.hpp"
#include "AForm.hpp"
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
  // FORM CHECK
  try {
    AForm test("test");
    Bureaucrat asd("test", 30);
    std::cout << test << std::endl;
    asd.SignedForm(test);
    asd.increment_grade(29);
    asd.SignedForm(test);
    asd.SignedForm(test);
    std::cout << test << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
