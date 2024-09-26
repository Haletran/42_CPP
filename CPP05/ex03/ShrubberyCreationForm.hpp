// Required grades: sign 145, exec 137
// Create a file <target>_shrubbery in the working directory, and writes ASCII trees
// inside it.
#ifndef SHRUBBERY_CREATION_HPP
#define SHRUBBERY_CREATION_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    // COPLIAN
    public:
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& cpy);
        ShrubberyCreationForm &operator=(const  ShrubberyCreationForm& src);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const &executor) const;
    protected:
        std::string target;
    private:
        ShrubberyCreationForm();

};


#endif
