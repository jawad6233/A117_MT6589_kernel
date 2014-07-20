/**
 * @file    morpho_effect_filtering_wave.h
 * @brief   Morpho Filtering Effect "WAVE" module.
 *
 * effect_name     ...  "ES_WAVE"
 * needs_image_num ...  1
 *
 * Copyright (C) 2010 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_WAVE_H
#define MORPHO_EFFECT_FILTERING_WAVE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * ES_WAVE �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int orientation;  //���� 0: bottom
                      //      1: left
                      //      2: up
                      //      3: right
    int water_percent;  //�g�����͉�ʑS�̂̃p�[�Z���e�[�W 1 ~ 50 : default 35
    int wave_period;    //�g�̎��� 5 ~ 100(frame) : default 30
    int wave_amplitude; //�g�̐U�� 1 ~ 20: default 15
    int wave_length;    //�ő�̔g��  1 ~ 20: default 5
} morpho_EffectFilteringWaveParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_WAVE_H */
