#pragma once
// Copyright (c) 2015 Tony Kirke. License MIT  (http://www.opensource.org/licenses/mit-license.php)
// from directory: functions

#include <spuce/filters/fir_coeff.h>
namespace spuce {
//! \file
//! \brief Calculate coefficients for FIR assuming butterworth frequency response
//
//! \brief Calculate coefficients for FIR assuming butterworth frequency response
//
//! \author Tony Kirke,  Copyright(c) 2001
//! \author Tony Kirke
//! \ingroup functions fir
void butterworth_fir(fir_coeff<float_type>& butfir, float_type spb);
}  // namespace spuce