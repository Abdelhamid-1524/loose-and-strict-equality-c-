#include<iostream>
#include<typeinfo>
using namespace std ;

int main(){

int number = 1000 ;
string Number = "1000" ;                 //* they both have 1000 as a value but not the variable type 


bool loose = (number == stoi(Number)) ;  //! the loose equality can convert the string into an integer and make the comparision 
                                         //* here I used the stoi() function  ( s = string / to / i= integer)
    cout<< loose << endl ;


    bool strict = ((number == stoi(Number)) && (typeid(number).name() == typeid(Number).name())) ;

                      //? here I called the library <typeinfo> to call the typeid() function to give to type of the variable 
                      // strict equality must both variables have the same value and same type unlike the loose equality 

           cout<< strict << endl ;





    return 0 ;
}