//
// Created by alyss on 11/1/2024.
//

#ifndef COW_H
#define COW_H
#include <string>


//cow class
class Cow {

  private:
        static std::string& _name;
        static std::string& _image;

    public:
      //constuctor
      Cow(const std::string& _name);

      std::string& getName();

      std::string& getImage();

      virtual void setImage(const std::string& _image);

};



#endif //COW_H

