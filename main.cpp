#include "nana/gui.hpp"

int main(int, char**) {

    using namespace nana;

    form frm;

    frm.caption("Main Window");

    frm.show();

    exec();

}
