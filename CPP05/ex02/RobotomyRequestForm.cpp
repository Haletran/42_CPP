#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm(const Bureaucrat& target) : AForm("Robotomy Form", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    this->target = target.getName();
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm(cpy) {}

RobotomyRequestForm RobotomyRequestForm::operator=(const RobotomyRequestForm& src){
    if (this != &src)
        *this = src;
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!this->getSigned())
        throw AForm::NotSigned();
    if (executor.getGrade() <= this->getGradeE())
    {
        srand(time(0));
        if (rand() % 2 == 0)
            std::cout << executor.getName() << " has been robotomized" << std::endl;
        else
            std::cout << "Fail to robotomize " << executor.getName() << std::endl;
    } else
        throw GradeTooLowException();
}
