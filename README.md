# loose-and-strict-equality-cpp
as long the loose and strict equality exists in Javascript and not in C++ I've found a simple and easy  way to make it in C++ 

loose equality concerns the value of both sides if they are equal then it will be true like 1000 == "1000" (result: true /1/  )
but in C++ you can't compare a different variable to each other like (integer == string ) so you must use the " stoi()" 
function as I did 
 but for strict equality it's different, it concerns both type and value as the previous example (1000 === "1000" ) (result: false /0/ ) 
 so you must call the <typeinfo> library to use the { typeid(the variable).name } and use (&&) to make the equality 

 bool loose = ( 1000 == stoi("1000") ); // true or 1 

 bool strict = (( 1000 == stoi("1000") ) && (typeid(1000).name() == typeid("1000").name )) // false or 0 

it's super simple in javascript you don't have to write all of that instead for loose write

let loose = 1000 == "1000" 

and for strict write

let strict = 1000 === "1000" 
