/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../common.h"
#include "AudioMixer.h"

namespace OpenRCT2::Audio
{
    /**
     * Represents a readable source of audio PCM data.
     */
    interface IAudioSource
    {
        virtual ~IAudioSource() = default;

        virtual uint64_t GetLength() const abstract;
        // virtual AudioFormat GetFormat() abstract;
        virtual size_t Read(void* dst, uint64_t offset, size_t len) abstract;
    };

    namespace AudioSource
    {
        IAudioSource* CreateNull();
    }
} // namespace OpenRCT2::Audio
