/**
 * @file    morpho_effect_filtering_nostalgy.h
 * @brief   Morpho Filtering Effect "NOSTALGY" module.
 *
 * effect_name     ...  "ES_NOSTALGY"
 * needs_image_num ...  1
 *
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_NOSTALGY_H
#define MORPHO_EFFECT_FILTERING_NOSTALGY_H

#ifdef __cplusplus
extern "C" {
#endif

enum {
    MORPHO_EFFECT_FILTERING_NOSTALGY_CROSSPROCESSING_YELLOW = 0,
    MORPHO_EFFECT_FILTERING_NOSTALGY_CROSSPROCESSING_BLUE,
    MORPHO_EFFECT_FILTERING_NOSTALGY_CROSSPROCESSING_NUM,
};

/**  
 * EM_NOSTALGY �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    int radius;                   /**< �Â����锼�a�i0%-1000%) 
                                       �Ίp���ɑ΂���p�[�Z���e�[�W�j */
    int tone_curve_strength;      /**< �K���}�␳�̋���(0-256) */
    int tone_map_strength;        /**< �F�␳�̋���(0-256) */
    int cross_processing_mode;    /**< �N���X�v���Z�X�̃��[�h*/
} morpho_EffectFilteringNostalgyParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_NOSTALGY_H */
