#pragma once

#include <unordered_map>

#include "Geode/utils/Result.hpp"

#include "compat/compat.hpp"

namespace jukebox {

namespace compat {

namespace v2 {

bool manifestExists();
void backupManifest(bool deleteOrig = false);
std::filesystem::path manifestPath();
geode::Result<std::unordered_map<int, CompatManifest>> parseManifest();

}  // namespace v2

}  // namespace compat

}  // namespace jukebox
