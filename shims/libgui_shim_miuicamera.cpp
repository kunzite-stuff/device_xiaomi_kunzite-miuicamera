/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

extern "C" {

void _ZN7android18BnProducerListener16onBufferDetachedEi() {
    return;
}

int lockImageFromBuffer5(void* buffer, unsigned int usage, const void* rect,
                         int fenceFd, void* lockedBuffer)
    __asm__("_ZN7android19lockImageFromBufferENS_2spINS_13GraphicBufferEEEjRKNS_4RectEiPNS_11CpuConsumer12LockedBufferE");

int _ZN7android19lockImageFromBufferENS_2spINS_13GraphicBufferEEEjRKNS_4RectEiPNS_11CpuConsumer12LockedBufferEb(
        void* buffer, unsigned int usage, const void* rect, int fenceFd,
        void* lockedBuffer, bool /*unused*/) {
    return lockImageFromBuffer5(buffer, usage, rect, fenceFd, lockedBuffer);
}

}
