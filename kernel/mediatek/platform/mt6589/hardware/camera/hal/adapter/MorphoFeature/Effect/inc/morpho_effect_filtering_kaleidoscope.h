/**
 * @file    morpho_effect_filtering_kaleidoscope.h
 * @brief   Morpho Filtering Effect "KALEIDOSCOPE" module.
 *
 * effect_name     ...  "ES_KALEIDOSCOPE"
 * needs_image_num ...  1
 *
 * Copyright (C) 2011 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_KALEIDOSCOPE_H
#define MORPHO_EFFECT_FILTERING_KALEIDOSCOPE_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * EM_COLORFILTER �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int center_x;           /**< ���SX���W default:�摜������X���W */
    int center_y;           /**< ���SY���W default:�摜������Y���W */
    int tri_radius;         /**< �O�p�`�̊O�S�̔��a default:160 */
    int angle;              /**< �O�p�`�̊p�x(0-360)  default:0*/
    int orientation;        /**< �摜�̌���(0-3) default:0*/
} morpho_EffectFilteringKaleidoscopeParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_KALEIDOSCOPE_H */
