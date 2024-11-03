//
// Created by alyss on 11/1/2024.
//

#include "Dragon.h"

//constructor
Dragon :: Dragon(const std::string& _name, const std::string& _image) : Cow(_name)
{
  this->setImage(_image);
}

//defined canBreatherFire function
bool Dragon :: canBreatheFire()
{
  return true;
}