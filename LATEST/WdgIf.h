#pragma once
/*****************************************************/
/* File   : WdgIf.h                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_WdgIf.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_WdgIf{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, WDGIF_CODE) SetMode             (void);
      FUNC(void, WDGIF_CODE) SetTriggerCondition (void);
      FUNC(void, WDGIF_CODE) GetVersionInfo      (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern class_WdgIf WdgIf;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

