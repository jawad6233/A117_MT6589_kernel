/**
 * @file    morpho_effect_filtering_highcontrast.h
 * @brief   Morpho Filtering Effect "MINIATURE" module.
 *
 * effect_name     ...  "ES_MINIATURE"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_MINIATURE_H
#define MORPHO_EFFECT_FILTERING_MINIATURE_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * ES_MINIATURE �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int vertical_center;   /* �E�C���h�E(���ʂ�������͈�)�̒���(0�`256) 0�c��ԏオ���S 256�c��ԉ������S default:128 */
    int tilt_strength;     /* ��ʑ̐[�x(0�`256) default:128 */
    int window_size;       /* �E�C���h�E(���ʂ�������͈�)�̐��������̃T�C�Y(0�`256) default:128 */
    int saturation_boost;		/* ���F���H���x�W��(0�`256) default:128 */
} morpho_EffectFilteringMiniatureParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_MINIATURE_H */
