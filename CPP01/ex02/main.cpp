/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:04:53 by codespace         #+#    #+#             */
/*   Updated: 2024/05/08 16:17:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string sentence = "HI THIS IS BRAIN";
    std::string *stringPTR = &sentence;
    std::string& stringREF = sentence;

    std::cout << "String address : "<< &sentence << std::endl;
    std::cout << "StringPTR address : " << &stringPTR << std::endl;
    std::cout << "StringREF address : " << &stringREF << std::endl;

    std::cout << "Sentence : " << sentence << std::endl;
    std::cout << "Pointer of Sentence : " << stringPTR << std::endl;
    std::cout << "Pointer of StringREF : "<< stringREF << std::endl;
}
