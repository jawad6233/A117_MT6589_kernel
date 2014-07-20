/**
 * @file    morpho_effect_filtering_deblur.h
 * @brief   Morpho Filtering Effect "DEBLUR" module.
 *
 * effect_name     ...  "ES_PINFOCUS"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_DEBLUR_H
#define MORPHO_EFFECT_FILTERING_DEBLUR_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * EM_DEBLUR �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int area;        /**< �W������`���ΏۃG���A(0-256) */
} morpho_EffectFilteringDeblurParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_DEBLUR_H */
