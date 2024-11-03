//
// Created by alyss on 11/1/2024.
//

#ifndef ICEDRAGON_H
#define ICEDRAGON_H
#include <string>

#include "Dragon.h"

class IceDragon : public Dragon {
  public:
    IceDragon(const std::string& _name, const std::string& _image);

    bool canBreatheFire() override;
};

#endif //ICEDRAGON_H
