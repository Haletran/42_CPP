#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

// RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm(const Bureaucrat& target);
        RobotomyRequestForm(const RobotomyRequestForm& cpy);
        RobotomyRequestForm operator=(const RobotomyRequestForm& src);
        ~RobotomyRequestForm();
};

#endif
