#include "reader.h"

Reader::Reader(std::string eMail){
    this->email = eMail;
}

Reader::~Reader(){};

void Reader::update(){

    std::cout << "**********************" << std::endl;
    std::cout << "Il nuovo articolo è adesso disponibile in edicola" << std::endl;
}