#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <string>


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("Shrubbery Form", 145, 137)
{
    std::cout << "Shrubbery Form constructor called" << std::endl;
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Form destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : AForm(cpy) {}

ShrubberyCreationForm ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
    if (this != &src)
        *this = src;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!this->getSigned())
        throw AForm::NotSigned();
    if (executor.getGrade() <= this->getGradeE())
    {
        std::string filename = executor.getName() + "_shrubbery";
        std::ofstream out(filename.c_str());
        out << "             # #### ####\n";
        out << "           ### \\/#|### |/####\n";
        out << "          ##\\/#/ \\||/##/_/##/_#\n";
        out << "        ###  \\/###|/ \\/ # ###\n";
        out << "      ##_\\_#\\_\\## | #/###_/_####\n";
        out << "     ## #### # \\ #| /  #### ##/##\n";
        out << "      __#_--###`  |{,###---###-~\n";
        out << "                \\ }{\n";
        out << "                 }}{\n";
        out << "                 }}{\n";
        out << "            ejm  {{}}\n";
        out << "           , -=-~{ .-^- _\n";

        out.close();
        std::cout << "A nice tree has been generated in " << filename << std::endl;
    } else
        throw AForm::GradeTooLowException();
}
