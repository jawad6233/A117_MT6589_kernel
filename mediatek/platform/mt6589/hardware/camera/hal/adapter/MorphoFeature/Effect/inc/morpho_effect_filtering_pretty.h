/**
 * @file    morpho_effect_filtering_pretty.h
 * @brief   Morpho Filtering Effect "Pretty" module.
 *
 * effect_name     ...  "ES_PRETTY"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_PRETTY_H
#define MORPHO_EFFECT_FILTERING_PRETTY_H

#include "morpho_rect_int.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MORPHO_EFFECT_FILTERING_PRETTY_MAX_FACE_RECTS  10
    
/**  
 * ES_PRETTY �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
/* �����␳�p�p�����[�^ */
    unsigned char ideal_r;  /* �␳�ڕW��f�l(R) 0�`255 */
    unsigned char ideal_g;  /* �␳�ڕW��f�l(G) 0�`255 */
    unsigned char ideal_b;  /* �␳�ڕW��f�l(B) 0�`255 */
    int strength;           /* ���z�ɂǂ��܂ŋ߂Â��邩(0-256) */
/* ����␳�p�p�����[�^ */
    int face_smallness;   /* ��̏�����(0�`256) */
/* �ڕ␳�p�p�����[�^ */
    int eye_vividness;    /* �ڂ̍���(0�`256) */
    int eye_wideness;     /* �ڂ̑傫��(0�`256) */
    int eye_sharpness;    /* �ڂ̂�������x����(0�`256) */
    int eyelash_mode;     /* 0..�܂ѕ␳�Ȃ�  1..�܂ѕ␳1  2..�܂ѕ␳2 3..�܂ѕ␳3 */
    int red_eye;          /* �Ԗڕ␳���x��(0�`256) 0�ŕ␳�Ȃ��B�l���傫���قǋ����␳ */
    
    int use_external_rect;      /* �O������̊��`�w����g�p���邩�ǂ����B 0..�g�p���Ȃ��B 1..�g�p����B*/
    morpho_RectInt face_rects[MORPHO_EFFECT_FILTERING_PRETTY_MAX_FACE_RECTS];  /* ���` */
    int angles[MORPHO_EFFECT_FILTERING_PRETTY_MAX_FACE_RECTS]; /* ���`�̌��� MORPHO_EFFECT_ENGINE_INCLINATION_�`�Ŏw��*/
    int rect_num;               /* ���`�� */

    int beauty;           /* ���珈�� 1:�s�� 0:�s��Ȃ� �����l 0 */
} morpho_EffectFilteringPrettyParam;

typedef struct {
    int num_processed;     /* ����������̌� */
} morpho_EffectFilteringPrettyStatus;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_PRETTY_H */
