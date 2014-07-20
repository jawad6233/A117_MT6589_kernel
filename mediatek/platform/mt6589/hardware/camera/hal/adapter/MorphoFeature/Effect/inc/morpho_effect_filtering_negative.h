/**
 * @file    morpho_effect_filtering_negative.h
 * @brief   Morpho Filtering Effect "NEGATIVE" module.
 *
 * effect_name     ...  "ES_NEGATIVE"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_NEGATIVE_H
#define MORPHO_EFFECT_FILTERING_NEGATIVE_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * ES_NEGATIVE �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int reverse_red;   /* RGB��R���] default:1 */
    int reverse_green;   /* RGB��G���] default:1 */
    int reverse_blue;   /* RGB��B�̔��] default:1 */
} morpho_EffectFilteringNegativeParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_NEGATIVE_H */
