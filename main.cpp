#include <iostream>
#include <stdio.h>
#include <fstream>

#include "./observer/article.h"
#include "./observer/newsPaper.h"
#include "./observer/fan.h"
#include "./observer/reader.h"



int main(int argc, char const *argv[])
{
    std::cout<< "Hello World with CMake"<< std::endl;

    Article a1("Crollo output Petrolio", "Oggi l'OPEC ha deciso di tagliare la produzione giornaliera di petrolio di 1 MLN di barili al giorno per tutto il 2023", "Ottorino Colantoni");
    a1.printArticle();
    Article a2("Centenario Aeronautica", " Fino al 30 Marzo saranno esposti a piazza del popolo alcuni jet da combattimento dell'Aeronautica Italiana", "Giovanni Destro");
    a2.printArticle();

    std::ofstream fs1;

    fs1.open("../output.txt");

    if(!fs1.is_open()){std::cout<< "Errore durante l'apertura del file" << std::endl;}

    fs1 << "Questa è una semplice prova \n";  
    fs1.close();

    Fan f1("ottorino.colantoni@gmail.com");
    Reader r1("giovanni.destro@gmail.com");

    newsPaper np("Il Fatto Quotidiano");

    np.addNewSubsciber(&r1);
    np.addNewSubsciber(&f1);

    np.addNewArticle(&a1);
    np.addNewArticle(&a2);

    return 0;

}
