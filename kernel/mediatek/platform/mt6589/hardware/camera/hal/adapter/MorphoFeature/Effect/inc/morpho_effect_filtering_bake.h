/**
 * @file    morpho_effect_filtering_bake.h
 * @brief   Morpho Filtering Effect "BAKE" module.
 *
 * effect_name     ...  "ES_BAKE"
 * needs_image_num ...  1
 *
 * Copyright (C) 2010 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_BAKE_H
#define MORPHO_EFFECT_FILTERING_BAKE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * ES_BAKE �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int radius_in;    /* ���a 0 ~ 100 : default 45*/
    int radius_out;   /* �O�a radius_in ~ 100 : default 95*/
} morpho_EffectFilteringBakeParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_BAKE_H */
