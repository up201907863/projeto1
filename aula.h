//
// Created by SrAlicandro on 28/10/22.
//

#ifndef PROJETO_AULA_H
#define PROJETO_AULA_H

#endif //PROJETO_AULA_H

#include <string>

using namespace std;

class Aula {
private:
    int uccode;
    string weekday;
    //time hora;
    int duration;
    string type;

public:

    Aula();
    Aula(int uc, string wd, /*,time hora,*/int dur, string type);

    //Getters
    int getUc();
    string getWeekday();
    //get para o time
    int getDur();
    string getType();

    //setters
    void setUc(int n);
    //void setTime(time n);
    void setDur(int n);
    void setType(string t);

};