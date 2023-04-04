#include "fan.h"

Fan::Fan(std::string eMail){
    this->email = eMail;
}

Fan::~Fan(){};

void Fan::update(){

    std::cout << "**********************" << std::endl;
    std::cout << "Il nuovo articolo è adesso disponibile nella tua area riservata" << std::endl;
    std::cout << "Il costo dell'articolo è stato di 14.99 $" << std::endl;
}