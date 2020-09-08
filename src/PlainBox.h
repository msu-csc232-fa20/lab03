/**
 * CSC232 - Data Structures.
 * Missouri State University, Fall 2020.
 * 
 * @brief   PlainBox specification file.
 * @file    PlainBox.h
 * @authors Carrano & Henry
 *          Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef PLAIN_BOX_
#define PLAIN_BOX_

template<typename ItemType>
class PlainBox
{
public:
    /**
     * Default constructor.
     */
    PlainBox();

    /**
     * Parameterized constructor.
     * @param theItem an l-value const reference to a PlainBox that serves
     *                as the basis for creating this PlainBox
     */
    PlainBox( const ItemType& theItem );

    /**
     * Mutator method to change the item stored in this PlainBox.
     * @param theItem the item to store in this PlainBox
     */
    void setItem( const ItemType& theItem );


    ItemType getItem() const;
private:
    // Data field
    ItemType item;
}; // end PlainBox

#include "PlainBox.cpp"

#endif
