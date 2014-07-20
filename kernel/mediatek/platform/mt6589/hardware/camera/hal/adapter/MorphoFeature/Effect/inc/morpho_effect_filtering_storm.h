/**
 * @file    morpho_effect_filtering_storm.h
 * @brief   Morpho Filtering Effect "STORM" module.
 *
 * effect_name     ...  "ES_STORM"
 * needs_image_num ...  1
 *
 * Copyright (C) 2010 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_STORM_H
#define MORPHO_EFFECT_FILTERING_STORM_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * ES_STORM �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int rain_angle;     //�J�̊p�x�@-30 ~ 30 : default 10
    int rain_strength;  //�J�̋��x�@0 ~ 10 : default 10
    int rain_brightness;//�J�̐��̐F�@50 ~ 200 : default 130
    int rain_speed;     //�J�̃X�s�[�h1 ~ 100 : default 30
    int lightning_enable; // ��mode   0 ~ 1 : default 1
    int lightning_num;    // ���̐��@0 ~ 10 : default 1
} morpho_EffectFilteringStormParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_STORM_H */
