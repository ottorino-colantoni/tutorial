#ifndef ARTICLE_H
#define ARTICLE_H

#include <iostream>
#include <stdio.h>

class Article
{
private:
    /* data */
    std::string title;
    std::string text;
    const std::string author;
public:
    Article(std::string ti, std::string te, std::string au);
    ~Article();
    void printArticle();

};

#endif