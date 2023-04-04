#include "newsPaper.h"

newsPaper::newsPaper(std::string npt){

    this->paperTitle= npt;
}

newsPaper::~newsPaper(){};

void newsPaper::notify(){

    for (int i = 0; i < this->paperSub.size(); i++)
    {
        this->paperSub[i]->update();
    }
    
}

void newsPaper::addNewArticle(Article *na){

    this->paperArticles.push_back(na);
    notify();
}

void newsPaper::addNewSubsciber(Subscriber *su){

    this->paperSub.push_back(su);
}