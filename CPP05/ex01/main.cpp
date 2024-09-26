#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>

int main() {
  // FORM CHECK
  try {
    Form test("test", 15, 5);
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
