/**
 * @file    morpho_effect_animation_zoom.h
 * @brief   Morpho Animation Effect "ZOOM" module.
 *
 * effect_name     ...  "AN_ZOOM"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_ANIMATION_ZOOM_H
#define MORPHO_EFFECT_ANIMATION_ZOOM_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * AN_ZOOM �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    morpho_RectInt startRect;
    morpho_RectInt endRect;
    int color_r; /**< �w�i�F(r����) */
    int color_g; /**< �w�i�F(g����) */
    int color_b; /**< �w�i�F(b����) */
    const morpho_ImageData* p_bg_image;  /**< �w�i�摜. */
    int draw_all_bg; /**<�w�i�F�A�w�i�摜���o�͉摜�S�̂ɕ`�悷�邩�ǂ��� 0�c�h��Ԃ��Ȃ� 1�c�w��rect�̂� 2�c�o�͉摜�S�� */
} morpho_EffectAnimationZoomParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_ANIMATION_ZOOM_H */
