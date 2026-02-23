#pragma once
#include <Noahh/Result.hpp>

#define ARC_UNWRAP(...) NOAHH_UNWRAP(__VA_ARGS__)
#define ARC_UNWRAP_INTO(...) NOAHH_UNWRAP_INTO(__VA_ARGS__)
#define ARC_CO_UNWRAP(...) NOAHH_CO_UNWRAP(__VA_ARGS__)
#define ARC_CO_UNWRAP_INTO(v, ...) NOAHH_CO_UNWRAP_INTO(v, __VA_ARGS__)

#define ARC_MAP_UNWRAP(...) NOAHH_UNWRAP((__VA_ARGS__).mapErr([](auto err) { return err.message(); }))
#define ARC_CO_MAP_UNWRAP(...) NOAHH_CO_UNWRAP((__VA_ARGS__).mapErr([](auto err) { return err.message(); }))

#define ARC_MAP_UNWRAP_INTO(dest, ...) NOAHH_UNWRAP_INTO(dest, (__VA_ARGS__).mapErr([](auto err) { return err.message(); }))
#define ARC_CO_MAP_UNWRAP_INTO(dest, ...) NOAHH_CO_UNWRAP_INTO(dest, (__VA_ARGS__).mapErr([](auto err) { return err.message(); }))

namespace arc {

using noahh::Ok;
using noahh::Err;
using noahh::Result;

}
