/*
 * Library for a common catode 8x8 led matrix
 * 
 * Author: Marco Antonio Carvajal Muñiz
 *
 * Created on 16 de junio de 2021, 09:46 PM
 */

//if time = 100 then duration = 1s

#define	XC_HEADER_TEMPLATE_H
#include <xc.h> 
#define columns LATB
#define rows    LATD

unsigned short int i;
void write_A (unsigned short int time);
void write_B (unsigned short int time);
void write_C (unsigned short int time);
void write_D (unsigned short int time);
void write_E (unsigned short int time);
void write_F (unsigned short int time);
void write_G (unsigned short int time);
void write_H (unsigned short int time);
void write_I (unsigned short int time);
void write_J (unsigned short int time);
void write_K (unsigned short int time);
void write_L (unsigned short int time);
void write_M (unsigned short int time);
void write_N (unsigned short int time);
void write_eneC (unsigned short int time);
void write_O (unsigned short int time);
void write_P (unsigned short int time);
void write_Q (unsigned short int time);
void write_R (unsigned short int time);
void write_S(unsigned short int time);
void write_T(unsigned short int time);
void write_U(unsigned short int time);
void write_V(unsigned short int time);
void write_W(unsigned short int time);
void write_X(unsigned short int time);
void write_Y(unsigned short int time);
void write_Z(unsigned short int time);
void write_0(unsigned short int time);
void write_1(unsigned short int time);
void write_2(unsigned short int time);
void write_3(unsigned short int time);
void write_4(unsigned short int time);
void write_5(unsigned short int time);
void write_6(unsigned short int time);
void write_7(unsigned short int time);
void write_8(unsigned short int time);
void write_9(unsigned short int time);
void write_a(unsigned short int time);
void write_b(unsigned short int time);
void write_c(unsigned short int time);
void write_d(unsigned short int time);
void write_e(unsigned short int time);
void write_f(unsigned short int time);
void write_g(unsigned short int time);
void write_h(unsigned short int time);
void write_i(unsigned short int time);
void write_j(unsigned short int time);
void write_k(unsigned short int time);
void write_l(unsigned short int time);
void write_m(unsigned short int time);
void write_n(unsigned short int time);
void write_eneM(unsigned short int time);
void write_o(unsigned short int time);
void write_p(unsigned short int time);
void write_q(unsigned short int time);
void write_r(unsigned short int time);
void write_s(unsigned short int time);
void write_t(unsigned short int time);
void write_u(unsigned short int time);
void write_v(unsigned short int time);
void write_w(unsigned short int time);
void write_x(unsigned short int time);
void write_y(unsigned short int time);
void write_z(unsigned short int time);
void write_qmarkup(unsigned short int time);
void write_qmarkud(unsigned short int time);
void write_prts(unsigned short int time);
void write_prtleft(unsigned short int time);
void write_prtright(unsigned short int time);
void write_stkman(unsigned short int time);
void write_smile(unsigned short int time);
void write_sad(unsigned short int time);
void write_fill(unsigned short int time);
void write_emarkd(unsigned short int time);
void write_emarku(unsigned short int time);
void write_point(unsigned short int time);
void write_prte(unsigned short int time);
void write_numeral(unsigned short int time);
void write_mosaic(unsigned short int time);
void write_arrowu(unsigned short int time);
void write_arrowr(unsigned short int time);
void write_arrowd(unsigned short int time);
void write_arrowl(unsigned short int time);

