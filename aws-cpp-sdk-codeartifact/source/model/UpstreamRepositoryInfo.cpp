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

#include <aws/codeartifact/model/UpstreamRepositoryInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

UpstreamRepositoryInfo::UpstreamRepositoryInfo() : 
    m_repositoryNameHasBeenSet(false)
{
}

UpstreamRepositoryInfo::UpstreamRepositoryInfo(JsonView jsonValue) : 
    m_repositoryNameHasBeenSet(false)
{
  *this = jsonValue;
}

UpstreamRepositoryInfo& UpstreamRepositoryInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  return *this;
}

JsonValue UpstreamRepositoryInfo::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
