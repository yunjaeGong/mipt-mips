/*
 * target.h - input interface for Fetch module
 * @author Pavel Kryukov pavel.kryukov@phystech.edu
 * Copyright 2018 MIPT-MIPS
 */

#ifndef TARGET_H
#define TARGET_H

#include <infra/types.h>

/*
 * Target is an input interface for Fetch module
 * It contains
 *   * address where instruction should be fetched
 *   * sequence_id of fetched instruction for instrumentation purposes
 *   * validity bit
 */
struct Target {
    Addr address = NO_VAL32;
    uint64 sequence_id = NO_VAL64;
    bool valid = false;

    Target() = default;

    Target(Addr a, uint64 id)
        : address(a)
        , sequence_id(id)
        , valid(true)
    { }
};

#endif