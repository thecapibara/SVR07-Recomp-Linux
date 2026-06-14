#include "generated/svr07_config.h"
#include "generated/svr07_init.h"
#include "svr07_app.h"
#include <rex/ppc/context.h>
#include <rex/ppc/memory.h>
#include <rex/ppc/function.h>
#include <rex/chrono/clock.h>

extern "C" {

void __imp__sub_825C2DE8(PPCContext& ctx, uint8_t* base);
void __imp__sub_825C2E50(PPCContext& ctx, uint8_t* base);
void __imp__sub_825C2EB8(PPCContext& ctx, uint8_t* base);
void __imp__sub_825C2F28(PPCContext& ctx, uint8_t* base);
void __imp__sub_825C2F98(PPCContext& ctx, uint8_t* base);
void __imp__sub_825C2FF0(PPCContext& ctx, uint8_t* base);
void __imp__sub_825C3048(PPCContext& ctx, uint8_t* base);
void __imp__sub_825C30A0(PPCContext& ctx, uint8_t* base);
void __imp__sub_825C30F8(PPCContext& ctx, uint8_t* base);
void __imp__sub_825CBC60(PPCContext& ctx, uint8_t* base);
void __imp__sub_825F1E28(PPCContext& ctx, uint8_t* base);
void __imp__sub_825F1F18(PPCContext& ctx, uint8_t* base);

void sub_821CD248(PPCContext& ctx, uint8_t* base) {
  uint32_t thread_ptr = PPC_LOAD_U32(ctx.r13.u32 + 256);
  if (thread_ptr) {
    uint32_t uptime = rex::chrono::Clock::QueryGuestUptimeMillis();
    PPC_STORE_U32(thread_ptr + 88, uptime);
    ctx.r3.u64 = PPC_LOAD_U32(thread_ptr + 332);
  } else {
    ctx.r3.u64 = 0;
  }
}

void sub_821DE8B0(PPCContext& ctx, uint8_t* base) {
  PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
  PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
  uint32_t thread_ptr = PPC_LOAD_U32(ctx.r13.u32 + 256);
  uint32_t uptime = rex::chrono::Clock::QueryGuestUptimeMillis();
  if (thread_ptr) {
    PPC_STORE_U32(thread_ptr + 88, uptime);
  }
  uint32_t r10_val = PPC_LOAD_U32(ctx.r4.u32 + 10768);
  uint32_t r10_deref = PPC_LOAD_U32(r10_val + 0);
  PPC_STORE_U32(ctx.r3.u32 + 12, uptime);
  PPC_STORE_U32(ctx.r3.u32 + 8, r10_deref);
  PPC_STORE_U32(ctx.r3.u32 + 16, uptime);
  ctx.r11.u64 = PPC_QUERY_TIMEBASE();
  PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
}

void sub_825C2DE8(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0) return;
  __imp__sub_825C2DE8(ctx, base);
}
void sub_825C2E50(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0) return;
  __imp__sub_825C2E50(ctx, base);
}
void sub_825C2EB8(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0) return;
  __imp__sub_825C2EB8(ctx, base);
}
void sub_825C2F28(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0) return;
  __imp__sub_825C2F28(ctx, base);
}
void sub_825C2F98(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0) return;
  __imp__sub_825C2F98(ctx, base);
}
void sub_825C2FF0(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0) return;
  __imp__sub_825C2FF0(ctx, base);
}
void sub_825C3048(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0) return;
  __imp__sub_825C3048(ctx, base);
}
void sub_825C30A0(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0) return;
  __imp__sub_825C30A0(ctx, base);
}
void sub_825C30F8(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0) return;
  __imp__sub_825C30F8(ctx, base);
}
void sub_825CBC60(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0) return;
  __imp__sub_825CBC60(ctx, base);
}
void sub_825F1E28(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0 || ctx.r6.u64 == 0) {
    ctx.r3.u64 = 0x8A37000A;
    return;
  }
  __imp__sub_825F1E28(ctx, base);
}
void sub_825F1F18(PPCContext& ctx, uint8_t* base) {
  if (ctx.r3.u64 == 0 || ctx.r5.u64 == 0) {
    ctx.r3.u64 = 0x8A37000A;
    return;
  }
  __imp__sub_825F1F18(ctx, base);
}

}

REX_DEFINE_APP(svr07, Svr07App::Create)