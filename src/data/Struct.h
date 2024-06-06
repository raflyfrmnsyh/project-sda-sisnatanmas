// src/data/Struct.h
#ifndef STRUCT_H
#define STRUCT_H
// #include <string>


struct User{
    std::string name;
};

struct Registration {
    std::string registrationId;
    std::string userId;
    std::string serviceType; 
    std::string registrationDate;
};

#endif
