/**
 * @file    morpho_effect_filtering_selectcolor.h
 * @brief   Morpho Filtering Effect "SELECTCOLOR" module.
 *
 * effect_name     ...  "ES_SELECTCOLOR"
 * needs_image_num ...  1
 *
 * Copyright (C) 2011 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_SELECTCOLOR_H
#define MORPHO_EFFECT_FILTERING_SELECTCOLOR_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * EM_SELECTCOLOR �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int red;              /**< �I�������F�i�Ԑ����j(0-255) default:200 */
    int green;            /**< �I�������F�i�ΐ����j(0-255) default:20 */
    int blue;             /**< �I�������F�i�����j(0-255) default:20 */
    int range;            /**< �I������F�͈̔́i0-1024�jdefault:12 */
    int brightness;       /**< �F����(0:���� - 256:�F�����Ȃ� - 1024) default:384 */
} morpho_EffectFilteringSelectColorParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_SELECTCOLOR_H */
