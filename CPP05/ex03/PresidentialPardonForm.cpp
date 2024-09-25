#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("Presidential form", 25, 5){
    std::cout << "Presidential Form constructor called" << std::endl;
    this->target = target;

}
PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "Presidential Form destructor called" << std::endl;

};
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cpy) : AForm(cpy) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
    if (this != &src)
        this->target = src.target;
    return (*this);
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (!this->getSigned())
        throw AForm::NotSigned();
    if (executor.getGrade() <= this->getGradeE())
        std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    else
        throw AForm::GradeTooLowException();
}
