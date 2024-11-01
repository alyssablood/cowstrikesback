//
// Created by alyss on 11/1/2024.
//

#include "Cow.h"


    Cow::Cow(const std::string& _name)
    {
          this->_name = _name;
    }

    std::string& Cow::getName()
    {
      return _name;
    }

    std::string& Cow::getImage()
    {
      return _image;
    }

    void Cow::setImage(const std::string& _image)
    {
      this->_image = _image;
    }
