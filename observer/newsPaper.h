#ifndef NEWS_PAPER_H
#define NEWS_PAPER_H

#include <iostream>
#include <stdio.h>
#include <vector>

#include "subscriber.h"
#include "article.h"


class newsPaper
{
    private:
        std::string paperTitle;
        std::vector<Subscriber*> paperSub;
        std::vector<Article *> paperArticles;

    public:
        newsPaper(std::string pt);
        ~newsPaper();
        void notify();
        void addNewArticle(Article* na);
        void addNewSubsciber(Subscriber* su);
};

#endif