void write_A (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 3;
        __delay_ms(1);
        columns = 4;
        rows = 237;
        __delay_ms(1);
        columns = 8;
        rows = 238;
        __delay_ms(1);
        columns = 16;
        rows = 238;
        __delay_ms(1);
        columns = 32;
        rows = 237;
        __delay_ms(1);
        columns = 64;
        rows = 3;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_B (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 1;
        __delay_ms(1);
        columns = 4;
        rows = 109;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 109;
        __delay_ms(1);
        columns = 32;
        rows = 109;
        __delay_ms(1);
        columns = 64;
        rows = 147;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_C (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 129;
        __delay_ms(1);
        columns = 4;
        rows = 126;
        __delay_ms(1);
        columns = 8;
        rows = 126;
        __delay_ms(1);
        columns = 16;
        rows = 126;
        __delay_ms(1);
        columns = 32;
        rows = 126;
        __delay_ms(1);
        columns = 64;
        rows = 189;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_D (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 126;
        __delay_ms(1);
        columns = 8;
        rows = 126;
        __delay_ms(1);
        columns = 16;
        rows = 126;
        __delay_ms(1);
        columns = 32;
        rows = 126;
        __delay_ms(1);
        columns = 64;
        rows = 129;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_E (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 1;
        __delay_ms(1);
        columns = 4;
        rows = 109;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 109;
        __delay_ms(1);
        columns = 32;
        rows = 125;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_F (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 246;
        __delay_ms(1);
        columns = 8;
        rows = 246;
        __delay_ms(1);
        columns = 16;
        rows = 246;
        __delay_ms(1);
        columns = 32;
        rows = 246;
        __delay_ms(1);
        columns = 64;
        rows = 254;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_G (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 126;
        __delay_ms(1);
        columns = 8;
        rows = 126;
        __delay_ms(1);
        columns = 16;
        rows = 110;
        __delay_ms(1);
        columns = 32;
        rows = 110;
        __delay_ms(1);
        columns = 64;
        rows = 14;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_H (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 1;
        __delay_ms(1);
        columns = 4;
        rows = 239;
        __delay_ms(1);
        columns = 8;
        rows = 239;
        __delay_ms(1);
        columns = 16;
        rows = 239;
        __delay_ms(1);
        columns = 32;
        rows = 239;
        __delay_ms(1);
        columns = 64;
        rows = 1;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_I (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 126;
        __delay_ms(1);
        columns = 4;
        rows = 126;
        __delay_ms(1);
        columns = 8;
        rows = 0;
        __delay_ms(1);
        columns = 16;
        rows = 0;
        __delay_ms(1);
        columns = 32;
        rows = 126;
        __delay_ms(1);
        columns = 64;
        rows = 126;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_J (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 191;
        __delay_ms(1);
        columns = 4;
        rows = 126;
        __delay_ms(1);
        columns = 8;
        rows = 126;
        __delay_ms(1);
        columns = 16;
        rows = 128;
        __delay_ms(1);
        columns = 32;
        rows = 254;
        __delay_ms(1);
        columns = 64;
        rows = 254;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_K (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 1;
        __delay_ms(1);
        columns = 4;
        rows = 239;
        __delay_ms(1);
        columns = 8;
        rows = 215;
        __delay_ms(1);
        columns = 16;
        rows = 187;
        __delay_ms(1);
        columns = 32;
        rows = 125;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_L (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 1;
        __delay_ms(1);
        columns = 4;
        rows = 127;
        __delay_ms(1);
        columns = 8;
        rows = 127;
        __delay_ms(1);
        columns = 16;
        rows = 127;
        __delay_ms(1);
        columns = 32;
        rows = 127;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_M (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 1;
        __delay_ms(1);
        columns = 4;
        rows = 251;
        __delay_ms(1);
        columns = 8;
        rows = 247;
        __delay_ms(1);
        columns = 16;
        rows = 239;
        __delay_ms(1);
        columns = 32;
        rows = 247;
        __delay_ms(1);
        columns = 64;
        rows = 251;
        __delay_ms(1);
        columns = 128;
        rows = 1;
        __delay_ms(1);
    }
}

void write_N (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 1;
        __delay_ms(1);
        columns = 4;
        rows = 251;
        __delay_ms(1);
        columns = 8;
        rows = 247;
        __delay_ms(1);
        columns = 16;
        rows = 239;
        __delay_ms(1);
        columns = 32;
        rows = 223;
        __delay_ms(1);
        columns = 64;
        rows = 191;
        __delay_ms(1);
        columns = 128;
        rows = 1;
        __delay_ms(1);
    }
}

void write_eneC (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 3;
        __delay_ms(1);
        columns = 4;
        rows = 246;
        __delay_ms(1);
        columns = 8;
        rows = 238;
        __delay_ms(1);
        columns = 16;
        rows = 222;
        __delay_ms(1);
        columns = 32;
        rows = 190;
        __delay_ms(1);
        columns = 64;
        rows = 3;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_O (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 129;
        __delay_ms(1);
        columns = 4;
        rows = 126;
        __delay_ms(1);
        columns = 8;
        rows = 126;
        __delay_ms(1);
        columns = 16;
        rows = 126;
        __delay_ms(1);
        columns = 32;
        rows = 126;
        __delay_ms(1);
        columns = 64;
        rows = 129;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_P (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 1;
        __delay_ms(1);
        columns = 4;
        rows = 238;
        __delay_ms(1);
        columns = 8;
        rows = 238;
        __delay_ms(1);
        columns = 16;
        rows = 238;
        __delay_ms(1);
        columns = 32;
        rows = 238;
        __delay_ms(1);
        columns = 64;
        rows = 241;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_Q (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 131;
        __delay_ms(1);
        columns = 4;
        rows = 125;
        __delay_ms(1);
        columns = 8;
        rows = 125;
        __delay_ms(1);
        columns = 16;
        rows = 93;
        __delay_ms(1);
        columns = 32;
        rows = 189;
        __delay_ms(1);
        columns = 64;
        rows = 67;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_R (unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 1;
        __delay_ms(1);
        columns = 4;
        rows = 238;
        __delay_ms(1);
        columns = 8;
        rows = 238;
        __delay_ms(1);
        columns = 16;
        rows = 206;
        __delay_ms(1);
        columns = 32;
        rows = 174;
        __delay_ms(1);
        columns = 64;
        rows = 113;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_S(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 115;
        __delay_ms(1);
        columns = 4;
        rows = 109;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 109;
        __delay_ms(1);
        columns = 32;
        rows = 157;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_T(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 1;
        rows = 253;
        __delay_ms(1);
        columns = 2;
        rows = 253;
        __delay_ms(1);
        columns = 4;
        rows = 253;
        __delay_ms(1);
        columns = 8;
        rows = 1;
        __delay_ms(1);
        columns = 16;
        rows = 253;
        __delay_ms(1);
        columns = 32;
        rows = 253;
        __delay_ms(1);
        columns = 64;
        rows = 253;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_U(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 129;
        __delay_ms(1);
        columns = 4;
        rows = 127;
        __delay_ms(1);
        columns = 8;
        rows = 127;
        __delay_ms(1);
        columns = 16;
        rows = 127;
        __delay_ms(1);
        columns = 32;
        rows = 127;
        __delay_ms(1);
        columns = 64;
        rows = 129;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_V(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 193;
        __delay_ms(1);
        columns = 4;
        rows = 191;
        __delay_ms(1);
        columns = 8;
        rows = 127;
        __delay_ms(1);
        columns = 16;
        rows = 127;
        __delay_ms(1);
        columns = 32;
        rows = 191;
        __delay_ms(1);
        columns = 64;
        rows = 193;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_W(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 1;
        rows = 193;
        __delay_ms(1);
        columns = 2;
        rows = 191;
        __delay_ms(1);
        columns = 4;
        rows = 127;
        __delay_ms(1);
        columns = 8;
        rows = 143;
        __delay_ms(1);
        columns = 16;
        rows = 127;
        __delay_ms(1);
        columns = 32;
        rows = 191;
        __delay_ms(1);
        columns = 64;
        rows = 193;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_X(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 57;
        __delay_ms(1);
        columns = 4;
        rows = 215;
        __delay_ms(1);
        columns = 8;
        rows = 239;
        __delay_ms(1);
        columns = 16;
        rows = 215;
        __delay_ms(1);
        columns = 32;
        rows = 57;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_Y(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 241;
        __delay_ms(1);
        columns = 4;
        rows = 239;
        __delay_ms(1);
        columns = 8;
        rows = 15;
        __delay_ms(1);
        columns = 16;
        rows = 239;
        __delay_ms(1);
        columns = 32;
        rows = 241;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_Z(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 61;
        __delay_ms(1);
        columns = 4;
        rows = 93;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 117;
        __delay_ms(1);
        columns = 32;
        rows = 121;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_0(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 126;
        __delay_ms(1);
        columns = 8;
        rows = 126;
        __delay_ms(1);
        columns = 16;
        rows = 126;
        __delay_ms(1);
        columns = 32;
        rows = 126;
        __delay_ms(1);
        columns = 64;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_1(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 123;
        __delay_ms(1);
        columns = 8;
        rows = 125;
        __delay_ms(1);
        columns = 16;
        rows = 0;
        __delay_ms(1);
        columns = 32;
        rows = 127;
        __delay_ms(1);
        columns = 64;
        rows = 127;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_2(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 121;
        __delay_ms(1);
        columns = 4;
        rows = 62;
        __delay_ms(1);
        columns = 8;
        rows = 94;
        __delay_ms(1);
        columns = 16;
        rows = 110;
        __delay_ms(1);
        columns = 32;
        rows = 118;
        __delay_ms(1);
        columns = 64;
        rows = 121;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_3(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 187;
        __delay_ms(1);
        columns = 4;
        rows = 125;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 109;
        __delay_ms(1);
        columns = 32;
        rows = 147;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_4(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 207;
        __delay_ms(1);
        columns = 4;
        rows = 215;
        __delay_ms(1);
        columns = 8;
        rows = 219;
        __delay_ms(1);
        columns = 16;
        rows = 221;
        __delay_ms(1);
        columns = 32;
        rows = 1;
        __delay_ms(1);
        columns = 64;
        rows = 223;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_5(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 97;
        __delay_ms(1);
        columns = 4;
        rows = 109;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 109;
        __delay_ms(1);
        columns = 32;
        rows = 109;
        __delay_ms(1);
        columns = 64;
        rows = 13;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_6(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 131;
        __delay_ms(1);
        columns = 4;
        rows = 109;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 109;
        __delay_ms(1);
        columns = 32;
        rows = 109;
        __delay_ms(1);
        columns = 64;
        rows = 155;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_7(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 253;
        __delay_ms(1);
        columns = 8;
        rows = 253;
        __delay_ms(1);
        columns = 16;
        rows = 29;
        __delay_ms(1);
        columns = 32;
        rows = 237;
        __delay_ms(1);
        columns = 64;
        rows = 241;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_8(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 131;
        __delay_ms(1);
        columns = 4;
        rows = 109;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 109;
        __delay_ms(1);
        columns = 32;
        rows = 109;
        __delay_ms(1);
        columns = 64;
        rows = 131;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_9(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 115;
        __delay_ms(1);
        columns = 4;
        rows = 109;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 109;
        __delay_ms(1);
        columns = 32;
        rows = 109;
        __delay_ms(1);
        columns = 64;
        rows = 131;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_a(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 155;
        __delay_ms(1);
        columns = 4;
        rows = 109;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 109;
        __delay_ms(1);
        columns = 32;
        rows = 109;
        __delay_ms(1);
        columns = 64;
        rows = 131;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_b(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 129;
        __delay_ms(1);
        columns = 4;
        rows = 111;
        __delay_ms(1);
        columns = 8;
        rows = 111;
        __delay_ms(1);
        columns = 16;
        rows = 111;
        __delay_ms(1);
        columns = 32;
        rows = 111;
        __delay_ms(1);
        columns = 64;
        rows = 159;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_c(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 135;
        __delay_ms(1);
        columns = 4;
        rows = 123;
        __delay_ms(1);
        columns = 8;
        rows = 123;
        __delay_ms(1);
        columns = 16;
        rows = 123;
        __delay_ms(1);
        columns = 32;
        rows = 123;
        __delay_ms(1);
        columns = 64;
        rows = 123;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_d(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 159;
        __delay_ms(1);
        columns = 4;
        rows = 111;
        __delay_ms(1);
        columns = 8;
        rows = 111;
        __delay_ms(1);
        columns = 16;
        rows = 111;
        __delay_ms(1);
        columns = 32;
        rows = 111;
        __delay_ms(1);
        columns = 64;
        rows = 129;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_e(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 135;
        __delay_ms(1);
        columns = 4;
        rows = 123;
        __delay_ms(1);
        columns = 8;
        rows = 91;
        __delay_ms(1);
        columns = 16;
        rows = 91;
        __delay_ms(1);
        columns = 32;
        rows = 91;
        __delay_ms(1);
        columns = 64;
        rows = 103;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_f(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 223;
        __delay_ms(1);
        columns = 4;
        rows = 3;
        __delay_ms(1);
        columns = 8;
        rows = 221;
        __delay_ms(1);
        columns = 16;
        rows = 253;
        __delay_ms(1);
        columns = 32;
        rows = 243;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_g(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 179;
        __delay_ms(1);
        columns = 4;
        rows = 109;
        __delay_ms(1);
        columns = 8;
        rows = 109;
        __delay_ms(1);
        columns = 16;
        rows = 109;
        __delay_ms(1);
        columns = 32;
        rows = 109;
        __delay_ms(1);
        columns = 64;
        rows = 131;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_h(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 1;
        __delay_ms(1);
        columns = 4;
        rows = 239;
        __delay_ms(1);
        columns = 8;
        rows = 239;
        __delay_ms(1);
        columns = 16;
        rows = 31;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_i(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 8;
        rows = 9;
        __delay_ms(1);
        columns = 16;
        rows = 9;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_j(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 191;
        __delay_ms(1);
        columns = 4;
        rows = 127;
        __delay_ms(1);
        columns = 8;
        rows = 139;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_k(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 7;
        __delay_ms(1);
        columns = 8;
        rows = 223;
        __delay_ms(1);
        columns = 16;
        rows = 175;
        __delay_ms(1);
        columns = 32;
        rows = 119;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_l(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 8;
        rows = 1;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_m(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 7;
        __delay_ms(1);
        columns = 4;
        rows = 239;
        __delay_ms(1);
        columns = 8;
        rows = 239;
        __delay_ms(1);
        columns = 16;
        rows = 31;
        __delay_ms(1);
        columns = 32;
        rows = 239;
        __delay_ms(1);
        columns = 64;
        rows = 239;
        __delay_ms(1);
        columns = 128;
        rows = 31;
        __delay_ms(1);
    }
}

void write_n(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 7;
        __delay_ms(1);
        columns = 4;
        rows = 239;
        __delay_ms(1);
        columns = 8;
        rows = 239;
        __delay_ms(1);
        columns = 16;
        rows = 239;
        __delay_ms(1);
        columns = 32;
        rows = 31;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_eneM(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 7;
        __delay_ms(1);
        columns = 4;
        rows = 237;
        __delay_ms(1);
        columns = 8;
        rows = 237;
        __delay_ms(1);
        columns = 16;
        rows = 237;
        __delay_ms(1);
        columns = 32;
        rows = 31;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_o(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 143;
        __delay_ms(1);
        columns = 8;
        rows = 119;
        __delay_ms(1);
        columns = 16;
        rows = 119;
        __delay_ms(1);
        columns = 32;
        rows = 143;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_p(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 7;
        __delay_ms(1);
        columns = 8;
        rows = 219;
        __delay_ms(1);
        columns = 16;
        rows = 219;
        __delay_ms(1);
        columns = 32;
        rows = 219;
        __delay_ms(1);
        columns = 64;
        rows = 231;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_q(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 231;
        __delay_ms(1);
        columns = 4;
        rows = 219;
        __delay_ms(1);
        columns = 8;
        rows = 219;
        __delay_ms(1);
        columns = 16;
        rows = 219;
        __delay_ms(1);
        columns = 32;
        rows = 7;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_r(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 3;
        __delay_ms(1);
        columns = 8;
        rows = 239;
        __delay_ms(1);
        columns = 16;
        rows = 247;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_s(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 71;
        __delay_ms(1);
        columns = 8;
        rows = 87;
        __delay_ms(1);
        columns = 16;
        rows = 87;
        __delay_ms(1);
        columns = 32;
        rows = 23;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_t(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 239;
        __delay_ms(1);
        columns = 8;
        rows = 3;
        __delay_ms(1);
        columns = 16;
        rows = 239;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_u(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 135;
        __delay_ms(1);
        columns = 4;
        rows = 127;
        __delay_ms(1);
        columns = 8;
        rows = 127;
        __delay_ms(1);
        columns = 16;
        rows = 127;
        __delay_ms(1);
        columns = 32;
        rows = 135;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_v(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 199;
        __delay_ms(1);
        columns = 4;
        rows = 191;
        __delay_ms(1);
        columns = 8;
        rows = 127;
        __delay_ms(1);
        columns = 16;
        rows = 191;
        __delay_ms(1);
        columns = 32;
        rows = 199;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_w(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 135;
        __delay_ms(1);
        columns = 4;
        rows = 127;
        __delay_ms(1);
        columns = 8;
        rows = 143;
        __delay_ms(1);
        columns = 16;
        rows = 127;
        __delay_ms(1);
        columns = 32;
        rows = 135;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_x(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 119;
        __delay_ms(1);
        columns = 4;
        rows = 175;
        __delay_ms(1);
        columns = 8;
        rows = 223;
        __delay_ms(1);
        columns = 16;
        rows = 175;
        __delay_ms(1);
        columns = 32;
        rows = 119;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_y(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 99;
        __delay_ms(1);
        columns = 8;
        rows = 111;
        __delay_ms(1);
        columns = 16;
        rows = 131;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_z(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 183;
        __delay_ms(1);
        columns = 8;
        rows = 87;
        __delay_ms(1);
        columns = 16;
        rows = 87;
        __delay_ms(1);
        columns = 32;
        rows = 111;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_qmarkup(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 251;
        __delay_ms(1);
        columns = 8;
        rows = 253;
        __delay_ms(1);
        columns = 16;
        rows = 253;
        __delay_ms(1);
        columns = 32;
        rows = 77;
        __delay_ms(1);
        columns = 64;
        rows = 243;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_qmarkud(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 159;
        __delay_ms(1);
        columns = 4;
        rows = 101;
        __delay_ms(1);
        columns = 8;
        rows = 127;
        __delay_ms(1);
        columns = 16;
        rows = 127;
        __delay_ms(1);
        columns = 32;
        rows = 191;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_prts(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 131;
        __delay_ms(1);
        columns = 4;
        rows = 125;
        __delay_ms(1);
        columns = 8;
        rows = 125;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 32;
        rows = 125;
        __delay_ms(1);
        columns = 64;
        rows = 125;
        __delay_ms(1);
        columns = 128;
        rows = 131;
        __delay_ms(1);
    }
}

void write_prtleft(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 131;
        __delay_ms(1);
        columns = 8;
        rows = 125;
        __delay_ms(1);
        columns = 16;
        rows = 125;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_prtright(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 8;
        rows = 125;
        __delay_ms(1);
        columns = 16;
        rows = 125;
        __delay_ms(1);
        columns = 32;
        rows = 131;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_stkman(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 247;
        __delay_ms(1);
        columns = 4;
        rows = 111;
        __delay_ms(1);
        columns = 8;
        rows = 137;
        __delay_ms(1);
        columns = 16;
        rows = 137;
        __delay_ms(1);
        columns = 32;
        rows = 111;
        __delay_ms(1);
        columns = 64;
        rows = 247;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_smile(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 223;
        __delay_ms(1);
        columns = 4;
        rows = 177;
        __delay_ms(1);
        columns = 8;
        rows = 191;
        __delay_ms(1);
        columns = 16;
        rows = 191;
        __delay_ms(1);
        columns = 32;
        rows = 177;
        __delay_ms(1);
        columns = 64;
        rows = 223;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_sad(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 191;
        __delay_ms(1);
        columns = 4;
        rows = 209;
        __delay_ms(1);
        columns = 8;
        rows = 223;
        __delay_ms(1);
        columns = 16;
        rows = 223;
        __delay_ms(1);
        columns = 32;
        rows = 209;
        __delay_ms(1);
        columns = 64;
        rows = 191;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_fill(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 1;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 0;
        __delay_ms(1);
        columns = 4;
        rows = 0;
        __delay_ms(1);
        columns = 8;
        rows = 0;
        __delay_ms(1);
        columns = 16;
        rows = 0;
        __delay_ms(1);
        columns = 32;
        rows = 0;
        __delay_ms(1);
        columns = 64;
        rows = 0;
        __delay_ms(1);
        columns = 128;
        rows = 0;
        __delay_ms(1);
    }
}

void write_emarkd(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 8;
        rows = 32;
        __delay_ms(1);
        columns = 16;
        rows = 32;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_emarku(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 8;
        rows = 4;
        __delay_ms(1);
        columns = 16;
        rows = 4;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_point(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 8;
        rows = 63;
        __delay_ms(1);
        columns = 16;
        rows = 63;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_prte(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 127;
        __delay_ms(1);
        columns = 4;
        rows = 183;
        __delay_ms(1);
        columns = 8;
        rows = 223;
        __delay_ms(1);
        columns = 16;
        rows = 239;
        __delay_ms(1);
        columns = 32;
        rows = 183;
        __delay_ms(1);
        columns = 64;
        rows = 251;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_numeral(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 0;
        rows = 0;
        __delay_ms(1);
        columns = 2;
        rows = 183;
        __delay_ms(1);
        columns = 4;
        rows = 3;
        __delay_ms(1);
        columns = 8;
        rows = 183;
        __delay_ms(1);
        columns = 16;
        rows = 183;
        __delay_ms(1);
        columns = 32;
        rows = 3;
        __delay_ms(1);
        columns = 64;
        rows = 183;
        __delay_ms(1);
        columns = 0;
        rows = 0;
        __delay_ms(1);
    }
}

void write_mosaic(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 1;
        rows = 170;
        __delay_ms(1);
        columns = 2;
        rows = 85;
        __delay_ms(1);
        columns = 4;
        rows = 170;
        __delay_ms(1);
        columns = 8;
        rows = 85;
        __delay_ms(1);
        columns = 16;
        rows = 170;
        __delay_ms(1);
        columns = 32;
        rows = 85;
        __delay_ms(1);
        columns = 64;
        rows = 170;
        __delay_ms(1);
        columns = 128;
        rows = 85;
        __delay_ms(1);
    }
}

void write_arrowu(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 1;
        rows = 247;
        __delay_ms(1);
        columns = 2;
        rows = 243;
        __delay_ms(1);
        columns = 4;
        rows = 241;
        __delay_ms(1);
        columns = 8;
        rows = 0;
        __delay_ms(1);
        columns = 16;
        rows = 0;
        __delay_ms(1);
        columns = 32;
        rows = 241;
        __delay_ms(1);
        columns = 64;
        rows = 243;
        __delay_ms(1);
        columns = 128;
        rows = 247;
        __delay_ms(1);
    }
}

void write_arrowr(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 1;
        rows = 231;
        __delay_ms(1);
        columns = 2;
        rows = 231;
        __delay_ms(1);
        columns = 4;
        rows = 231;
        __delay_ms(1);
        columns = 8;
        rows = 231;
        __delay_ms(1);
        columns = 16;
        rows = 0;
        __delay_ms(1);
        columns = 32;
        rows = 129;
        __delay_ms(1);
        columns = 64;
        rows = 195;
        __delay_ms(1);
        columns = 128;
        rows = 231;
        __delay_ms(1);
    }
}

void write_arrowd(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 1;
        rows = 239;
        __delay_ms(1);
        columns = 2;
        rows = 207;
        __delay_ms(1);
        columns = 4;
        rows = 143;
        __delay_ms(1);
        columns = 8;
        rows = 0;
        __delay_ms(1);
        columns = 16;
        rows = 0;
        __delay_ms(1);
        columns = 32;
        rows = 143;
        __delay_ms(1);
        columns = 64;
        rows = 207;
        __delay_ms(1);
        columns = 128;
        rows = 239;
        __delay_ms(1);
    }
}

void write_arrowl(unsigned short int time)
{
    for(i = 0; i < time; i++)
    {
        columns = 1;
        rows = 231;
        __delay_ms(1);
        columns = 2;
        rows = 195;
        __delay_ms(1);
        columns = 4;
        rows = 129;
        __delay_ms(1);
        columns = 8;
        rows = 0;
        __delay_ms(1);
        columns = 16;
        rows = 231;
        __delay_ms(1);
        columns = 32;
        rows = 231;
        __delay_ms(1);
        columns = 64;
        rows = 231;
        __delay_ms(1);
        columns = 128;
        rows = 231;
        __delay_ms(1);
    }
}


