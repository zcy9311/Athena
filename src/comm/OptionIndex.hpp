/*
 *================================================================================
 * Copyright (c) 2018 Ultra-Aero, All Rights Reserved
 *================================================================================
 * File description:
 * Athena option indices
 *
 *================================================================================
 *    Date            Name                    Description of Change
 *    28-Jul-2018     Jiamin Xu               Creation
 *================================================================================
 */
#ifndef ATHENA_OPTION_INDEX_HPP
#define ATHENA_OPTION_INDEX_HPP

/* Athena headers */

/* c++ headers */
#include <string>

using namespace std;

#define ATHENA_OPTION_INDEX_START 1000

// Athena general options
#define ATHENA_OPTION_INDEX_GENERAL_START 1001

#define ATHENA_OPTION_INDEX_MESH_FILE ATHENA_OPTION_INDEX_GENERAL_START + 1
#define ATHENA_OPTION_INDEX_BOUNDARY_INFO_FILE ATHENA_OPTION_INDEX_GENERAL_START + 2

#define ATHENA_OPTION_INDEX_GENERAL_END ATHENA_OPTION_INDEX_GENERAL_START + 999

// Computational condition
#define ATHENA_OPTION_INDEX_COMPUTATIONAL_CONDITION_START ATHENA_OPTION_INDEX_GENERAL_END + 1

#define ATHENA_OPTION_INDEX_ATTACK_ANGLE ATHENA_OPTION_INDEX_COMPUTATIONAL_CONDITION_START + 1
#define ATHENA_OPTION_INDEX_SLIDE_ANGLE ATHENA_OPTION_INDEX_COMPUTATIONAL_CONDITION_START + 2
#define ATHENA_OPTION_INDEX_REYNOLDS_NUMBER ATHENA_OPTION_INDEX_COMPUTATIONAL_CONDITION_START + 3
#define ATHENA_OPTION_INDEX_MACH_NUMBER ATHENA_OPTION_INDEX_COMPUTATIONAL_CONDITION_START + 4
#define ATHENA_OPTION_INDEX_TEMPERATURE ATHENA_OPTION_INDEX_COMPUTATIONAL_CONDITION_START + 5

#define ATHENA_OPTION_INDEX_COMPUTATIONAL_CONDITION_END ATHENA_OPTION_INDEX_COMPUTATIONAL_CONDITION_START + 999

#define ATHENA_OPTION_INDEX_NUMERICAL_METHOD_START ATHENA_OPTION_INDEX_COMPUTATIONAL_CONDITION_END + 1

#define ATHENA_OPTION_INDEX_INVISCID_FLUX ATHENA_OPTION_INDEX_NUMERICAL_METHOD_START + 1
#define ATHENA_OPTION_INDEX_INVISCID_SCHEME ATHENA_OPTION_INDEX_NUMERICAL_METHOD_START + 2
#define ATHENA_OPTION_INDEX_TURBULENCE_MODEL ATHENA_OPTION_INDEX_NUMERICAL_METHOD_START + 3

#define ATHENA_OPTION_INDEX_NUMERICAL_METHOD_END ATHENA_OPTION_INDEX_NUMERICAL_METHOD_START + 999

#define ATHENA_OPTION_INDEX_END 99999

#endif