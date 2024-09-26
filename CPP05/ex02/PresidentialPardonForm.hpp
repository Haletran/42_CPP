#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm  {
    public:
        // COPLIAN
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& cpy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm& src);
        ~PresidentialPardonForm();

        void execute(Bureaucrat const &executor) const;

    protected:
        std::string target;
    private:
        PresidentialPardonForm();
};


#endif
