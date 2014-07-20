/**
 * @file    morpho_effect_filtering_solarize.h
 * @brief   Morpho Filtering Effect "SOLARIZE" module.
 *
 * effect_name     ...  "ES_SOLARIZE"
 * needs_image_num ...  1
 *
 * Copyright (C) 2010 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_SOLARIZE_H
#define MORPHO_EFFECT_FILTERING_SOLARIZE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * ES_SOLARIZE �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int thres;          //�I�o�ő�l�Athres�𒴂���ƐF���]����@1~255 default:140
    int normalization;  //���K�� 1:���� 0:���Ȃ� default:1
} morpho_EffectFilteringSolarizeParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_SOLARIZE_H */
