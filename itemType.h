//Victor Li
////Data structures with Professor Yanjun Li
//Header file and writing out methods for itemtype
//September 25th

//  SPECIFICATION FILE ItemType.h 
#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#include <iostream>
using namespace std;

const int  MAX_ITEM =36;
enum  RelationType { LESS, EQUAL, GREATER, UNEQUAL };


class  ItemType		// declares class data type
{						
public : 			// 4 public member functions

  ItemType() {
  value = 5;
  }

  RelationType ComparedTo( ItemType  otherItem ) const 
  {
    if(value == otherItem.value or abs(value - otherItem.value) == 32)
    	return EQUAL;
    else
	return UNEQUAL;    
    /*if ( value  <  otherItem.value )
       return  LESS;

    else if ( value  > otherItem.value )
       return  GREATER;
    else  return  EQUAL;*/
  }

  void Print( ) const 
  {
   cout  <<  value  <<  endl;
  }

   void Initialize( char value )
  {
    this->value  =  value;              
  } 	           


private :			// 1 private data member
	char  value; 		// could be any type 
} ;
#endif	
