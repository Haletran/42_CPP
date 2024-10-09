#pragma once

#include <iostream>
#include <fstream>
#include <regex.h>
#include <string>
#include <map>
#include <limits.h>
#include <stdlib.h>

#define DB_NAME "data.csv"
#define BRED "\033[1;31m"
#define RESET "\033[0m"

class BitcoinExchange {
    private:
        std::map <std::string, float> _stock;
        std::string _filename;
    public:
        BitcoinExchange(std::string filename);
        ~BitcoinExchange();
        void convert();
        void getStock();

};

int error_args(int option);
bool check_db_error(std::string line);
bool check_input_file_error(std::string line);

int error_args();
