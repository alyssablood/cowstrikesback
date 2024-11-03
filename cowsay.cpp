//
// My partner is Allyssa Blood
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
    //checks for more than argument for first test case
    if (argc > 1)
    {
        //custom cows outputs
        if (std::string(argv[1]) == "-n")
    {
        //create message
        std::string message;
        for (int i = 3; i < argc; ++i)
        {
            message += argv[i];
            if (i < argc - 1)
            {
                message += " ";
            }
        }
        //custom output for each cow
        if (std::string(argv[2]) == "heifer")
        {

            std::cout << "\n" << message << std::endl;
            std::cout << cows[0]->getImage() << std::endl;
        }
        else if (std::string(argv[2]) == "kitteh")
        {
            std::cout << "\n" << message << std::endl;
            std::cout << cows[1]->getImage() << std::endl;
        }
        else if (std::string(argv[2]) == "dragon")
        {
            std::cout << "\n" << message << std::endl;
            std::cout << cows[2]->getImage() << std::endl;
            std::cout << "This dragon can breathe fire.\n" << std::endl;
        }
        else if (std::string(argv[2]) == "ice-dragon")
        {
            std::cout << "\n" << message << std::endl;
            std::cout << cows[3]->getImage() << std::endl;
            std::cout << "This dragon cannot breathe fire.\n" << std::endl;
        }
        else
        {
            std::cout << "Could not find "<< argv[2] << " cow!\n" << std::endl;
        }
    }
    //to list available cows
    else if (argc == 2 && std::string(argv[1]) == "-l")
    {
        std::cout << "Cows available: ";
        for (const auto& cow : cows)
        {
            if(cow->getName() == "ice-dragon")
            {
                std::cout << cow->getName();
            }
            else
            {
                std::cout << cow->getName() << " ";
            }
        }
        std::cout << "\n" << std::endl;
    }
    else
    {
        //for default cow message
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
            std::cout << "\n" << message << std::endl;
            std::cout << cows[0]->getImage() << std::endl;

        }
    }
    }


    //to prevent memory leaks
    for (auto& cow : cows) {
        delete cow;
    }

    return 0;
}