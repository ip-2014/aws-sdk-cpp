﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/OfferingTransaction.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>The result of the purchase offering (e.g., success or failure).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/PurchaseOfferingResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API PurchaseOfferingResult
  {
  public:
    PurchaseOfferingResult();
    PurchaseOfferingResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PurchaseOfferingResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline const OfferingTransaction& GetOfferingTransaction() const{ return m_offeringTransaction; }

    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline void SetOfferingTransaction(const OfferingTransaction& value) { m_offeringTransaction = value; }

    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline void SetOfferingTransaction(OfferingTransaction&& value) { m_offeringTransaction = std::move(value); }

    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline PurchaseOfferingResult& WithOfferingTransaction(const OfferingTransaction& value) { SetOfferingTransaction(value); return *this;}

    /**
     * <p>Represents the offering transaction for the purchase result.</p>
     */
    inline PurchaseOfferingResult& WithOfferingTransaction(OfferingTransaction&& value) { SetOfferingTransaction(std::move(value)); return *this;}

  private:
    OfferingTransaction m_offeringTransaction;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
