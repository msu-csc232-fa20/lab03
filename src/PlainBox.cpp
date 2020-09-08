/**
 * CSC232 - Data Structures.
 * Missouri State University, Fall 2020.
 * 
 * @brief   PlainBox implementation file.
 * @file    PlainBox.cpp
 * @authors Carrano & Henry
 *          Jim Daehn <jdaehn@missouristate.edu>
 */

#include "PlainBox.h"

template<typename ItemType>
PlainBox<ItemType>::PlainBox()
{
} // end default constructor

template<typename ItemType>
PlainBox<ItemType>::PlainBox( const ItemType& theItem ) : item{ theItem }
{
}

template<typename ItemType>
void PlainBox<ItemType>::setItem( const ItemType& theItem )
{
    item = theItem;
}

template<typename ItemType>
ItemType PlainBox<ItemType>::getItem() const
{
    return item;
}
