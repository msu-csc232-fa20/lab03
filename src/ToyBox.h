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

/**
 * Colors available for toy boxes.
 */
enum Color { BLACK, RED, BLUE, GREEN, YELLOW, WHITE };

/**
 * @brief A box that has color and holds only one item.
 * @tparam ItemType the data type of the item stored in this box.
 */
template<typename ItemType>
class ToyBox : public PlainBox<ItemType>
{
public:
    /**
     * Default constructor.
     */
    ToyBox( );

    /**
     * Initializing constructor.
     * @param theColor the color of this box
     */
    ToyBox( const Color& theColor );

    /**
     * Initializing constructor.
     * @param theItem the item this box shall contain
     * @param theColor the color of this box
     */
    ToyBox( const ItemType& theItem, const Color& theColor );

    /**
     * Color accessor method.
     * @return the color of this box is returned.
     */
    Color getColor() const;
private:
    Color boxColor;
};

#include "ToyBox.cpp"

#endif
