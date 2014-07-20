/**
 * @file    morpho_effect_filtering_pencil.h
 * @brief   Morpho Filtering Effect "Pencil" module.
 *
 * effect_name     ...  "ES_PENCIL"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_PENCIL_H
#define MORPHO_EFFECT_FILTERING_PENCIL_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * ES_PENCIL �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int touch;       /* �M�^�b�`�̕����i4�F�G�b�W�ɉ����āA5:�G�b�W�ɐ����A0�`3�F�����A�΂߁i�E���j�A�����A�΂߁i�E��j�j */
    int saturation;  /* �ʓx(0-256)*/
    int target_width;
    int target_height;
} morpho_EffectFilteringPencilParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_PENCIL_H */
