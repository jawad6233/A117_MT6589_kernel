/**
 * @file    morpho_effect_filtering_nature.h
 * @brief   Morpho Filtering Effect "NATURE" module.
 *
 * effect_name     ...  "ES_NATURE"
 * needs_image_num ...  1
 *
 * Copyright (C) 2010 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_NATURE_H
#define MORPHO_EFFECT_FILTERING_NATURE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * ES_NATURE �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int contrast;     /* �R���g���X�g 0~127 : default 35*/
    int brightness;   /* ���x 0~127 : default 10*/
    int shadow;       /* �V���h�[�̋��� -128~128  : default 30 ����:�Â��A����:���邢*/
    int radius_in;    /* ���a 0~100  : default 55*/
    int radius_out;   /* �O�a radius_in ~ 100 : default 75*/
} morpho_EffectFilteringNatureParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_NATURE_H */
