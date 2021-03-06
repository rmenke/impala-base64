// Copyright 2015 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PULSE_IMPALA_B64_ENCODE_UDF_H
#define PULSE_IMPALA_B64_ENCODE_UDF_H

#include <impala_udf/udf.h>

using impala_udf::FunctionContext;
using impala_udf::StringVal;

namespace pulse {
  namespace base64 {
    StringVal Encode(FunctionContext* ctx, const StringVal& s);
  }
}

#endif
