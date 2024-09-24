#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

//sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.
class PresidentialPardonForm : public AForm  {
    public:
        // COPLIAN
        PresidentialPardonForm(const Bureaucrat& target);
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
