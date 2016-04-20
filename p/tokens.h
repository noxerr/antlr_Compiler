#ifndef tokens_h
#define tokens_h
/* tokens.h -- List of labelled tokens and stuff
 *
 * Generated from: bpmn.g
 *
 * Terence Parr, Will Cohen, and Hank Dietz: 1989-2001
 * Purdue University Electrical Engineering
 * ANTLR Version 1.33MR33
 */
#define zzEOF_TOKEN 1
#define STARTP 2
#define ENDP 3
#define CONN 4
#define FILECONN 5
#define CRIT 6
#define DIFFER 7
#define CORRECTF 8
#define FILEREAD 9
#define FILEWRITE 10
#define OPENP 11
#define CLOSEP 12
#define QUERIES 13
#define GPAR 14
#define GOR 15
#define GXOR 16
#define SEQ 17
#define ID 18
#define SPACE 19

#ifdef __USE_PROTOS
void bpmn(AST**_root);
#else
extern void bpmn();
#endif

#ifdef __USE_PROTOS
void process(AST**_root);
#else
extern void process();
#endif

#ifdef __USE_PROTOS
void rol(AST**_root);
#else
extern void rol();
#endif

#ifdef __USE_PROTOS
void conexio(AST**_root);
#else
extern void conexio();
#endif

#ifdef __USE_PROTOS
void activitat(AST**_root);
#else
extern void activitat();
#endif

#ifdef __USE_PROTOS
void expr(AST**_root);
#else
extern void expr();
#endif

#ifdef __USE_PROTOS
void expr2(AST**_root);
#else
extern void expr2();
#endif

#ifdef __USE_PROTOS
void expr3(AST**_root);
#else
extern void expr3();
#endif

#ifdef __USE_PROTOS
void expr4(AST**_root);
#else
extern void expr4();
#endif

#ifdef __USE_PROTOS
void term(AST**_root);
#else
extern void term();
#endif

#ifdef __USE_PROTOS
void queries(AST**_root);
#else
extern void queries();
#endif

#endif
extern SetWordType zzerr1[];
extern SetWordType setwd1[];
extern SetWordType setwd2[];
