#include "Bureaucrat.hpp"

int main() {
  try {
    Bureaucrat test("test", -1);
    std::cout << test << std::endl;
    test.increment_grade(30);
    std::cout << test << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
