#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern {
    public:
    // COPLIAN
    Intern();
    Intern(const Intern& cpy);
    Intern operator=(const Intern &src);
    ~Intern();

    AForm *makeForm(std::string const &form, std::string const &target);
    class NotAvailable : public std::exception {
      const char *what() const throw();
    };
};

#endif
