#ifndef MAINWINDOW_HPP 
#define MAINWINDOW_HPP 

#include <nana/gui.hpp>

using namespace nana;
using namespace std;

class mainwindow{

public:
    form frm;
    string title;
    
    mainwindow();
    ~mainwindow();

    void setTitle(string title);
    string getTitle();

};

#endif