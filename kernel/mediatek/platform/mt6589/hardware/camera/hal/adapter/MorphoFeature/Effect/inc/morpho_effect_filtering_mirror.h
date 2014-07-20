/**
 * @file    morpho_effect_filtering_mirror.h
 * @brief   Morpho Filtering Effect "MIRROR" module.
 *
 * effect_name     ...  "ES_MIRROR"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_MIRROR_H
#define MORPHO_EFFECT_FILTERING_MIRROR_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * EM_MIRROR �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int orientation;  //���� 0: right -> left
                      //      1: down -> up
                      //      2: left -> right
                      //      3: up -> down
} morpho_EffectFilteringMirrorParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_MIRROR_H */
