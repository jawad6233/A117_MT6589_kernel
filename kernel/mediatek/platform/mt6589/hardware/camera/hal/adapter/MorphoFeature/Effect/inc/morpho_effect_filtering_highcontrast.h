/**
 * @file    morpho_effect_filtering_highcontrast.h
 * @brief   Morpho Filtering Effect "HIGHCONTRAST" module.
 *
 * effect_name     ...  "ES_HIGHCONTRAST"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_HIGHCONTRAST_H
#define MORPHO_EFFECT_FILTERING_HIGHCONTRAST_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * ES_HIGHCONTRAST �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int strength;   /* HICONTRAST���x */
    int darkedge;   /* ���͂��Â����邩�ǂ��� */
} morpho_EffectFilteringHighcontrastParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_HIGHCONTRAST_H */
