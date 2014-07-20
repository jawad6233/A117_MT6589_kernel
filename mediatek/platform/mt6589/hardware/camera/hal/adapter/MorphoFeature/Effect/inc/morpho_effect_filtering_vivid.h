/**
 * @file    morpho_effect_filtering_vivid.h
 * @brief   Morpho Filtering Effect "VIVID" module.
 *
 * effect_name     ...  "ES_VIVID"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_VIVID_H
#define MORPHO_EFFECT_FILTERING_VIVID_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * EM_VIVID �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int strength;         /**< �F�������x(0-512) default:192 */
} morpho_EffectFilteringVividParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_VIVID_H */
