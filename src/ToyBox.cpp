/**
 * CSC232 - Data Structures.
 * Missouri State University, Fall 2020.
 * 
 * @brief   ToyBox implementation file.
 * @file    ToyBox.cpp
 * @authors Carrano & Henry
 *          Jim Daehn <jdaehn@missouristate.edu>
 */

#include "ToyBox.h"

template<typename ItemType>
ToyBox<ItemType>::ToyBox() : boxColor{ BLACK }
{
}

template<typename ItemType>
ToyBox<ItemType>::ToyBox( const Color& theColor ) : boxColor{ theColor }
{
}

template<typename ItemType>
ToyBox<ItemType>::ToyBox( const ItemType& theItem, const Color& theColor ) : PlainBox<ItemType>( theItem ), boxColor{ theColor }
{
}

template<typename ItemType>
Color ToyBox<ItemType>::getColor() const
{
    return boxColor;
}
