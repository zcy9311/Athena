/*
 *================================================================================
 * Copyright (c) 2018 Ultra-Aero, All Rights Reserved
 *================================================================================
 * File description:
 * Main header file for Athena
 *
 *================================================================================
 *    Date            Name                    Description of Change
 *    28-Jul-2018     Jiamin Xu               Creation
 *================================================================================
 */
#ifndef ATHENA_HPP
#define ATHENA_HPP

/* c++ headers */
#include <iostream>

/*
 *================================================================================
 *    Athena declarations
 *================================================================================
 */
// Athena return codes
typedef enum
{
    Status_OK    = 0,
    Status_ERROR = 1
} Status_t;

// Used for parallel coding
#define MASTER_NODE 0
#define SINGLE_NODE 1

// Minimum double in Athena system
#define EPS 1.0E-16

// Default defined maximum string size
#define MAX_STRING_SIZE 500

/*****************************************************************************
 * Default filenames used in Athena
 ****************************************************************************/
// Default config file for Athena
#define ATHENA_CONTROL_FILE "athena.ini"
#define ATHENA_LOG_FILE "athena.log"

/*****************************************************************************
 * Definitions for degree/radian
 ****************************************************************************/
#define PI 3.1415926535897932
#define DEG_TO_RAD(deg) deg *PI / 180.0

/*****************************************************************************
 * Output debug info into console screen
 ****************************************************************************/
#define DEBUG(arg...)                                                                                                  \
    {                                                                                                                  \
        printf("[ATHENA DEBUG]:%s:%s:%d: ", __FILE__, __FUNCTION__, __LINE__);                                         \
        std::cout << arg << std::endl;                                                                                 \
        fflush(stdout);                                                                                                \
    }

#endif
