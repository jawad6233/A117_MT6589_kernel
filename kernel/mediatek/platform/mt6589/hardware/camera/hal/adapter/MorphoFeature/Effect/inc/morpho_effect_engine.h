/**
 * @file    morpho_effect_engine.h
 * @brief   Morpho Effect Engine module.
 *
 * Copyright (C) 2012 Morpho, Inc.
 */
#ifndef MORPHO_EFFECT_ENGINE_H
#define MORPHO_EFFECT_ENGINE_H

#include "morpho_primitive.h"
#include "morpho_api.h"
#include "morpho_error.h"
#include "morpho_image_data.h"
#include "morpho_rect_int.h"

#define MORPHO_EFFECT_ENGINE_VER "Morpho Effect Library Ver.3.1.0.Tinno 2013/04/09" /* Version string */

#ifdef __cplusplus
extern "C" {
#endif

/* Effect Engine */
typedef struct {
    void *p;
} morpho_EffectEngine;

/** ���C�u�����o�[�W�����擾.
 *
 * @return ���C�u�����̃o�[�W����..
 */
MORPHO_API(const char *)
morpho_EffectEngine_getVersion( void );

enum {
    MORPHO_EFFECT_ENGINE_MEMORY_TYPE_NONE, /**< ���͉摜�R�s�[���Ȃ� */
    MORPHO_EFFECT_ENGINE_MEMORY_TYPE_COPY, /**< ���͉摜�����̂܂܃R�s�[���� */
    MORPHO_EFFECT_ENGINE_MEMORY_TYPE_NUM,
};

enum {
/**<   0�� �炪������̏�ԁA�Ⴊ������y���W�������� */
    MORPHO_EFFECT_ENGINE_INCLINATION_0   = 0x00000001,
/**< 90��  �����v���� */
    MORPHO_EFFECT_ENGINE_INCLINATION_90  = 0x00000002,
/**< 180�� �����v���� */
    MORPHO_EFFECT_ENGINE_INCLINATION_180 = 0x00000004,
/**< 270�� �����v���� */
    MORPHO_EFFECT_ENGINE_INCLINATION_270 = 0x00000008,
    MORPHO_EFFECT_ENGINE_INCLINATION_NUM = 4,
};

/** �w��̃G�t�F�N�g�G���W���̎��s�ɕK�v�ȃo�b�t�@�T�C�Y�̎擾.
 *
 * @param[in] effect_name       �G�t�F�N�g������
 * @param[in] format_name       �t�H�[�}�b�g������
 * @param[in] max_input_width   �ő���͉摜��
 * @param[in] max_input_heigh   �ő���͉摜����
 * @param[in] output_width      �o�͉摜��
 * @param[in] output_height     �o�͉摜����
 * @param[in] max_image_num     �o�^�摜��
 * @param[in] memory_type       �������m�ێ��    
 *               MORPHO_EFFECT_ENGINE_MEMORY_TYPE_NONE   :���͉摜�R�s�[���Ȃ�  
 *               MORPHO_EFFECT_ENGINE_MEMORY_TYPE_NORMAL :���͉摜�����̂܂܃R�s�[����
 *
 * @return �K�v�ȃo�b�t�@�T�C�Y(�G���[�̏ꍇ��0��Ԃ�).
 */
MORPHO_API(int)
morpho_EffectEngine_getBufferSize( const char *effect_name, const char *format_name, int max_input_width, int max_input_height, int output_width, int output_height, int max_image_num, int memory_type);

/** �w��̃G�t�F�N�g�G���W���̎��s�ɕK�v�ȃo�b�t�@�T�C�Y�̎擾(getFaceRect���g�p����ꍇ).
 *
 * @param[in] effect_name       �G�t�F�N�g������
 * @param[in] format_name       �t�H�[�}�b�g������
 * @param[in] max_input_width   �ő���͉摜��
 * @param[in] max_input_heigh   �ő���͉摜����
 * @param[in] output_width      �o�͉摜��
 * @param[in] output_height     �o�͉摜����
 * @param[in] max_image_num     �o�^�摜��
 * @param[in] memory_type       �������m�ێ��    
 *               MORPHO_EFFECT_ENGINE_MEMORY_TYPE_NONE   :���͉摜�R�s�[���Ȃ�  
 *               MORPHO_EFFECT_ENGINE_MEMORY_TYPE_NORMAL :���͉摜�����̂܂܃R�s�[����
 *
 * @return �K�v�ȃo�b�t�@�T�C�Y(�G���[�̏ꍇ��0��Ԃ�).
 */
MORPHO_API(int)
morpho_EffectEngine_getBufferSizeWithFace( const char *effect_name, const char *format_name, int max_input_width, int max_input_height, int output_width, int output_height, int max_image_num, int memory_type);


/** �G�t�F�N�g�G���W���̏�����.
 *
 * @param[in] p_effect_engine   �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[in] effect_name       �G�t�F�N�g������
 * @param[in] format_name       �t�H�[�}�b�g������
 * @param[in] buffer            �G�t�F�N�g�G���W���ɓn���o�b�t�@�̃|�C���^.
 * @param[in] buffer_size       �G�t�F�N�g�G���W���ɓn���o�b�t�@�̃T�C�Y.
 * @param[in] max_input_width   �ő���͉摜��.
 * @param[in] max_input_height  �ő���͉摜����.
 * @param[in] output_width      �o�͉摜��
 * @param[in] output_height     �o�͉摜����
 * @param[in] max_image_num     �o�^�摜��.
 * @param[in] memory_type       �������m�ێ��.
 *               MORPHO_EFFECT_ENGINE_MEMORY_TYPE_NONE   :���͉摜�R�s�[���Ȃ�  
 *               MORPHO_EFFECT_ENGINE_MEMORY_TYPE_NORMAL :���͉摜�����̂܂܃R�s�[����
 *
 * @return MORPHO_OK            : ����
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�
 * 
 */
/* Effect Name
    "ES_GREENY",
    "ES_COMIC",
    "ES_MONA",
    "ES_HIGHCONTRAST",
    "ES_BACKLIGHT",
    "ES_NOSTALGY",
    "ES_POPART",
    "ES_PARTCOLOR",
    "ES_POSTER",
    "ES_PRETTY",
    "ES_SMILE",
    "ES_THERMO",
    "ES_MOZA",
    "EM_RELIC",
    "ES_EDO",
    "ES_SEPIAN",
    "ES_INFRARED",
    "ES_LIGHTEN",
    "ES_OVEREXPOSE",
    "EM_TWINKLE",
    "ES_DEFOCUS",
    "ES_MINIATURE",
    "ES_STARBURST",
    "ES_BALLOON",
    "ES_PENCIL",
    "EM_HARRIS",
    "ES_VIVID",
    "ES_FISHEYE1",
    "ES_KALEIDOSCOPE",
    "ES_MIRROR",
    "ES_COLORFILTER",
    "ES_SELECTCOLOR",
    "ES_PINFOCUS",
    "ES_NEGATIVE",
    "ES_SOLARIZE",
    "ES_REDSCALE",
    "ES_NATURE",
    "ES_WARM",
    "ES_BAKE",
    "ES_COUNTRY",
    "ES_WAVE",
    "ES_GLASS",
*/
MORPHO_API(int)
morpho_EffectEngine_initialize( morpho_EffectEngine *p_effect_engine, const char *effect_name, const char *format_name,
                                void *buffer, int buffer_size, int max_input_width, int max_input_height,
                                int output_width, int output_height, int max_image_num, int memory_type);

/** ���͉摜�K�v���̎擾.
 *
 * @param[in]  p_effect_name       �G�t�F�N�g������.
 * @param[out] p_min_image_num     �ŏ����͖���.
 * @param[out] p_max_image_num     �ő���͖���.
 *
 * @return Required memory size if ����. If fails, returns 0.
 */
MORPHO_API(int)
morpho_EffectEngine_getNeedsImageNum( const char *effect_name, int *p_min_image_num, int *p_max_image_num);

/** Level���x�̎擾.
 *
 * @param[in]  p_effect_engine     �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[out] p_level_granu       Level���x.
 *
 * @return MORPHO_OK            : ����
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�
 */
MORPHO_API(int)
morpho_EffectEngine_getLevelGranu( morpho_EffectEngine *p_effect_engine, int *p_level_granu);

/** Progress���x�̎擾.
 *
 * @param[in]  p_effect_engine     �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[out] p_progress_granu    Progress���x.
 *
 * @return MORPHO_OK            : ����
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�
 */
MORPHO_API(int)
morpho_EffectEngine_getProgressGranu( morpho_EffectEngine *p_effect_engine, int *p_progress_granu);

/** �G�t�F�N�g�G���W���̏I��.
 *
 * @param[in] p_effect_engine  �G�t�F�N�g�G���W���ւ̃|�C���^
 *
 * @return 0 if ����. -1 if fails.
 */
MORPHO_API(int)
morpho_EffectEngine_finalize( morpho_EffectEngine *p_effect_engine );


/** ���͉摜(morpho_ImageData�`��)�̓o�^.
 *
 * @param[in]  p_effect_engine �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[in]  p_input_image   ���͉摜.
 * @param[out] p_image_id      �摜ID.
 *
 * @return MORPHO_OK            : ����.
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�.
 *
 */
MORPHO_API(int) 
morpho_EffectEngine_registerImage( morpho_EffectEngine *p_effect_engine, const morpho_ImageData *p_input_image, int *p_image_id );


/** ���͉摜�̉��.
 *
 * @param[in]  p_effect_engine �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[in]  image_id        �摜ID.
 *
 * @return MORPHO_OK            : ����.
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�.
 *
 */
MORPHO_API(int) 
morpho_EffectEngine_releaseImage( morpho_EffectEngine *p_effect_engine, int image_id );

/** �G�t�F�N�g�̊J�n.
 *
 * @param[in]   p_effect_engine �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[in]   image_ids       �摜ID(�z��).
 * @param[in]   image_num       �摜��.
 * @param[out]  p_output_image  �o�͉摜.
 * @param[in]   p_rect          �o�͋�`.
 * @param[in]   level           �G�t�F�N�g�x��(0�`32768).
 *
 * @return MORPHO_OK            : ����.
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�.
 *         MORPHO_ERROR_STATE   : ��Ԉُ�.
 *
 */
MORPHO_API(int) 
morpho_EffectEngine_start( morpho_EffectEngine *p_effect_engine, int *image_ids, int image_num, morpho_ImageData *p_output_image, 
                           const morpho_RectInt *p_rect, int level);


/** �G�t�F�N�g�̎��s�i���������j.
 *
 * @param[in]   p_effect_engine �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[in]   progress        �����i���x(0�`32768). �������d���Ƃ��̏��������p.
 *
 * @return MORPHO_OK            : ��������.
 *         MORPHO_DOPROCESS     : ����������.
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�.
 *         MORPHO_ERROR_STATE   : ��Ԉُ�.
 *
 */
MORPHO_API(int) 
morpho_EffectEngine_run( morpho_EffectEngine *p_effect_engine, int progress );

/** �G�t�F�N�g�̏I��.
 *
 * @param[in]   p_effect_engine �G�t�F�N�g�G���W���ւ̃|�C���^.
 *
 * @return MORPHO_OK            : ����.
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�.
 *         MORPHO_ERROR_STATE   : ��Ԉُ�.
 *
 */
MORPHO_API(int) 
morpho_EffectEngine_stop( morpho_EffectEngine *p_effect_engine);


/** �G�t�F�N�g�p�����[�^�w��.
 *
 * @param[in]   p_effect_engine �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[in]   p_param         �G�t�F�N�g�p�����[�^.
 *
 * @return MORPHO_OK            : ����.
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�.
 *
 */
MORPHO_API(int) 
morpho_EffectEngine_setEffectParam( morpho_EffectEngine *p_effect_engine, const void *p_param);

/** �G�t�F�N�g�p�����[�^�擾.
 *
 * @param[in]   p_effect_engine �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[out]  p_param         �G�t�F�N�g�p�����[�^.
 *
 * @return MORPHO_OK            : ����.
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�.
 *
 */
MORPHO_API(int) 
morpho_EffectEngine_getEffectParam( morpho_EffectEngine *p_effect_engine, void *p_param);

/** �X�e�[�^�X�̎擾.
 *
 * @param[in]   p_effect_engine �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[out]  p_status        �X�e�[�^�X.
 *
 * @return MORPHO_OK            : ����.
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�.
 *
 */MORPHO_API(int) 
morpho_EffectEngine_getStatus( morpho_EffectEngine *p_effect_engine, void *p_status);

    
/*******************  �g���֐��Q **********************/

/** �猟�o��`�̎擾.
 *
 * @param[in]   p_effect_engine �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[in]   image_id        �摜ID.
 * @param[out]  p_rect          �猟�o��`�ւ̔z��.
 * @param[out]  p_angles        ���`�̌����ւ̔z��.
 * @param[out]  p_smile_levels  �Ί烌�x���ւ̔z��.
 * @param[in]   array_num       �猟�o��`�A�Ί烌�x���̔z��.
 * @param[out]  p_face_num      �猟�o��`�y�яΊ烌�x���̐�.
 *
 * @return MORPHO_OK            : ����.
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�.
 *
 * array_num�ɂ́Ap_rect�̔z�񐔂��w�肵�Ă��������B�{API�𔲂����Ƃ��A*p_face_num�Ɏ��ۂɎ擾�ł����猟�o��`��������܂��B
 * ����API�̒��Ŋ猟�o�����s���܂��B
 */
MORPHO_API(int) 
morpho_EffectEngine_getFaceRect( morpho_EffectEngine *p_effect_engine, int image_id, morpho_RectInt *p_rects, int *p_angles, int *p_smile_levels, int array_num,  int* p_face_num );


/*******************  ���[�e�B���e�B�֐��Q **********************/

/** �G�t�F�N�g�摜�̃����V���b�g�`��i���������s�v�j.
 *
 * @param[in]   p_effect_engine �G�t�F�N�g�G���W���ւ̃|�C���^.
 * @param[in]   image_ids       �摜ID(�z��).
 * @param[in]   image_num       �摜��.
 * @param[out]  p_output_image  �o�͉摜.
 * @param[in]   p_rect          �o�͋�`.
 * @param[in]   level           �G�t�F�N�g�x��(0�`32768).
 *
 * @return MORPHO_OK            : ����.
 *         MORPHO_ERROR_PARAM   : �p�����[�^�ُ�.
 *
 * �ȉ��̏��������s���܂��B
 *   {
 *     int r = 0;
 *     r |= start(p_effect_engine, image_ids, image_num, p_output_image, p_rect, level);
 *     r |= run(p_effect_engine, 32768);
 *     r |= stop(p_effect_engine);
 *     return r;
 *   }
 * 
 */
MORPHO_API(int) 
morpho_EffectEngine_drawOneShot( morpho_EffectEngine *p_effect_engine, int *image_ids, int image_num, morpho_ImageData *p_output_image, 
                                 const morpho_RectInt *p_rect, int level);


#ifdef MORPHO_EFFECT_ZTE
MORPHO_API(int)
morpho_EffectEngine_setVideoMode(morpho_EffectEngine *p_effect_engine, int video_mode);

MORPHO_API(int)
morpho_EffectEngine_setSkipFrameNum(morpho_EffectEngine *p_effect_engine , int skip_frame_num);
#endif

#ifdef __cplusplus
}
#endif

#endif /* MORPHO_EFFECT_ENGINE_H */
