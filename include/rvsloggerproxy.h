/********************************************************************************
 *
 * Copyright (c) 2018 ROCm Developer Tools
 *
 * MIT LICENSE:
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 *******************************************************************************/
#ifndef RVSLOGGERPROXY_H_
#define RVSLOGGERPROXY_H_

#include "liblog.h"


namespace rvs
{


class lp

public:
  lp();
  ~lp();

  static int     Initialize(const T_MODULE_INIT* pInitStruct);
  static void*   LogRecordCreate( const char* Module, const char* Action, const int LogLevel);
  static int     LogRecordFlush( void* pLogRecord);
  static void*   CreateNode(void* Parent, const char* Name);
  static void    AddString(void* Parent, const char* Key, const char* Val);
  static void    AddInt(void* Parent, const char* Key, const int Val);
  static void    AddNode(void* Parent, const void* Child);


protected:
  static T_MODULE_INIT If;

};

}  // namespace rvs

#endif // RVSLOGGERPROXY_H_
