#pragma once

#include <iostream>
#include <fstream>
#include <regex.h>
#include <string>
#include <map>

#define DB_NAME "data.csv"

class BitcoinExchange {
    private:
        std::map <std::string, float> _stock;
    public:
        BitcoinExchange(std::string filename);
        ~BitcoinExchange();

        void getStock();

};


int error_args();
