#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const &name, int grade_s, int grade_e) : _name(name),  _grade_s(grade_s), _grade_e(grade_e) {
    if (grade_s < 1 || grade_e < 1)
        throw Form::GradeTooHighException();
    if (grade_s > 150 || grade_e > 150)
        throw Form::GradeTooLowException();
  this->_is_signed = false;
  std::cout << "Creating a form" << this->_name << std::endl;
}

Form::~Form() { std::cout << "Deleting the form" << std::endl; }

Form::Form(const Form &cpy) : _grade_s(cpy._grade_s),_grade_e(cpy._grade_e){ *this = cpy; }

Form Form::operator=(const Form &src) {
  if (this != &src)
    this->_is_signed = src._is_signed;
  return (*this);
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("Grade is too low");
}
const char *Form::GradeTooHighException::what() const throw() {
  return ("Grade is too high");
}
const char *Form::AlreadySigned::what() const throw() {
  return ("Form is already signed");
}

void Form::beSigned(Bureaucrat *bur) {
  if (bur->getGrade() > this->getGradeS()) {
    throw Form::GradeTooLowException();
  }
  if (this->_is_signed)
    throw Form::AlreadySigned();
  this->_is_signed = true;
}

std::ostream &operator<<(std::ostream &os, Form &bur) {
  os << "* ------------------------------------- *" << std::endl;
  os << "[ FORM " << bur.getName() << " ]" << std::endl;
  os << "Necessary grade for executing : " << bur.getGradeE() << std::endl;
  os << "Necessary grade to signed : " << bur.getGradeS() << std::endl;
  os << "Form is";
  if (bur.getSigned() == true)
    os << " already signed" << std::endl;
  else
    os << " not signed" << std::endl;
  os << "* ------------------------------------- *";

  return (os);
}

int Form::getGradeS() const { return (this->_grade_s); }
int Form::getGradeE() const { return (this->_grade_e); }
bool Form::getSigned() const { return (this->_is_signed); }
std::string Form::getName() const { return (this->_name); };
