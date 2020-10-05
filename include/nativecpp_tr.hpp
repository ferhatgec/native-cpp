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

#define tur_tanimla typedef

/* Character */
tur_tanimla char karakter;

/* Integer */
tur_tanimla int tam;

tur_tanimla uint8_t  itam8;
tur_tanimla int8_t   tam8;
tur_tanimla uint16_t itam16;
tur_tanimla int16_t  tam16;
tur_tanimla uint32_t itam32;
tur_tanimla int32_t  tam32;
tur_tanimla uint64_t itam64;
tur_tanimla int64_t  tam64;

tur_tanimla unsigned isaretsiz;

/* Floating point, decimal */
tur_tanimla float ondalik;
tur_tanimla double cift;
tur_tanimla long double uzuncift;
tur_tanimla std::string dizgi;

/* Boolean algebra */
tur_tanimla bool boole;

tur_tanimla void dondurulemez;

#define sirali (inline)

/* Logical operators */
#define ve (and)
#define ya_da (or)
#define ve_esit (and_eq)
#define esit (==)
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
#define sanal virtual

#define yenisatir '\n'

#endif /* NATIVECPP_TR_HPP */
