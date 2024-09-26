#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}


Intern::Intern(const Intern& cpy) {*this = cpy; }

Intern &Intern::operator=(const Intern& src)
{
    if (this != &src)
        *this = src;
    return (*this);
}

const char *Intern::NotAvailable::what() const throw() {
  return ("Form is not recognized by the Intern");
}


AForm *Intern::makeForm(std::string const &form, std::string const &target)
{
    std::string _name[] = {"presidential pardon","robotomy request", "shrubbery creation"};
    for (int i = 0; i < 3; i++)
    {
        if (_name[i] == form)
        {
            std::cout << "Intern creates " << form << std::endl;
            switch (i) {
                case 0:
                    return (new PresidentialPardonForm(target));
                case 1:
                    return (new RobotomyRequestForm(target));
                case 2:
                    return (new ShrubberyCreationForm(target));
            }
        }
    }
    throw NotAvailable();
    return (NULL);
}
