//
// Created by alyss on 11/1/2024.
//

#include <iostream>
#include <vector>
#include <string>
#include "Cow.h"
#include "HeiferGenerator.h"





int main(int argc, char* argv[])
{
    //creates list of cows
    const std::vector<Cow*> cows = HeiferGenerator::getCows();

    //specified cows
    if (std::string(argv[1]) == "-n")
    {
        std::string message;
        for (int i = 2; i < argc; ++i)
        {
            message += argv[i];
            if (i < argc - 1)
            {
                message += " ";
            }
        }
        if (std::string(argv[2]) == "heifer")
        {
            std::cout << message << std::endl;
            std::cout << cows[0]->getImage() << std::endl;
        }
        else if (std::string(argv[2]) == "kitteh")
        {
            std::cout << message << std::endl;
            std::cout << cows[1]->getImage() << std::endl;
        }
        else if (std::string(argv[2]) == "dragon")
        {
            std::cout << message << std::endl;
            std::cout << cows[2]->getImage() << std::endl;
            std::cout << "This dragon can breathe fire." << std::endl;
        }
        if (std::string(argv[2]) == "ice-dragon")
        {
            std::cout << message << std::endl;
            std::cout << cows[3]->getImage() << std::endl;
            std::cout << "This dragon cannot breathe fire." << std::endl;
        }
    }
    //to list available cows
    else if (argc == 2 && std::string(argv[1]) == "-l")
    {
        std::cout << "Cows available: ";
        for (const auto& cow : cows)
        {
            std::cout << cow->getName() << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        if (argc > 1)
        {
            std::string message;
            for (int i = 1; i < argc; ++i)
            {
                message += argv[i];
                if (i < argc - 1) {
                    message += " ";
                }
            }
            std::cout << message << std::endl;
            std::cout << cows[0]->getImage() << std::endl;

        }
    }

    //to prevent memory leaks
    for (auto& cow : cows) {
        delete cow;
    }

    return 0;
}