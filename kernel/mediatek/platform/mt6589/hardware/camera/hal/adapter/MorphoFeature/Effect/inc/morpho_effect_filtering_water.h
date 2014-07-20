/**
 * @file    morpho_effect_filtering_water.h
 * @brief   Morpho Filtering Effect "WATER" module.
 *
 * effect_name     ...  "ES_WATER"
 * needs_image_num ...  1
 *
 * Copyright (C) 2010 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_WATER_H
#define MORPHO_EFFECT_FILTERING_WATER_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * ES_WATER �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int source_x;      //�g���̒��Sx  0~width-1
    int source_y;      //�g���̒��Sy  0~height-1
    int source_size;   //�g���̔��a   1~30
    int source_power; //�g���̃p���[  1~120
} morpho_EffectFilteringWaterParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_WATER_H */
