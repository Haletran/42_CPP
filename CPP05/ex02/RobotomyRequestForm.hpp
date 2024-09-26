#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

// RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises. Then, informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, informs that the robotomy failed.

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& cpy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm& src);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const &executor) const;
    protected:
        std::string target;
    private:
        RobotomyRequestForm();
};

#endif
