/**
 * @file    morpho_effect_filtering_harris.h
 * @brief   Morpho Filtering Effect "HARRIS" module.
 *
 * effect_name     ...  "EM_HARRIS"
 * needs_image_num ...  1-
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_HARRIS_H
#define MORPHO_EFFECT_FILTERING_HARRIS_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * EM_HARRIS �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int green_delay;      /**< �ΐ��������t���[�����x�点�邩(1�`3)�F�f�t�H���g 3 */
    int blue_delay;       /**< ���������t���[�����x�点�邩(1�`6)�F�f�t�H���g 6 */
    int skip_frame_num;   /**< ���t���[�������ɕۑ����邩  (0�`256)�F�f�t�H���g 0 */

   /* �e������ ***_delay * (skip_frame_num + 1) �t���[���x��ĕ\������� */
} morpho_EffectFilteringHarrisParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_HARRIS_H */
