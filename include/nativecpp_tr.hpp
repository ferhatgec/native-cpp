/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

/*
	For Turkish language.
*/

#ifndef NATIVE_CPP_TR_HPP
#define NATIVE_CPP_TR_HPP

#include <iostream>

/* Character */
typedef char karakter;

/* Integer */
typedef int tam;
typedef unsigned isaretsiz;

/* Floating point, decimal */
typedef float ondalik;
typedef double cift;
typedef long double uzuncift;
typedef std::string dizgi;

/* Boolean algebra */
typedef bool boole;

typedef void dondurulemez;

#define sirali (inline)

/* Logical operators */
#define ve (and)
#define ya_da (or)
#define sonlandir (break)
#define devam (continue)

/* Main function */
#define ana (main)

#define const sabit
#define dogru (true)
#define yanlis (false)

#define dondur return
#define eger if
#define degilse else

/* Automatic storage duration. */
#define otomatik auto

#define __DOSYA__ __FILE__
#define __SATIR__ __LINE__
#define __ZAMAN__ __TIME__

#define sinif class

#define genel public
#define ozel private

#define sabit static


#endif /* NATIVECPP_TR_HPP */
