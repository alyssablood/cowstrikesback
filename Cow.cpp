//
// Created by alyss on 11/1/2024.
//

#include "Cow.h"


    Cow::Cow(const std::string& _name)
{
    this->_name = _name;
    this->_image = "";
}



    Cow::~Cow() = default;

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
