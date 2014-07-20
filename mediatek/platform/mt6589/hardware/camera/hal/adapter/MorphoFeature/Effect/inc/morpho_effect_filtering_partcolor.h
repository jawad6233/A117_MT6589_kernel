/**
 * @file    morpho_effect_filtering_partcolor.h
 * @brief   Morpho Filtering Effect "Partcolor" module.
 *
 * effect_name     ...  "ES_PARTCOLOR"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_PARTCOLOR_H
#define MORPHO_EFFECT_FILTERING_PARTCOLOR_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * ES_PARTCOLOR �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int area;        /* �S�̂̂ǂꂾ���̖ʐςɐF�����邩(0-256) */
    int brightness;  /* �N�₩��(0-256) */
} morpho_EffectFilteringPartcolorParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_PARTCOLOR_H */
