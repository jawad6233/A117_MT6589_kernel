/**
 * @file    morpho_effect_filtering_glass.h
 * @brief   Morpho Filtering Effect "GLASS" module.
 *
 * effect_name     ...  "ES_GLASS"
 * needs_image_num ...  1
 *
 * Copyright (C) 2010 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_GLASS_H
#define MORPHO_EFFECT_FILTERING_GLASS_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * ES_GLASS �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int amlitude;   //�K���X�c�݃��x�� 5 ~ 40 : default 20
    int blocksize;  //�K���X�i�q�̃T�C�Y�@10 ~ 200 : default 80
} morpho_EffectFilteringGlassParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_GLASS_H */
