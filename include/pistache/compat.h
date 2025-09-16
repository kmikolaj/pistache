#pragma once

#if __has_include(<optional>)
#include <optional>
namespace compat {
    template <typename T>
    using optional = std::optional<T>;
    using nullopt_t = std::nullopt_t;
    constexpr auto nullopt = std::nullopt;
}
#else
#include <experimental/optional>
namespace compat {
    template <typename T>
    using optional = std::experimental::optional<T>;
    using nullopt_t = std::experimental::nullopt_t;
    constexpr auto nullopt = std::experimental::nullopt;
}
#endif

#if __has_include(<string_view>)
#include <string_view>
namespace compat {
    using string_view = std::string_view;
}
#else
#include <experimental/string_view>
namespace compat {
    using string_view = std::experimental::string_view;
}
#endif

