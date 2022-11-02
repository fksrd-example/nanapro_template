#include "./mainwindow.hpp"

mainwindow::mainwindow() {

    

}


mainwindow::~mainwindow() {

    

}

void mainwindow::setTitle(string title) {

    this->title = title;
    frm.caption(title);

}

string mainwindow::getTitle() {

    return this->title;

}