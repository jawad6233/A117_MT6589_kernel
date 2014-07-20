/**
 * @file    morpho_effect_filtering_twinkle.h
 * @brief   Morpho Filtering Effect "TWINKLE" module.
 *
 * effect_name     ...  "EM_TWINKLE"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_TWINKLE_H
#define MORPHO_EFFECT_FILTERING_TWINKLE_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * EM_TWINKLE �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int strength;   /* TWINKLE���x(0�`256) default:128 */
} morpho_EffectFilteringTwinkleParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_TWINKLE_H */
