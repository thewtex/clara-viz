/*
 * Copyright (c) 2018-2020, NVIDIA CORPORATION. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

namespace clara::viz
{

/**
 * Ensure that classes derived from class NonCopyable cannot be copied.
 */
class NonCopyable
{
protected:
    constexpr NonCopyable() = default;
    virtual ~NonCopyable()  = default;

    NonCopyable(const NonCopyable &) = delete;
    NonCopyable &operator=(const NonCopyable &) = delete;
};

/**
 * @returns the size of an array
 */
template<typename T, size_t N>
constexpr size_t CountOf(T const (&)[N]) noexcept
{
    return N;
}

} // namespace clara::viz
