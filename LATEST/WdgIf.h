#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_WdgIf.h"

class class_WdgIf{
   public:
      FUNC(void, WDGIF_CODE) SetMode             (void);
      FUNC(void, WDGIF_CODE) SetTriggerCondition (void);
      FUNC(void, WDGIF_CODE) GetVersionInfo      (void);
};

extern class_WdgIf WdgIf;

