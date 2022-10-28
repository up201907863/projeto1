//
// Created by SrAlicandro on 28/10/22.
//

#ifndef PROJETO_STUDENT_H
#define PROJETO_STUDENT_H

#endif //PROJETO_STUDENT_H

#include <string>

using namespace std;

class Student {
private:
    string name;
    int nmec;
    //lista com as aulas do aluno
public:

    Student();
    Student(string name, int nmec/*, lista das aulas do aluno*/);

    string getSname();
    int getSn();
    // get para a lista das aulas do aluno
    void setSname(string n);
    void setSn(int n);
};
