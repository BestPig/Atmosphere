/*
 * Copyright (c) 2018-2020 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#if defined(AMS_BUILD_FOR_AUDITING)
#define MESOSPHERE_BUILD_FOR_AUDITING
#endif

#if defined(MESOSPHERE_BUILD_FOR_AUDITING) || defined(AMS_BUILD_FOR_DEBUGGING)
#define MESOSPHERE_BUILD_FOR_DEBUGGING
#endif

#ifdef  MESOSPHERE_BUILD_FOR_DEBUGGING
#define MESOSPHERE_ENABLE_ASSERTIONS
#define MESOSPHERE_ENABLE_DEBUG_PRINT
#define MESOSPHERE_ENABLE_KERNEL_STACK_USAGE
#endif

//#define MESOSPHERE_BUILD_FOR_TRACING
#define MESOSPHERE_ENABLE_PANIC_REGISTER_DUMP
#define MESOSPHERE_ENABLE_HARDWARE_SINGLE_STEP
