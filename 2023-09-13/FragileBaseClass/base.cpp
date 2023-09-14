#include "base.h"

Base::Base() : counter(0) {}

void Base::inc1() {
    //counter++;
    inc2();
}

void Base::inc2() {
    counter++;
}

int Base::get() const {
    return counter;
}


//class Widget {
//public:
//    int val;
//};
//
//Widget w1;
//w1.val = 5;
//
//Widget *wp;
//wp = new Widget;
//wp->val = 10;
//(*wp).val = 20;
//
//Widget *wp2 = &w1;


Rectangle *r = new Rectangle;
Rectangle *c;    // = new MyRect;

if (rand() % 2 == 0)
    c = new Rectangle;
else
    c = new MyRect;

r->lengthen(2);
c->lengthen(2);

