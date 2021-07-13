/** 
* @file convertions_operations.h
* Converter application with 4 modes of operations
*
*/
#ifndef __CONVERTIONS_OPERATIONS_H__
#define __CONVERTIONS_OPERATIONS_H__

/**
 * @brief Structure for the Binary convertion operations
 * 
 */
long int Bin_to_Dec(long int); //1:BINARY TO DECIMAL
/**
*  takes input as Binary value
*  converts to Decimal
* @return Result of Decimal value
*/

long int Bin_to_Oct(long int); //2:BINARY TO OCTAL
/**
*  takes input as Binary value
*  converts to Octal
* @return Result of Octal value
*/

long int Bin_to_Hex(long int); //3:BINARY TO HEXA-DECIMAL
/**
*  takes input as Binary value
*  converts to Hexa-Decimal
* @return Result of Hexa-Decimal value
*/

long int Dec_to_Bin(long int); //4:DECIMAL TO BINARY
/**
*  takes input as Decimal value
*  converts to Binary
* @return Result of Binary value
*/

long int Dec_to_Oct(long int); //5:DECIMAL TO OCTAL
/**
*  takes input as Decimal value
*  converts to Octal
* @return Result of Octal value
*/

long int Dec_to_Hex(long int); //6:DECIMAL TO HEXA-DECIMAL
/**
*  takes input as Decimal value
*  converts to Hexa-Decimal
* @return Result of Hexa-Decimal value
*/

long int Oct_to_Bin(long int); //7:OCTAL TO BINARY
/**
*  takes input as Octal value
*  converts to Binary
* @return Result of Binary value
*/

long int Oct_to_Dec(long int); //8:OCTAL TO DECIMAL
/**
*  takes input as Octal value
*  converts to Decimal
* @return Result of Decimal value
*/

long int Oct_to_Hex(long int); //9:OCTAL TO HEXA-DECIMAL
/**
*  takes input as Octal value
*  converts to Hexa-Decimal
* @return Result of Hexa-Decimal value
*/

char Hex_to_Bin(char []); //10:HEXA-DECIMAL TO BINARY
/**
*  takes input as Hexa-Decimal value
*  converts to Binary
* @return Result of Binary value
*/

char Hex_to_Dec(char []); //11:HEXA-DECIMAL TO DECIMAL
/**
*  takes input as Hexa-Decimal value
*  converts to Decimal
* @return Result of Decimal value
*/

char Hex_to_Oct(char []); //12:HEXA-DECIMAL TO OCTAL
/**
*  takes input as Hexa-Decimal value
*  converts to Octal
* @return Result of Octal value
*/

#endif 
