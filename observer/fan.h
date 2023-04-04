#ifndef FAN_H
#define FAN_H

#include <iostream>
#include <stdio.h>

#include "subscriber.h"

class Fan : public Subscriber
{
private:
    /* data */
    std::string email;
public:
    Fan(std::string eMail);
    ~Fan();
    void update() override;
};

#endif