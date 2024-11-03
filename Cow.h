//
// Created by alyss on 11/1/2024.
//

#ifndef COW_H
#define COW_H
#include <string>


//cow class
class Cow {

  private:
    //variables
    std::string _name;
    std::string _image;

  public:
      //constuctor
    explicit Cow(const std::string& _name);
    //deconstructor
    virtual ~Cow();

    //getters and setters
    std::string& getName();
    std::string& getImage();


    virtual void setImage(const std::string& _image);

};



#endif //COW_H

