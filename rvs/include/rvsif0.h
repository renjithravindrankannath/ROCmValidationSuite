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
#ifndef RVSIF0_H_
#define RVSIF0_H_


#include "rvsmodule_if0.h"
#include "rvsif_base.h"

namespace rvs 
{

class if0 : public ifbase {

public:
  virtual ~if0();
  virtual void   get_version(int*, int*, int*);
  virtual char*  get_name(void);
  virtual char*  get_description(void);
  virtual int    has_interface(int);
  virtual char*  get_config(void);
  virtual char*  get_output(void);

protected:
  if0();
  if0(const if0&);

virtual if0& operator= (const if0& rhs);
virtual ifbase* clone(void);

protected:
  t_rvs_module_get_version     rvs_module_get_version;
  t_rvs_module_get_name        rvs_module_get_name;
  t_rvs_module_get_description rvs_module_get_description;
  t_rvs_module_has_interface   rvs_module_has_interface;
  t_rvs_module_get_config      rvs_module_get_config;
  t_rvs_module_get_output      rvs_module_get_output;

friend class module;

};

}  // namespace rvs

#endif /* RVSIF0_H_ */
