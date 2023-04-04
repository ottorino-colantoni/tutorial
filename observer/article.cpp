#include "article.h"

Article::Article(std::string ti, std::string te, std::string au) : author(au
){
    this->title = ti;
    this->text = te;
}

Article::~Article(){}

void Article::printArticle(){

    std::cout << "********************************" << std::endl;
    std::cout << this->title << std::endl;
    std::cout << this->text << std::endl;
    std::cout << this->author << std::endl;
    std::cout << "********************************" << std::endl;

}