/*
 * Copyright (c) 2019, 2022, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef CPU_ARM_CONTINUATION_ARM_INLINE_HPP
#define CPU_ARM_CONTINUATION_ARM_INLINE_HPP

#include "oops/stackChunkOop.inline.hpp"
#include "runtime/frame.hpp"
#include "runtime/frame.inline.hpp"

frame ContinuationEntry::to_frame() const {
  Unimplemented();
  return frame();
}

void ContinuationEntry::update_register_map(RegisterMap* map) const {
  Unimplemented();
}

void ContinuationHelper::set_anchor_to_entry_pd(JavaFrameAnchor* anchor, ContinuationEntry* cont) {
  Unimplemented();
}

void ContinuationHelper::set_anchor_pd(JavaFrameAnchor* anchor, intptr_t* sp) {
  Unimplemented();
}

inline void FreezeBase::set_top_frame_metadata_pd(const frame& hf) {
  Unimplemented();
}

template<typename FKind>
inline frame FreezeBase::sender(const frame& f) {
  Unimplemented();
  return frame();
}

template<typename FKind> frame FreezeBase::new_hframe(frame& f, frame& caller) {
  Unimplemented();
  return frame();
}

inline void FreezeBase::relativize_interpreted_frame_metadata(const frame& f, const frame& hf) {
  Unimplemented();
}

inline void FreezeBase::patch_pd(frame& hf, const frame& caller) {
  Unimplemented();
}

inline void FreezeBase::patch_chunk_pd(intptr_t* vsp, intptr_t* hsp) {
  Unimplemented();
}

inline frame ThawBase::new_entry_frame() {
  Unimplemented();
  return frame();
}

template<typename FKind> frame ThawBase::new_frame(const frame& hf, frame& caller, bool bottom) {
  Unimplemented();
  return frame();
}

inline void ThawBase::set_interpreter_frame_bottom(const frame& f, intptr_t* bottom) {
  Unimplemented();
}

inline void ThawBase::derelativize_interpreted_frame_metadata(const frame& hf, const frame& f) {
  Unimplemented();
}

inline intptr_t* ThawBase::align(const frame& hf, intptr_t* vsp, frame& caller, bool bottom) {
  Unimplemented();
  return NULL;
}

inline void ThawBase::patch_pd(frame& f, const frame& caller) {
  Unimplemented();
}

intptr_t* ThawBase::push_interpreter_return_frame(intptr_t* sp) {
  Unimplemented();
  return NULL;
}

void ThawBase::patch_chunk_pd(intptr_t* sp) {
  Unimplemented();
}

inline void ThawBase::prefetch_chunk_pd(void* start, int size) {
  Unimplemented();
}

#endif // CPU_ARM_CONTINUATION_ARM_INLINE_HPP
