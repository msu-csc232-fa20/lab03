/**
 * CSC232 - Data Structures.
 * Missouri State University, Fall 2020.
 * 
 * @brief   MacigBox implementation file.
 * @file    MagicBox.cpp
 * @authors Carrano & Henry
 *          Jim Daehn <jdaehn@missouristate.edu>
 */

#include "MagicBox.h"

template<typename ItemType>
MagicBox<ItemType>::MagicBox( ) : firstItemStored{ false }
{
    // PlainBox constructor is called implicitly.
    // Box initially has no magic.
} // end default constructor

template<typename ItemType>
MagicBox<ItemType>::MagicBox( const ItemType& theItem ) : firstItemStored{ false }
{
    // Box initially has no magic
    setItem( theItem ); // Calls the MagicBox version of setItem
    // Box now has magic
} // end constructor

template<typename ItemType>
void MagicBox<ItemType>::setItem( const ItemType& theItem )
{
    if ( !firstItemStored )
    {
        PlainBox<ItemType>::setItem( theItem );
        firstItemStored = true; // Box now has magic
    } // end if
} // end setItem
