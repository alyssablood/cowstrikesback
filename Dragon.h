//
// Created by alyss on 11/1/2024.
//

#ifndef DRAGON_H
#define DRAGON_H
#include <string>

#include "Cow.h"


class Dragon : public Cow {
  public:
    //contructor
    Dragon(const std::string& _name, const std::string& _image);
    //needs to virtual
    virtual bool canBreatheFire();

};

#endif //DRAGON_H
