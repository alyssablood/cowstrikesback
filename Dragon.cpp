//
// Created by alyss on 11/1/2024.
//

#include "Dragon.h"

Dragon :: Dragon(const std::string& _name, const std::string& _image) : Cow(_name)
{
  this->setImage(_image);
}

bool Dragon :: canBreathFire()
{
  return true;
}