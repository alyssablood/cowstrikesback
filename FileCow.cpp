//
// Created by lutfi on 11/16/2024.
//

#include "FileCow.h"


#include <fstream>
#include <stdexcept>
using namespace std;

FileCow::FileCow(const std::string& _name, const std::string& filename) : Cow(_name) {
    loadImageFromFile(filename);
}

void FileCow::setImage(const std::string& _image) {
    throw std::runtime_error("Cannot reset FileCow Image");
}

void FileCow::loadImageFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    std:: string image;

    if (!file) {
        throw std::ifstream::failure("MOOOOO!!!!!!");
    }

    while (std::getline(file, line)) {
        image += line + "\n";
    }

    Cow::setImage(image);
}