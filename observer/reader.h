#ifndef READER_H
#define READER_H

#include <iostream>
#include <stdio.h>

#include "subscriber.h"

class Reader : public Subscriber
{
private:
    /* data */
    std::string email;
public:
    Reader(std::string eMail);
    ~Reader();
    void update() override;
};

#endif