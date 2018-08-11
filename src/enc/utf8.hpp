#include <cstddef>


const char32_t * decode_utf8
(
 const char *,
 std::size_t,
 char32_t *
) noexcept;

std::size_t encode_utf8
(
 char32_t,
 char[4]
) noexcept;
