// Auto-generated file. Do not edit!
//   Template: src/qs8-vlrelu/sse2.c.in
//   Generator: tools/xngen
//
// Copyright 2022 Google LLC
//
// This source code is licensed under the BSD-style license found in the
// LICENSE file in the root directory of this source tree.

#include <assert.h>

#include <emmintrin.h>

#include <xnnpack/common.h>
#include <xnnpack/vlrelu.h>
#include <xnnpack/unaligned.h>


void xnn_qs8_vlrelu_ukernel__sse2_x32(
    size_t n,
    const int8_t* x,
    int8_t* y,
    const union xnn_qs8_lrelu_params params[restrict XNN_MIN_ELEMENTS(1)]) XNN_OOB_READS
{
  assert(n != 0);
  assert(n % sizeof(int8_t) == 0);
  assert(x != NULL);
  assert(y != NULL);

  const __m128i vinput_zero_point = _mm_load_si128((const __m128i*) params->sse2.input_zero_point);
  const __m128i vmultiplier_diff = _mm_load_si128((const __m128i*) params->sse2.multiplier_diff);
  const __m128i vmultiplier_base = _mm_load_si128((const __m128i*) params->sse2.multiplier_base);
  const __m128i voutput_zero_point = _mm_load_si128((const __m128i*) params->sse2.output_zero_point);
  const __m128i vzero = _mm_setzero_si128();
  for (; n >= 32 * sizeof(int8_t); n -= 32 * sizeof(int8_t)) {
    const __m128i vx0 = _mm_loadu_si128((const __m128i*) x);
    const __m128i vx1 = _mm_loadu_si128((const __m128i*) (x + 16));
    x += 32;

    const __m128i vm0 = _mm_cmpgt_epi8(_mm_setzero_si128(), vx0);
    __m128i vextx0 = _mm_unpacklo_epi8(vx0, vm0);
    __m128i vextx1 = _mm_unpackhi_epi8(vx0, vm0);
    const __m128i vm1 = _mm_cmpgt_epi8(_mm_setzero_si128(), vx1);
    __m128i vextx2 = _mm_unpacklo_epi8(vx1, vm1);
    __m128i vextx3 = _mm_unpackhi_epi8(vx1, vm1);

    __m128i vmultiplier0 = _mm_cmpgt_epi16(vextx0, vinput_zero_point);
    vextx0 = _mm_sub_epi16(vinput_zero_point, vextx0);
    __m128i vmultiplier1 = _mm_cmpgt_epi16(vextx1, vinput_zero_point);
    vextx1 = _mm_sub_epi16(vinput_zero_point, vextx1);
    __m128i vmultiplier2 = _mm_cmpgt_epi16(vextx2, vinput_zero_point);
    vextx2 = _mm_sub_epi16(vinput_zero_point, vextx2);
    __m128i vmultiplier3 = _mm_cmpgt_epi16(vextx3, vinput_zero_point);
    vextx3 = _mm_sub_epi16(vinput_zero_point, vextx3);

    vmultiplier0 = _mm_and_si128(vmultiplier0, vmultiplier_diff);
    vmultiplier1 = _mm_and_si128(vmultiplier1, vmultiplier_diff);
    vmultiplier2 = _mm_and_si128(vmultiplier2, vmultiplier_diff);
    vmultiplier3 = _mm_and_si128(vmultiplier3, vmultiplier_diff);

    vmultiplier0 = _mm_xor_si128(vmultiplier0, vmultiplier_base);
    vmultiplier1 = _mm_xor_si128(vmultiplier1, vmultiplier_base);
    vmultiplier2 = _mm_xor_si128(vmultiplier2, vmultiplier_base);
    vmultiplier3 = _mm_xor_si128(vmultiplier3, vmultiplier_base);

    __m128i vprodlo0 = _mm_mullo_epi16(vextx0, vmultiplier0);
    __m128i vprodlo1 = _mm_mullo_epi16(vextx1, vmultiplier1);
    __m128i vprodlo2 = _mm_mullo_epi16(vextx2, vmultiplier2);
    __m128i vprodlo3 = _mm_mullo_epi16(vextx3, vmultiplier3);

    vprodlo0 = _mm_srli_epi16(vprodlo0, 7);
    __m128i vprodhi0 = _mm_mulhi_epi16(vextx0, vmultiplier0);
    vprodlo1 = _mm_srli_epi16(vprodlo1, 7);
    __m128i vprodhi1 = _mm_mulhi_epi16(vextx1, vmultiplier1);
    vprodlo2 = _mm_srli_epi16(vprodlo2, 7);
    __m128i vprodhi2 = _mm_mulhi_epi16(vextx2, vmultiplier2);
    vprodlo3 = _mm_srli_epi16(vprodlo3, 7);
    __m128i vprodhi3 = _mm_mulhi_epi16(vextx3, vmultiplier3);

    vprodhi0 = _mm_slli_epi16(vprodhi0, 8);
    vprodlo0 = _mm_avg_epu16(vprodlo0, vzero);
    vprodhi1 = _mm_slli_epi16(vprodhi1, 8);
    vprodlo1 = _mm_avg_epu16(vprodlo1, vzero);
    vprodhi2 = _mm_slli_epi16(vprodhi2, 8);
    vprodlo2 = _mm_avg_epu16(vprodlo2, vzero);
    vprodhi3 = _mm_slli_epi16(vprodhi3, 8);
    vprodlo3 = _mm_avg_epu16(vprodlo3, vzero);

    __m128i vacc0 = _mm_add_epi16(vprodlo0, vprodhi0);
    __m128i vacc1 = _mm_add_epi16(vprodlo1, vprodhi1);
    __m128i vacc2 = _mm_add_epi16(vprodlo2, vprodhi2);
    __m128i vacc3 = _mm_add_epi16(vprodlo3, vprodhi3);

    vacc0 = _mm_adds_epi16(vacc0, voutput_zero_point);
    vacc1 = _mm_adds_epi16(vacc1, voutput_zero_point);
    vacc2 = _mm_adds_epi16(vacc2, voutput_zero_point);
    vacc3 = _mm_adds_epi16(vacc3, voutput_zero_point);

    const __m128i vy0 = _mm_packs_epi16(vacc0, vacc1);
    const __m128i vy1 = _mm_packs_epi16(vacc2, vacc3);

    _mm_storeu_si128((__m128i*) y, vy0);
    _mm_storeu_si128((__m128i*) (y + 16), vy1);
    y += 32;
  }
  for (; n >= 16 * sizeof(int8_t); n -= 16 * sizeof(int8_t)) {
    const __m128i vx = _mm_loadu_si128((const __m128i*) x);
    x += 16;

    const __m128i vm = _mm_cmpgt_epi8(_mm_setzero_si128(), vx);
    __m128i vextx0 = _mm_unpacklo_epi8(vx, vm);
    __m128i vextx1 = _mm_unpackhi_epi8(vx, vm);

    __m128i vmultiplier0 = _mm_cmpgt_epi16(vextx0, vinput_zero_point);
    __m128i vmultiplier1 = _mm_cmpgt_epi16(vextx1, vinput_zero_point);
    vextx0 = _mm_sub_epi16(vinput_zero_point, vextx0);
    vextx1 = _mm_sub_epi16(vinput_zero_point, vextx1);

    vmultiplier0 = _mm_and_si128(vmultiplier0, vmultiplier_diff);
    vmultiplier1 = _mm_and_si128(vmultiplier1, vmultiplier_diff);

    vmultiplier0 = _mm_xor_si128(vmultiplier0, vmultiplier_base);
    vmultiplier1 = _mm_xor_si128(vmultiplier1, vmultiplier_base);

    __m128i vprodlo0 = _mm_mullo_epi16(vextx0, vmultiplier0);
    __m128i vprodlo1 = _mm_mullo_epi16(vextx1, vmultiplier1);

    vprodlo0 = _mm_srli_epi16(vprodlo0, 7);
    vprodlo1 = _mm_srli_epi16(vprodlo1, 7);
    __m128i vprodhi0 = _mm_mulhi_epi16(vextx0, vmultiplier0);
    __m128i vprodhi1 = _mm_mulhi_epi16(vextx1, vmultiplier1);

    vprodhi0 = _mm_slli_epi16(vprodhi0, 8);
    vprodhi1 = _mm_slli_epi16(vprodhi1, 8);
    vprodlo0 = _mm_avg_epu16(vprodlo0, vzero);
    vprodlo1 = _mm_avg_epu16(vprodlo1, vzero);

    __m128i vacc0 = _mm_add_epi16(vprodlo0, vprodhi0);
    __m128i vacc1 = _mm_add_epi16(vprodlo1, vprodhi1);

    vacc0 = _mm_adds_epi16(vacc0, voutput_zero_point);
    vacc1 = _mm_adds_epi16(vacc1, voutput_zero_point);

    const __m128i vy = _mm_packs_epi16(vacc0, vacc1);
    _mm_storeu_si128((__m128i*) y, vy);
    y += 16;
  }
  if XNN_UNLIKELY(n != 0) {
    assert(n >= 1 * sizeof(int8_t));
    assert(n <= 15 * sizeof(int8_t));

    const __m128i vx = _mm_loadu_si128((const __m128i*) x);

    const __m128i vm = _mm_cmpgt_epi8(_mm_setzero_si128(), vx);
    __m128i vextx0 = _mm_unpacklo_epi8(vx, vm);
    __m128i vextx1 = _mm_unpackhi_epi8(vx, vm);

    __m128i vmultiplier0 = _mm_cmpgt_epi16(vextx0, vinput_zero_point);
    __m128i vmultiplier1 = _mm_cmpgt_epi16(vextx1, vinput_zero_point);
    vextx0 = _mm_sub_epi16(vinput_zero_point, vextx0);
    vextx1 = _mm_sub_epi16(vinput_zero_point, vextx1);

    vmultiplier0 = _mm_and_si128(vmultiplier0, vmultiplier_diff);
    vmultiplier1 = _mm_and_si128(vmultiplier1, vmultiplier_diff);

    vmultiplier0 = _mm_xor_si128(vmultiplier0, vmultiplier_base);
    vmultiplier1 = _mm_xor_si128(vmultiplier1, vmultiplier_base);

    __m128i vprodlo0 = _mm_mullo_epi16(vextx0, vmultiplier0);
    __m128i vprodlo1 = _mm_mullo_epi16(vextx1, vmultiplier1);

    vprodlo0 = _mm_srli_epi16(vprodlo0, 7);
    vprodlo1 = _mm_srli_epi16(vprodlo1, 7);
    __m128i vprodhi0 = _mm_mulhi_epi16(vextx0, vmultiplier0);
    __m128i vprodhi1 = _mm_mulhi_epi16(vextx1, vmultiplier1);

    vprodhi0 = _mm_slli_epi16(vprodhi0, 8);
    vprodhi1 = _mm_slli_epi16(vprodhi1, 8);
    vprodlo0 = _mm_avg_epu16(vprodlo0, vzero);
    vprodlo1 = _mm_avg_epu16(vprodlo1, vzero);

    __m128i vacc0 = _mm_add_epi16(vprodlo0, vprodhi0);
    __m128i vacc1 = _mm_add_epi16(vprodlo1, vprodhi1);

    vacc0 = _mm_adds_epi16(vacc0, voutput_zero_point);
    vacc1 = _mm_adds_epi16(vacc1, voutput_zero_point);

    __m128i vy = _mm_packs_epi16(vacc0, vacc1);
    if (n & (8 * sizeof(int8_t))) {
      _mm_storel_epi64((__m128i*) y, vy);
      vy = _mm_unpackhi_epi64(vy, vy);
      y += 8;
    }
    if (n & (4 * sizeof(int8_t))) {
      unaligned_store_u32(y, (uint32_t) _mm_cvtsi128_si32(vy));
      vy = _mm_srli_epi64(vy, 32);
      y += 4;
    }
    uint32_t vy0 = (uint32_t) _mm_cvtsi128_si32(vy);
    if (n & (2 * sizeof(int8_t))) {
      unaligned_store_u16(y, (uint16_t) vy0);
      vy0 >>= 16;
      y += 2;
    }
    if (n & (1 * sizeof(int8_t))) {
      *y = (int8_t) vy0;
    }
  }
}
