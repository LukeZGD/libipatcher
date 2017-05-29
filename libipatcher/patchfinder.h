/* --- planetbeing patchfinder --- */

#include <stdint.h>

inline uint32_t bit_range(uint32_t x, int start, int end);
inline uint32_t ror(uint32_t x, int places);
inline int thumb_expand_imm_c(uint16_t imm12);
inline int insn_is_32bit(uint16_t * i);
inline int insn_is_bl(uint16_t * i);
inline uint32_t insn_bl_imm32(uint16_t * i);
inline int insn_is_b_conditional(uint16_t * i);
inline int insn_is_b_unconditional(uint16_t * i);
inline int insn_is_ldr_literal(uint16_t * i);
inline int insn_ldr_literal_rt(uint16_t * i);
inline int insn_ldr_literal_imm(uint16_t * i);
inline int insn_is_ldr_imm(uint16_t * i);
inline int insn_ldr_imm_rt(uint16_t * i);
inline int insn_ldr_imm_rn(uint16_t * i);
inline int insn_ldr_imm_imm(uint16_t * i);
inline int insn_is_ldrb_imm(uint16_t * i);
inline int insn_ldrb_imm_rt(uint16_t * i);
inline int insn_ldrb_imm_rn(uint16_t * i);
inline int insn_ldrb_imm_imm(uint16_t * i);
inline int insn_is_ldr_reg(uint16_t * i);
inline int insn_ldr_reg_rn(uint16_t * i);
inline int insn_ldr_reg_rt(uint16_t * i);
inline int insn_ldr_reg_rm(uint16_t * i);
inline int insn_ldr_reg_lsl(uint16_t * i);
inline int insn_is_add_reg(uint16_t * i);
inline int insn_add_reg_rd(uint16_t * i);
inline int insn_add_reg_rn(uint16_t * i);
inline int insn_add_reg_rm(uint16_t * i);
inline int insn_is_movt(uint16_t * i);
inline int insn_movt_rd(uint16_t * i);
inline int insn_movt_imm(uint16_t * i);
inline int insn_is_mov_imm(uint16_t * i);
inline int insn_mov_imm_rd(uint16_t * i);
inline int insn_mov_imm_imm(uint16_t * i);
inline int insn_is_cmp_imm(uint16_t * i);
inline int insn_cmp_imm_rn(uint16_t * i);
inline int insn_cmp_imm_imm(uint16_t * i);
inline int insn_is_and_imm(uint16_t * i);
inline int insn_and_imm_rn(uint16_t * i);
inline int insn_and_imm_rd(uint16_t * i);
inline int insn_and_imm_imm(uint16_t * i);
inline int insn_is_push(uint16_t * i);
inline int insn_push_registers(uint16_t * i);
inline int insn_is_preamble_push(uint16_t * i);
inline int insn_is_str_imm(uint16_t * i);
inline int insn_str_imm_postindexed(uint16_t * i);
inline int insn_str_imm_wback(uint16_t * i);
inline int insn_str_imm_imm(uint16_t * i);
inline int insn_str_imm_rt(uint16_t * i);
inline int insn_str_imm_rn(uint16_t * i);

uint16_t *find_last_insn_matching(uint32_t region, uint8_t * kdata, size_t ksize, uint16_t * current_instruction, int (*match_func) (uint16_t *));
uint32_t find_pc_rel_value(uint32_t region, uint8_t * kdata, size_t ksize, uint16_t * insn, int reg);
uint16_t *find_literal_ref(uint32_t region, uint8_t * kdata, size_t ksize, uint16_t * insn, uint32_t address);
uint32_t find_pmap_location(uint32_t region, uint8_t * kdata, size_t ksize);
uint32_t find_syscall0(uint32_t region, uint8_t * kdata, size_t ksize);
uint32_t find_larm_init_tramp(uint32_t region, uint8_t * kdata, size_t ksize);