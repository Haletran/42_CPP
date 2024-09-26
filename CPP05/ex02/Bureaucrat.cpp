#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <exception>

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
  std::cerr << "Bureaucrat constructor called" << std::endl;
  if (grade > 150)
    throw(GradeTooLowException());
  else if (grade < 1)
    throw(GradeTooHighException());
  this->_grade = grade;
}

Bureaucrat::~Bureaucrat() {
  std::cerr << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const{ return (this->_name); }
int Bureaucrat::getGrade() const { return (this->_grade); }

void Bureaucrat::increment_grade(int value) {
  if (this->_grade - value <= 0)
    throw(GradeTooHighException());
  this->_grade -= value;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) { *this = cpy; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
  if (this != &src)
    this->_grade = src._grade;
  return (*this);
}

void Bureaucrat::decrement_grade(int value) {
  if (this->_grade + value > 150)
    throw(GradeTooLowException());
  this->_grade += value;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur) {
  os << bur.getName() << ", bureaucrat grade " << bur.getGrade();
  return (os);
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade too low");
}
const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Grade too high");
}

void Bureaucrat::SignedForm(AForm &t) {

  try {
    t.beSigned(this);
    std::cout << this->_name << " signed " << t.getName() << std::endl;
  } catch (std::exception &e) {
    std::cout << this->_name << " couldn’t sign " << t.getName() << " because "
              << e.what() << std::endl;
  }
}


Bureaucrat Bureaucrat::executeForm(AForm const & form)
{
    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    } catch (std::exception & e)
    {
        std::cout << this->getName() << " failed to execute " << form.getName() << std::endl;
    }
    return (*this);
}
