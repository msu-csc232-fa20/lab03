/**
 * CSC232 - Data Structures.
 * Missouri State University, Fall 2020.
 * 
 * @brief   ToyBox specification file.
 * @file    ToyBox.h
 * @authors Carrano & Henry
 *          Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef TOY_BOX_
#define TOY_BOX_

#include "PlainBox.h"

enum Color { BLACK, RED, BLUE, GREEN, YELLOW, WHITE };

template<typename ItemType>
class ToyBox : public PlainBox<ItemType>
{
public:
    ToyBox();
    ToyBox( const Color& theColor );
    ToyBox( const ItemType& theItem, const Color& theColor );
    Color getColor() const;
private:
    Color boxColor;
};

#include "ToyBox.cpp"

#endif
