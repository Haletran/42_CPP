#include "Bureaucrat.hpp"

int main() {
  Bureaucrat test("test", -1);
  std::cout << test << std::endl;
  test.increment_grade(30);
  std::cout << test << std::endl;
}
