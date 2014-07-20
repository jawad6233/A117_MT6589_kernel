/**
 * @file    morpho_effect_filtering_lightent.h
 * @brief   Morpho Filtering Effect "LIGHTEN" module.
 *
 * effect_name     ...  "ES_LIGHTEN"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_LIGHTEN_H
#define MORPHO_EFFECT_FILTERING_LIGHTEN_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * ES_LIGHTEN �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int strength;   /* LIGHTEN���x(0�`256) default:64 */
} morpho_EffectFilteringLightenParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_LIGHTEN_H */
