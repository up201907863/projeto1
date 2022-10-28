//
// Created by SrAlicandro on 28/10/22.
//

#include "aula.h"

using namespace std;

Aula::Aula() {}

Aula::Aula(int uc, string wd, /*time hora, */int dur, string type);

//Getters

int Aula::getUc() {
    return  uccode;
}
//get para o time

string Aula::getWeekday() {
    return weekday;
}
int Aula::getDur() {
    return duration;
}
string Aula::getType() {
    return type;
}

//Setters

void Aula::setUc(int n) {
    this ->uccode = n;
}
//setter para o time

void Aula::setDur(int n) {
    this-> duration = n;
}
void Aula::setType(std::string t) {
    this -> type = t;
}
