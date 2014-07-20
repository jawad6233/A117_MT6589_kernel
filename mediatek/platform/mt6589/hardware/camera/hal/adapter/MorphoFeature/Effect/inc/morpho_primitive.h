/** @file
 * @brief  ��b�f�[�^�^�̌^��`
 * @author Masaki HIRAGA (garhyla@morphoinc.com)
 * @date   2008-09-06
 */
#ifndef MORPHO_PRIMITIVE_H
#define MORPHO_PRIMITIVE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef signed   char          morpho_Int8;   /**<  8�r�b�g�����t����. */
typedef unsigned char          morpho_Uint8;  /**<  8�r�b�g����������. */
typedef signed   short         morpho_Int16;  /**< 16�r�b�g�����t����. */
typedef unsigned short         morpho_Uint16; /**< 16�r�b�g����������. */
typedef signed   int           morpho_Int32;  /**< 32�r�b�g�����t����. */
typedef unsigned int           morpho_Uint32; /**< 32�r�b�g����������. */

#ifdef __IPHONE__
typedef unsigned short         morpho_Char;
#define MORPHO_LCHAR(S) L ## S
#define MORPHO_LSTR(S) L ## S

#elif defined(__SYMBIAN32__)
typedef unsigned short         morpho_Char;
#define MORPHO_LCHAR(S) L ## S
#define MORPHO_LSTR(S) L ## S

#elif defined(__BREW_SYS__)
typedef char      	       morpho_Char;
#define MORPHO_LCHAR(S) S
#define MORPHO_LSTR(S) S

#elif defined(_WIN32)
typedef char      	       morpho_Char;
#define MORPHO_LCHAR(S) S
#define MORPHO_LSTR(S) S

#else
typedef char      	       morpho_Char;
#define MORPHO_LCHAR(S) S
#define MORPHO_LSTR(S) S
#endif

typedef morpho_Uint32             morpho_Bool;

#define MORPHO_TRUE       (1)
#define MORPHO_FALSE      (0)

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* #ifndef MORPHO_PRIMITIVE_H */
