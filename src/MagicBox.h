/**
 * CSC232 - Data Structures.
 * Missouri State University, Fall 2020.
 * 
 * @brief   Magic box specification file.
 * @file    MagicBox.h
 * @authors Carrano & Henry
 *          Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef MAGIC_BOX_
#define MAGIC_BOX_

#include "PlainBox.h"

/**
 * @brief a box that holds only one item, but magically changes it to the 
 * first item that was ever stored in the box.
 * @tparam ItemType the data type of the item stored in this box.
 */
template<typename ItemType>
class MagicBox : public PlainBox<ItemType>
{
public:
    /**
     * Default constructor.
     */
    MagicBox( );

    /**
     * Initializing constructor.
     * @param theItem the item this box shall contain
     */
    MagicBox( const ItemType& theItem );

    /**
     * Item mutator.
     * @param theItem a new item this box shall contain
     */
    void setItem( const ItemType& theItem );
private:
    bool firstItemStored;
}; // end MagicBox

#include "MagicBox.cpp"
#endif
