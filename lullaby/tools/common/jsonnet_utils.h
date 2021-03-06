/*
Copyright 2017-2019 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS-IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef LULLABY_TOOLS_COMMON_JSONNET_UTILS_H_
#define LULLABY_TOOLS_COMMON_JSONNET_UTILS_H_

#include <functional>
#include <map>
#include <string>

namespace lull {
namespace tool {

using JsonnetImportCallbackFn = std::function<bool(const char*, std::string*)>;
using JsonnetExtVarMap = std::map<std::string, std::string>;

// Converts a jsonnet string into a json string.
std::string ConvertJsonnetToJson(
    const std::string& jsonnet, const JsonnetImportCallbackFn& importer,
    const std::string& filename = "",
    const JsonnetExtVarMap& ext_vars = JsonnetExtVarMap{});

}  // namespace tool
}  // namespace lull

#endif  // LULLABY_TOOLS_COMMON_JSONNET_UTILS_H_
