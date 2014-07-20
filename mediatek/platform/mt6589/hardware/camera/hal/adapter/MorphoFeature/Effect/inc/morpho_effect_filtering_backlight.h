/**
 * @file    morpho_effect_filtering_backlight.h
 * @brief   Morpho Filtering Effect "Backlight" module.
 *
 * effect_name     ...  "ES_BACKLIGHT"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_BACKLIGHT_H
#define MORPHO_EFFECT_FILTERING_BACKLIGHT_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * ES_BACKLIGHT �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int gain;     /* �Q�C���A�b�v���x��(0�`256) 256���ō� �f�t�H���g��64 */
    int gaussian; /* �K�E�V�A���֐����g�p���邩�ǂ����B 0�c�g�p���Ȃ��B 1�c�g�p����B �f�t�H���g:1 */
} morpho_EffectFilteringBacklightParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_BACKLIGHT_H */
