/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:35:38 by codespace         #+#    #+#             */
/*   Updated: 2024/08/19 20:18:34 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (!argv || argc > 4 || argc < 4)
        return (1);
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::fstream fs;
    std::fstream fl;
    
    if (filename.empty())
        return (std::cout << "Empty args" << std::endl, 1);
    if (s1.empty())
        return (std::cout << "Empty args" << std::endl, 1);
    if (s2.empty())
        return (std::cout << "Empty args" << std::endl, 1);

    if (!fs.open (filename.c_str(), std::ios::in))
    {
        std::cout << "Unable to open file" << std::endl;
        return 1;
    }
    std::string file_replace = filename;
    file_replace.append(".replace");
    if (!fl.open (file_replace.c_str(),  std::fstream::out))
    {
        std::cout << "Unable to open file" << std::endl;
        return 1;
    }
    std::string line;
    std::string buffer;
    while (getline(fs, line))
    {
        int i = 0;
        while(line[i])
        {
            if (line.substr(i, s1.length()) == s1)
            {
                buffer += s2;
                i += s1.length();
            }
            else
            {
                buffer += line[i];
                i++;
            }
        }
        buffer += "\n";
    }
    fl << buffer;
    fs.close();
    fl.close();
    return (0);
}