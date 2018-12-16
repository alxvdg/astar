
#ifndef ERROR_CODE_H
#define ERROR_CODE_H

//--------------------------------//
// ENUMERATION DEFINITIONS        //
//--------------------------------//

typedef enum _ErrorCode
{
  ERROR_NO_ERROR = 0,
  ERROR_ERROR,
  ERROR_NULL_POINTER,
  ERROR_INVALID_PARAMETER,

} ErrorCode;

//--------------------------------//
// PUBLIC FUNCTIONS               //
//--------------------------------//

//LOG_ERROR(ErrorCode errorCode, char *str);

#endif // ERROR_CODE_H
