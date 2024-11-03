//
// Created by alyss on 11/1/2024.
//

#include "IceDragon.h"

//constructor defined using dragon
IceDragon :: IceDragon(const std::string& _name, const std::string& _image) : Dragon(_name, _image)
{
  //nothing
}

//setting canBreatheFire to false
bool IceDragon :: canBreatheFire()
{
  return false;
}

