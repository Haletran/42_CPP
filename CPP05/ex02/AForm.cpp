
#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string const &name, int grade_s, int grade_e) : _name(name),  _grade_s(grade_s), _grade_e(grade_e) {
  this->_is_signed = false;
  std::cout << "Creating a form" << this->_name << std::endl;
}

AForm::~AForm() { std::cout << "Deleting the form" << std::endl; }

AForm::AForm(const AForm &cpy) : _grade_s(cpy._grade_s),_grade_e(cpy._grade_e){ *this = cpy; }

// AForm AForm::operator=(const AForm &src) {
//   if (this != &src)
//     this->_is_signed = src._is_signed;
//   return (*this);
// }

const char *AForm::GradeTooLowException::what() const throw() {
  return ("Grade is too low");
}
const char *AForm::GradeTooHighException::what() const throw() {
  return ("Grade is too high");
}
const char *AForm::AlreadySigned::what() const throw() {
  return ("Form is already signed");
}

void AForm::beSigned(Bureaucrat *bur) {
  if (bur->getGrade() > this->getGradeS()) {
    throw AForm::GradeTooLowException();
  }
  if (this->_is_signed)
    throw AForm::AlreadySigned();
  this->_is_signed = true;
}

std::ostream &operator<<(std::ostream &os, AForm &bur) {
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

int AForm::getGradeS() const { return (this->_grade_s); }
int AForm::getGradeE() const { return (this->_grade_e); }
bool AForm::getSigned() const { return (this->_is_signed); }
std::string AForm::getName() const { return (this->_name); };
