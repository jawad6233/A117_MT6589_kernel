/**
 * @file    morpho_effect_filtering_colorfilter.h
 * @brief   Morpho Filtering Effect "COLORFILTER" module.
 *
 * effect_name     ...  "ES_COLORFILTER"
 * needs_image_num ...  1
 *
 * Copyright (C) 2011 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_COLORFILTER_H
#define MORPHO_EFFECT_FILTERING_COLORFILTER_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * EM_COLORFILTER �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int red;              /**< �Ԑ����̋���(0-256) default:128 */
    int green;            /**< �ΐ����̋���(0-256) default:256 */
    int blue;             /**< �����̋���(0-256) default:128 */
} morpho_EffectFilteringColorFilterParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_COLORFILTER_H */
