#ifndef _SGL_H_
#define _SGL_H_

#include <MACHINE.H>
#include "SL_DEF.H"

#ifdef SATURN
#include "SEGA_INT.H"
#endif

#ifdef ST_V
#include "SYSCALL.H"
#endif

#define NORMAL(x, y, z) {POStoFIXED(x,y,z)
#define VERTICES(v0, v1, v2, v3) {v0, v1, v2, v3}}
#define C_RGB(r, g, b) (((b)&0x1f)<<10|((g)&0x1f)<<5|((r)&0x1f)|0x8000)

typedef Uint16 TEXDAT;

#define CGADDRESS 0x10000
#define AdjCG(cga, hs, vs, col) ((cga) + (((((hs)*(vs)*4)>>(col))+0x1f) &0x7ffe0))
#define TEXTBL(hs, vs, cga) {hs, vs, (cga)>>3, ((hs)&0x1f8)<<5|(vs)}
#define PICTBL(texno, cmode, pcsrc) {(Uint16)(texno),(Uint16)(cmode),(void *)(pcsrc)}

#define TRANSLATION(x, y, z) {toFIXED(x), toFIXED(y), toFIXED(z)}
#define ROTATION(x, y, z) {DEGtoANG(x), DEGtoANG(y), DEGtoANG(z)}
#define SCALING(x, y, z) {toFIXED(x), toFIXED(y), toFIXED(z)}

#endif // _SGL_H_
