/**
 * @file    morpho_effect_filtering_poster.h
 * @brief   Morpho Filtering Effect "Poster" module.
 *
 * effect_name     ...  "ES_POSTER"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_POSTER_H
#define MORPHO_EFFECT_FILTERING_POSTER_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * ES_POSTER �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int strength;         /* �����W��  0�`256 */
    int vividness;        /* �N�₩��(0-256) */
    int box;              /* �G����ۂ�(0-256) */
    int boxSmall;         /* �����g���\��(0-256) */
} morpho_EffectFilteringPosterParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_POSTER_H */
