/* 引用系统头文件 */
#include <file>

/* 引用用户头文件 */
#include "file"

#ifndef HEADER_FILE
#define HEADER_FILE

#include "xxx.h"  /* 引用同目录下的头文件 */

#endif

#if SYSTEM_1
   # include "system_1.h"
#elif SYSTEM_2
   # include "system_2.h"
#elif SYSTEM_3
   ...
#endif