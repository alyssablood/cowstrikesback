//
// Created by alyss on 11/1/2024.
//

#include "Cow.h"

    //constructor
    Cow::Cow(const std::string& _name) :_name(_name), _image(""){}

    //deconstructor
    Cow::~Cow() = default;

    //defined getters and setters
    std::string& Cow::getName()
    {
      return _name;
    }

    std::string& Cow::getImage()
    {
      return _image;
    }

    void Cow::setImage(const std::string& image)
    {
      _image = image;
    }
