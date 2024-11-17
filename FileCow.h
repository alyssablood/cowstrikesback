//
// Created by lutfi on 11/16/2024.
//

#ifndef FILECOW_H
#define FILECOW_H

#include <string>
#include "Cow.h"
using namespace std;



class FileCow : public Cow {
    public:
        FileCow(const std::string& _name, const std::string& filename);
        void setImage(const std::string& _image) override;

    private:
        void loadImageFromFile(const std::string& filename);
};



#endif //FILECOW_H
