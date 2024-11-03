//
// Created by alyss on 11/1/2024.
//

#include <iostream>
#include <vector>
#include <string>
#include "Cow.h"
#include "Dragon.h"
#include "IceDragon.h"
#include "HeiferGenerator.h"





int main(int argc, char* argv[])
{
    std::vector<Cow*> cows = HeiferGenerator::getCows();

    if (argc == 2 && std::string(argv[1]) == "-l")
    {
        std::cout << "Cows available: ";
        for (auto cow : cows)
        {
            std::cout << cow->getName() << " ";
        }
        std::cout << std::endl;
    }
    else if (argc == 3)
    {

    }


}