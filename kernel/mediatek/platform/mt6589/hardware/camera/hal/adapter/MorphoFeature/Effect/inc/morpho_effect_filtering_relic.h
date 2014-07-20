/**
 * @file    morpho_effect_filtering_relic.h
 * @brief   Morpho Filtering Effect "Relic" module.
 *
 * effect_name     ...  "EM_RELIC"
 * needs_image_num ...  1
 *
 * @author Ola Nordqvist (n-ola@morphoinc.com)
 * Copyright (C) 2009 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_FILTERING_RELIC_H
#define MORPHO_EFFECT_FILTERING_RELIC_H

#ifdef __cplusplus
extern "C" {
#endif

/**  
 * EM_RELIC �G�t�F�N�g�̃p�����[�^.
 * morpho_EffectEngine_setEffectParam() �Őݒ肵�Ă��������B
 */
typedef struct {
    unsigned char amountBloom;				/* 0�`255   �u�f�t�H���g�F�O�v*/

    unsigned char useFrame;					/* �g/����	�u�f�t�H���g�F�g�v*/
    unsigned char useGaussian;				/* �g/����	�u�f�t�H���g�F�g�v�i����: �{���Ɏg��Ȃ������� */
    
	unsigned char useColorShift;			/* �g/����	�u�f�t�H���g�F�g�v*/

	unsigned char amountCornerBurn;			/* 0�`255	�u�f�t�H���g�F�Q�Q�O�v*/

	unsigned char amountVerticalStripes;	/* 0�`255	�u�f�t�H���g�F�T�O�v*/

	unsigned char amountFrameDust;			/* 0�`255	�u�f�t�H���g�F�P�R�v*/
    
} morpho_EffectFilteringRelicParam;

#ifdef __cplusplus
} /* extern "C" { */
#endif

#endif /* #ifndef MORPHO_EFFECT_FILTERING_RELIC_H */
