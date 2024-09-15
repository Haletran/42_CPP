#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &name) : _name(name) {
  this->_is_signed = false;
  std::cout << "Creating a form" << this->_name << std::endl;
}

Form::~Form() { std::cout << "Deleting the form" << std::endl; }

Form::Form(const Form &cpy) { *this = cpy; }

Form Form::operator=(const Form &src) {
  if (this != &src)
    this->_is_signed = src._is_signed;
  return (*this);
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("Grade too low");
}
const char *Form::GradeTooHighException::what() const throw() {
  return ("Grade too high");
}

void Form::beSigned(Bureaucrat *bur) {
  if (bur->getGrade() > this->getGradeS()) {
    throw Form::GradeTooLowException();
  }
  this->_is_signed = true;
}

std::ostream &operator<<(std::ostream &os, Form &bur) {
  os << "[ FORM " << bur.getName() << " ]";
  os << "Necessary grade for executing :" << bur.getGradeE();
  os << "Necessary grade to signed : " << bur.getGradeS();
  os << "Form is";
  if (bur.getSigned() == true)
    os << " already signed";
  else
    os << " not signed";
  return (os);
}
