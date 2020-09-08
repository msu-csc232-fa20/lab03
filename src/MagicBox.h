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

template<typename ItemType>
class MagicBox : public PlainBox<ItemType>
{
public:
    MagicBox();
    MagicBox( const ItemType& theItem );
    void setItem( const ItemType& theItem );
private:
    bool firstItemStored;
}; // end MagicBox

#include "MagicBox.cpp"
#endif
