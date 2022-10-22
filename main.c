#include "main.h"

void main(void){
    //! test diagram
    /*!
     this info
     */
    testMe(10);
}

void testMe(int in){
    anotherFunction();
}

void anotherFunction(){
    return 0; //!< test 2
}
