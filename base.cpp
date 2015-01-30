#include<iostream>
#include "base.h"

using namespace std;
Base * Base::sm_base = NULL;

Base::Base(){
  std::cout<<"Base ctor" <<std::endl;
  sm_base = this;
}

void Base::run(){
  std::cout<<"Base::run()"<<std::endl;
}


Derived::Derived(){
  std::cout<<"Derived ctor" <<std::endl;
}
void Derived::run(){
  std::cout<<"Derived::run()"<<std::endl;
  Base::run();
}


int main(){
    Derived* d = new Derived();
    d->run();
}
