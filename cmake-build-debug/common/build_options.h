#pragma once

#define ALICE_REDUCEDEVENT 1
#define ALICE_AOD 0

struct BuildOptions {
constexpr static bool reducedevent = static_cast<bool>(ALICE_REDUCEDEVENT);
constexpr static bool aod = static_cast<bool>(ALICE_AOD);
};

constexpr BuildOptions build_options;

static_assert(build_options.reducedevent != build_options.aod, "Cannot activate both interfaces at once.");
