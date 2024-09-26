#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("Robotomy Form", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    srand(time(0));
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm(cpy) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& src){
    if (this != &src)
        this->target = src.target;
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!this->getSigned())
        throw AForm::NotSigned();
    if (executor.getGrade() <= this->getGradeE())
    {
        std::cout << "* drilling noises *" << std::endl;
        if (rand() % 2 == 0)
            std::cout << target << " has been robotomized" << std::endl;
        else
            std::cout << "Fail to robotomize " << target << std::endl;
    } else
        throw GradeTooLowException();
}
