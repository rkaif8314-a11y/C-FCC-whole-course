#include <iostream>


int main(){

    const char * message {"Hello World!"};
    // Here H word is ponter of message
    std::cout << "message : " << message << std::endl;

    ///*message = "B"; // Compiler error
    std::cout << "*message : " << *message << std::endl; // H

    //Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl; // Bello World!
    
    return 0;
}
