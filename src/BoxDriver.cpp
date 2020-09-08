#include <cstdlib>
#include <iostream>
#include <string>
#include "PlainBox.h"
#include "ToyBox.h"

int main()
{
    PlainBox<double> numberBox{};
    PlainBox<std::string> nameBox{};
    
    numberBox.setItem(5.25);
    nameBox.setItem("Jim Daehn");

    std::cout << "numberBox.getItem() = " << numberBox.getItem() << std::endl;
    std::cout << "nameBox.getItem()   = " << nameBox.getItem() << std::endl;

    std::cout << std::endl;

    ToyBox<std::string> myToyCase{ "Jack-in-the-Box", RED };
    std::cout << "myToyCase.getItem( ) = " << myToyCase.getItem( ) << std::endl;

    return EXIT_SUCCESS;
}
