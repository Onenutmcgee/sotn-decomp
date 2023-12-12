#include <common.h>
#include <psxsdk/libgpu.h>
#include <stdarg.h>
#include <stdio.h>
#include <log.h>

int FntOpen(int x, int y, int w, int h, int isbg, int n) { NOT_IMPLEMENTED; }

void FntLoad(int tx, int ty) { NOT_IMPLEMENTED; }

int MyFntPrint(const char* fmt, va_list arg);
int FntPrint(const char* fmt, ...) {
    int n;
    va_list args;
    va_start(args, fmt);
    n = MyFntPrint(fmt, args);
    va_end(args);
    return n;
}

u_long* MyFntFlush(int id);
u_long* FntFlush(int id) { return MyFntFlush(id); }

void SetDumpFnt(int id) { NOT_IMPLEMENTED; }

void SetDispMask(int mask) { NOT_IMPLEMENTED; }

DISPENV* SetDefDispEnv(DISPENV* env, int x, int y, int w, int h) {
    NOT_IMPLEMENTED;
}
DRAWENV* SetDefDrawEnv(DRAWENV* env, int x, int y, int w, int h) {
    NOT_IMPLEMENTED;
}

int ClearImage(RECT* rect, u_char r, u_char g, u_char b) { NOT_IMPLEMENTED; }
int LoadImage(RECT* rect, u_long* p) { NOT_IMPLEMENTED; }
int StoreImage(RECT* rect, u_long* p) { NOT_IMPLEMENTED; }
int MoveImage(RECT* rect, int x, int y) { NOT_IMPLEMENTED; }

int MyDrawSync(int mode);
int DrawSync(int mode) { return MyDrawSync(mode); }

DRAWENV* PutDrawEnv(DRAWENV* env) { NOT_IMPLEMENTED; }

DISPENV* PutDispEnv(DISPENV* env) { NOT_IMPLEMENTED; }

void DrawOTag(u_long* p) { NOT_IMPLEMENTED; }

void AddPrim(void* ot, void* p) { NOT_IMPLEMENTED; }

void SetShadeTex(void* p, int tge) { NOT_IMPLEMENTED; }

void SetSemiTrans(void* p, int abe) { NOT_IMPLEMENTED; }

void SetDrawMode(DR_MODE* p, int dfe, int dtd, int tpage, RECT* tw) {
    NOT_IMPLEMENTED;
}

int MyResetGraph(int mode);
int ResetGraph(int mode) { return MyResetGraph(mode); }

int SetGraphDebug(int level) { NOT_IMPLEMENTED; }

u_long* ClearOTag(u_long* ot, int n) { NOT_IMPLEMENTED; }

u_short LoadClut2(u_long* clut, int x, int y) { NOT_IMPLEMENTED; }

u_short LoadTPage(u_long* pix, int tp, int abr, int x, int y, int w, int h) {
    NOT_IMPLEMENTED;
}