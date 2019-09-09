// Copyright 2017, Brown University, Providence, RI.
//
//                         All Rights Reserved
//
// Permission to use, copy, modify, and distribute this software and
// its documentation for any purpose other than its incorporation into a
// commercial product or service is hereby granted without fee, provided
// that the above copyright notice appear in all copies and that both
// that copyright notice and this permission notice appear in supporting
// documentation, and that the name of Brown University not be used in
// advertising or publicity pertaining to distribution of the software
// without specific, written prior permission.
//
// BROWN UNIVERSITY DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
// INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR ANY
// PARTICULAR PURPOSE.  IN NO EVENT SHALL BROWN UNIVERSITY BE LIABLE FOR
// ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
// WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
// OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
//
//
// MGARD: MultiGrid Adaptive Reduction of Data
// Authors: Mark Ainsworth, Ozan Tugluk, Ben Whitney
// Corresponding Author: Ozan Tugluk
//
// version: 0.0.0.2
//
// This file is part of MGARD.
//
// MGARD is distributed under the OSI-approved Apache License, Version 2.0.
// See accompanying file Copyright.txt for details.
//


#ifndef MGARD_API_H
#define MGARD_API_H

#include <chrono>
#include "mgard.h"
#include "mgard_nuni.h"


unsigned char *mgard_compress(int itype_flag, double  *data, int *out_size, int nrow, int ncol, int nfib, double tol); // relative L-infty compression

unsigned char *mgard_compress(int itype_flag, double  *data, int *out_size, int nrow, int ncol, int nfib, double tol, double s = 0); // s-norm compression

unsigned char *mgard_compress(int itype_flag, double  *data, int *out_size, int nrow, int ncol, int nfib, double tol, double (*qoi) (int, int, int, std::vector<double>), double s = 0 ); // s-norm compression with quantity of interest


double  *mgard_decompress(int itype_flag, unsigned char *data, int data_len, int nrow, int ncol, int nfib); // decompress L-infty compressed data

double  *mgard_decompress(int itype_flag, unsigned char *data, int data_len, int nrow, int ncol, int nfib, double s); // decompress s-norm


#endif
