/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/waf/model/ParameterExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>

using namespace Aws::Utils;

static const int INVALID_OPTION_HASH = HashingUtils::HashString("INVALID_OPTION");
static const int ILLEGAL_COMBINATION_HASH = HashingUtils::HashString("ILLEGAL_COMBINATION");

namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace ParameterExceptionReasonMapper
      {


        ParameterExceptionReason GetParameterExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_OPTION_HASH)
          {
            return ParameterExceptionReason::INVALID_OPTION;
          }
          else if (hashCode == ILLEGAL_COMBINATION_HASH)
          {
            return ParameterExceptionReason::ILLEGAL_COMBINATION;
          }
          EnumParseOverflowContainer* overflowContainer = g_enumOverflow.load();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterExceptionReason>(hashCode);
          }

          return ParameterExceptionReason::NOT_SET;
        }

        Aws::String GetNameForParameterExceptionReason(ParameterExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ParameterExceptionReason::INVALID_OPTION:
            return "INVALID_OPTION";
          case ParameterExceptionReason::ILLEGAL_COMBINATION:
            return "ILLEGAL_COMBINATION";
          default:
            EnumParseOverflowContainer* overflowContainer = g_enumOverflow.load();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ParameterExceptionReasonMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws