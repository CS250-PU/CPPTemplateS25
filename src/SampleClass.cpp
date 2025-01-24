//******************************************************************************
// File name:   SampleClass.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     
// Hours:       
//******************************************************************************
#include <iostream>
#include "../include/SampleClass.h"

/*******************************************************************************
Function:     factorial

Description:  The factorial of a number is defined using the folloiwng formula
              n! = n * (n - 1) * (n - 2) * ... * 2 * 1
              The factorial of 0 is defined to be 1
              
Parameter:    uInt - the number to calculate the factorial of

Returned      The factorial of the parameter
*******************************************************************************/
size_t SampleClass::factorial (size_t uInt) {
  size_t result = 1;

  for (size_t i = uInt; i >= 2; i--) {
    result *= i;
  }

  return result;
}