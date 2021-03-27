// ==========================================================================
// Dedmonwakeen's Raid DPS/TPS Simulator.
// Send questions to natehieter@gmail.com
// ==========================================================================

#pragma once

#include "config.hpp"
#include "sc_actor_pair.hpp"
#include "util/generic.hpp"

struct buff_t;
struct player_t;

struct actor_target_data_t : public actor_pair_t, private noncopyable
{
  struct atd_debuff_t
  {
    buff_t* mark_of_doom;
    buff_t* poisoned_dreams;
    buff_t* fel_burn;
    buff_t* flame_wreath;
    buff_t* thunder_ritual;
    buff_t* brutal_haymaker;
    buff_t* taint_of_the_sea;
    buff_t* solar_collapse;
    buff_t* volatile_magic;
    buff_t* maddening_whispers;
    buff_t* shadow_blades;
  } debuff;

  struct atd_dot_t
  {
  } dot;

  actor_target_data_t( player_t* target, player_t* source );
};