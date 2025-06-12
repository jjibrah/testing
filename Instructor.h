#include <iostream>
using namespace std;

#ifndef TEXTBOOK_H_INCLUDED
#define TEXTBOOK_H_INCLUDED

class TextBook{
    private:
        string title;
        string author;
        string publisher;

    public:
        TextBook() = default;

        void setTitle(string t){
            title = t;
        }

        void setAuthor(string auth){
            author = auth;
        }

        void setPublisher(string pub){
            publisher = pub;
        }

        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Publisher: " << publisher << endl;
        }
};


#endif // TEXTBOOK_H_INCLUDED
