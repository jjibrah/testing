#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED

#include "Instructor.h"
#include "TextBook.h"

class Course{
    private:
        string courseName;
        Instructor instructor;
        TextBook textbook;

    public:
        Course(string cName, string fName, string lName,
               string office, string t, string auth, string pub){

                   courseName = cName;
                   instructor.setFirstName(fName);
                   instructor.setLastName(lName);
                   instructor.setOfficeNumber(office);

                   textbook.setTitle(t);
                   textbook.setAuthor(auth);
                   textbook.setPublisher(pub);
        }

        void display(){
            cout << "Course name: " << courseName << endl << endl;
            cout << "Instructor Information: " << endl;
            instructor.display();
            cout << endl;
            cout << "Textbook Information: " << endl;
            textbook.display();
        }

};

#endif // COURSE_H_INCLUDED
