#include <iostream>
#include "Person.h"
using namespace std;

#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED


class Student: public Person{
    private:
        int id;
        string programme;
    public:
        Student() = default;
        void setID(int i){
            id = i;
        }
        int getID(){
            return id;
        }
        void setProgramme(string p){
            programme = p;
        }
        string getProgromme(){
            return programme;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Programme: " << programme << endl;
        }
};

#endif // STUDENT_H_INCLUDED
