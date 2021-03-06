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

#include <aws/iot/model/AwsJobTimeoutConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AwsJobTimeoutConfig::AwsJobTimeoutConfig() : 
    m_inProgressTimeoutInMinutes(0),
    m_inProgressTimeoutInMinutesHasBeenSet(false)
{
}

AwsJobTimeoutConfig::AwsJobTimeoutConfig(JsonView jsonValue) : 
    m_inProgressTimeoutInMinutes(0),
    m_inProgressTimeoutInMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsJobTimeoutConfig& AwsJobTimeoutConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inProgressTimeoutInMinutes"))
  {
    m_inProgressTimeoutInMinutes = jsonValue.GetInt64("inProgressTimeoutInMinutes");

    m_inProgressTimeoutInMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsJobTimeoutConfig::Jsonize() const
{
  JsonValue payload;

  if(m_inProgressTimeoutInMinutesHasBeenSet)
  {
   payload.WithInt64("inProgressTimeoutInMinutes", m_inProgressTimeoutInMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
