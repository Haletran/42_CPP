#include "Bureaucrat.hpp"
#include <exception>
#include <stdexcept>

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
  std::cout << "Bureaucrat constructor called" << std::endl;
  try {
    if (grade > 150)
      throw std::out_of_range("grade too low");
    else if (grade < 1)
      throw std::out_of_range("grade too high");
    this->_grade = grade;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
    std::cout << "Attributing a basic rade" << std::endl;
    this->_grade = 150;
    return;
  }
}
// Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string const Bureaucrat::getName() { return (this->_name); }
int Bureaucrat::getGrade() { return (this->_grade); }

void Bureaucrat::increment_grade(int value) {
  try {
    if (this->_grade - value < 0)
      throw(value);
    this->_grade -= value;
  } catch (int value) {
    std::cout << "Increment not in the range" << std::endl;
    return;
  }
}

void Bureaucrat::decrement_grade(int value) {
  try {
    if (this->_grade + value > 150)
      throw(value);
    this->_grade += value;
  } catch (int value) {
    std::cout << "Decrement not in the range";
    return;
  }
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur) {
  os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
  return (os);
}
