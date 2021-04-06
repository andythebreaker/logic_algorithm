//using g++ 6.3.0 ; aka MinGW.org GCC-6.3.0-1
#include <algorithm>
#include <iostream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <regex>

//**********
#define BECAUSE_K_MAP_WILL_ALWAYSE_FORM_MIN_SOP_DISABLE_PATRIC_METHOD
#define OUTPUTPLUSBLANK " + "
//#define PRINT_INPUT_PARSER
#ifndef BECAUSE_K_MAP_WILL_ALWAYSE_FORM_MIN_SOP_DISABLE_PATRIC_METHOD
#define prime_implicant_char_show_bit_and_value false
#define prime_implicant_char_show_codic true
#define prime_implicant_char_show_EXT true
#define show_things_we_puted_in_the_arithmometer true
#define STEP2ENABLE 1
#define USE_EXAMPLE_STEP_2_DATA -1
#define SHOW_STEP2_STEP_MOD 1
#endif
//**********

//income data
#define USE_DEFAULT_DATA -1

//print chart
#define DEFINE_just_inside_data false
#define DEFINE_row0simple false
#define DEFINE_col0offest 1
#define DEFINE_addComplexRow0 true
#define DEFINE_addComplexRow0_sidebar false
#define DEFINE_addTTL true
#define DEFAULT_rmCol0 true

//gui
#define char_plus "+"
#define blankBuffer 2
#define char_minus "-"
#define char_side "|"
#define DEBUG_BEAUTIFULCHART false
#define char_blank " "

//setting
#define progress_bar_length 15
#define char_plum_blank ""
#define char_plum "'"
//#define ABCDEFG_START "A"
//#define ISINSIDE_USE_OLD
//#define USE_OLD16
//#define USE_OLD_TOO_LONG

#define REMOVE_DASH "-"
//---------------------------------
//-0,'0
#define A10101 "15.abcd"
//-0,'1
#define A10201 "14.abcd'"
#define A10202 "13.abc'd"
#define A10203 "11.ab'cd"
#define A10204 "7.a'bcd"
//-0,'2
#define A10301 "3.a'b'cd"
#define A10302 "5.a'bc'd"
#define A10303 "6.a'bcd'"
#define A10304 "9.ab'c'd"
#define A10305 "10.ab'cd'"
#define A10306 "12.abc'd'"
//-0,'3
#define A10401 "1.a'b'c'd"
#define A10402 "8.ab'c'd'"
#define A10403 "4.a'bc'd'"
#define A10404 "2.a'b'cd'"
//-0,'4
#define A10501 "0.a'b'c'd'"
//-1,'0
#define A10601 "14.15.abc-"
#define A10602 "15.13.ab-d"
#define A10603 "15.11.a-cd"
#define A10604 "15.7.-bcd"
//-1,'1
#define A10701 "6.7.a'bc-"
#define A10702 "5.7.a'b-d"
#define A10703 "3.7.a'-cd"
#define A10704 "11.3.-b'cd"
#define A10705 "10.11.ab'c-"
#define A10706 "9.11.ab'-d"
#define A10707 "12.13.abc'-"
#define A10708 "9.13.a-c'd"
#define A10709 "5.13.-bc'd"
#define A10710 "12.14.ab-d'"
#define A10711 "10.14.a-cd'"
#define A10712 "6.14.-bcd'"
//-1,'2
#define A10801 "3.2.a'b'c-"
#define A10802 "6.2.a'-cd'"
#define A10803 "10.2.-b'cd'"
#define A10804 "1.3.a'b'-d"
#define A10805 "5.1.a'-c'd"
#define A10806 "1.9.-b'c'd"
#define A10807 "4.5.a'bc'-"
#define A10808 "4.6.a'b-d'"
#define A10809 "12.4.-bc'd'"
#define A10810 "8.9.ab'c'-"
#define A10811 "10.8.ab'-d'"
#define A10812 "8.12.a-c'd'"
//-1,'3
#define A10901 "0.1.a'b'c'-"
#define A10902 "0.2.a'b'-d'"
#define A10903 "0.4.a'-c'd'"
#define A10904 "0.8.-b'c'd'"
//#15-#14-.#13-#12..-#11-#10..-#9-..#8-....#7-#6-...#5-..#4-....#3-..#2-....#1-....#0-....
//-2,'0
#define A11001 "12.14.15.13.ab--"
#define A11002 "9.13.11.15.a--d"
#define A11003 "15.7.3.11.--cd"
#define A11004 "15.6.7.14.-bc-"
//-2,'1
#define A11201 "4.7.5.6.a'b--"
#define A11202 "1.3.5.7.a'--d"
#define A11203 "8.9.10.11.ab'--"
#define A11204 "2.3.10.11.-b'c-"
#define A11205 "1.9.5.13.--c'd"
#define A11206 "4.5.12.13.-bc'-"
#define A11207 "8.12.10.14.a--d'"
#define A11208 "2.6.10.14.--cd'"
//-2,'2
#define A11301 "0.1.2.3.a'b'--"
#define A11302 "0.2.4.6.a'--d'"
#define A11303 "0.8.4.12.--c'd'"
#define A11304 "0.8.1.9.-b'c'-"
//-3,'0
#define A11401 "8.9.10.12.11.14.13.15.a---"
#define A11402 "4.5.6.12.7.13.14.15.-b--"
#define A11403 "2.3.6.10.7.11.14.15.--c-"
#define A11404 "1.3.5.9.15.7.11.13.---d"
//-3,'1
#define A11501 "0.1.2.4.3.6.5.7.a'---"
#define A11502 "0.1.8.2.3.9.10.11.-b'--"
#define A11503 "0.1.8.4.5.9.12.13.--c'-"
#define A11504 "0.8.4.2.6.10.12.14.---d'"

//..............3...............
//-0,'0
#define A20101 "7.abc"
//-0,'1
#define A20201 "3.a'bc"
#define A20202 "5.ab'c"
#define A20203 "6.abc'"
//-0,'2
#define A20301 "1.a'b'c"
#define A20302 "4.ab'c'"
#define A20303 "2.a'bc'"
//-0,'3
#define A20401 "0.a'b'c'"
//-1,'0
#define A20501 "6.7.ab-"
#define A20502 "5.7.a-c"
#define A20503 "3.7.-bc"
//-1,'1
#define A20601 "2.3.a'b-"
#define A20602 "1.3.a'-c"
#define A20603 "4.5.ab'-"
#define A20604 "1.5.-b'c"
#define A20605 "4.6.a-c'"
#define A20606 "2.6.-bc'"
//-1,'2
#define A20701 "0.1.a'b'-"
#define A20702 "2.0.a'-c'"
#define A20703 "4.0.-b'c'"
//-2,'0
#define A20801 "4.5.6.7.a--"
#define A20802 "2.3.6.7.-b-"
#define A20803 "1.5.3.7.--c"
//-2,'1
#define A20901 "0.1.2.3.a'--"
#define A20902 "0.1.4.5.-b'-"
#define A20903 "0.4.2.6.--c'"

//..............2...............
//-0,'0
#define A30101 "3.ab"
//-0,'1
#define A30201 "1.a'b"
#define A30202 "2.ab'"
//-0,'2
#define A30301 "0.a'b'"
//-1,'0
#define A30401 "2.3.a-"
#define A30402 "1.3.-b"
//-1,'1
#define A30501 "0.2.a'-"
#define A30502 "0.1.-b'"
//---------------------------------

//visne
//4

#define V400U 2
#define V400D 1
#define V400L 8
#define V400R 4

#define V401U 0
#define V401D 3
#define V401L 9
#define V401R 5

#define V402U 3
#define V402D 0
#define V402L 10
#define V402R 6

#define V403U 1
#define V403D 2
#define V403L 11
#define V403R 7

#define V404U 6
#define V404D 5
#define V404L 0
#define V404R 12

#define V405U 4
#define V405D 7
#define V405L 1
#define V405R 13

#define V406U 7
#define V406D 4
#define V406L 2
#define V406R 14

#define V407U 5
#define V407D 6
#define V407L 3
#define V407R 15

#define V408U 10
#define V408D 9
#define V408L 12
#define V408R 0

#define V409U 8
#define V409D 11
#define V409L 13
#define V409R 1

#define V410U 11
#define V410D 8
#define V410L 14
#define V410R 2

#define V411U 9
#define V411D 10
#define V411L 15
#define V411R 3

#define V412U 14
#define V412D 13
#define V412L 4
#define V412R 8

#define V413U 12
#define V413D 15
#define V413L 4
#define V413R 9

#define V414U 15
#define V414D 12
#define V414L 6
#define V414R 10

#define V415U 13
#define V415D 14
#define V415L 7
#define V415R 9

//3

#define V300U 1
#define V300L 4
#define V300R 2

#define V301U 0
#define V301L 5
#define V301R 3

#define V302U 3
#define V302L 0
#define V302R 6

#define V303U 2
#define V303L 1
#define V303R 7

#define V304U 5
#define V304L 6
#define V304R 0

#define V305U 4
#define V305L 7
#define V305R 1

#define V306U 7
#define V306L 2
#define V306R 4

#define V307U 6
#define V307L 3
#define V307R 5

//2

#define V200U 1
#define V200L 2

#define V201U 0
#define V201L 3

#define V202U 3
#define V202L 0

#define V203U 2
#define V203L 1

//rectangle
//#define RECTANGLE_USE_OLD_VERSION
#ifdef RECTANGLE_USE_OLD_VERSION
//4
#define R416A0 "1.2.3.4.5.6.7.8.9.10.11.12.13.14.15"
#define R408H0 "0.4.12.8.2.6.14.10"
#define R408H1 "0.4.12.8.1.5.13.9"
#define R408H2 "1.5.13.9.3.7.15.11"
#define R408H3 "3.7.15.11.2.6.14.10"
#define R408V0 "0.1.3.2.8.9.11.10"
#define R408V1 "0.1.3.2.4.5.7.6"
#define R408V2 "4.5.7.6.12.13.15.14"
#define R408V3 "12.13.15.14.8.9.11.10"
#define R404H0 "0.4.12.8"
#define R404H1 "1.5.13.9"
#define R404H2 "3.7.15.11"
#define R404H3 "2.6.14.10"
#define R404V0 "0.1.3.2"
#define R404V1 "4.5.7.6"
#define R404V2 "12.13.15.14"
#define R404V3 "8.9.11.10"
#define R4S400 "0.4.1.5"
#define R4S410 "4.12.5.13"
#define R4S420 "12.13.8.9"
#define R4S430 "8.9.0.1"
#define R4S401 "1.5.3.7"
#define R4S402 "3.7.2.6"
#define R4S403 "2.6.0.4"
#define R4S411 "5.13.7.15"
#define R4S421 "13.9.15.11"
#define R4S431 "9.11.1.3"
#define R4S412 "7.15.6.14"
#define R4S422 "15.11.14.10"
#define R4S432 "11.10.3.2"
#define R4S413 "6.14.4.12"
#define R4S423 "14.10.12.8"
#define R4S433 "10.8.2.0"
#define R4TH00 "0.4"
#define R4TH10 "12.4"
#define R4TH20 "12.8"
#define R4TH30 "8.0"
#define R4TH01 "1.5"
#define R4TH11 "5.13"
#define R4TH21 "13.9"
#define R4TH31 "9.1"
#define R4TH02 "3.7"
#define R4TH12 "7.15"
#define R4TH22 "15.11"
#define R4TH32 "11.3"
#define R4TH03 "2.6"
#define R4TH13 "6.14"
#define R4TH23 "14.10"
#define R4TH33 "10.2"
//V->xy REVERSE!
#define R4TV00 "0.1"
#define R4TV10 "1.3"
#define R4TV20 "3.2"
#define R4TV30 "2.0"
#define R4TV01 "4.5"
#define R4TV11 "5.7"
#define R4TV21 "7.6"
#define R4TV31 "6.4"
#define R4TV02 "12.13"
#define R4TV12 "13.15"
#define R4TV22 "15.14"
#define R4TV32 "14.12"
#define R4TV03 "8.9"
#define R4TV13 "9.11"
#define R4TV23 "11.10"
#define R4TV33 "10.8"

//3
#define R308A0 "0.2.6.4.1.3.7.5"
//error2
#define R304H0 "0.2.6.4"
#define R304H1 "1.3.7.5"
#define R3S4H0 "0.1.3.2"
#define R3S4H1 "2.6.3.7"
#define R3S4H2 "6.7.4.5"
#define R3S4H3 "4.5.0.1"
#define R3TH00 "0.2"
#define R3TH10 "2.6"
#define R3TH20 "6.4"
#define R3TH30 "0.4"
#define R3TH01 "1.3"
#define R3TH11 "3.7"
#define R3TH21 "7.5"
#define R3TH31 "1.5"
#define R3TV00 "0.1"
#define R3TV01 "2.3"
#define R3TV02 "6.7"
#define R3TV03 "4.5"

//2
#define R204A0 "0.2.3.1"
#define R202V0 "0.2"
#define R202V1 "1.3"
#define R202H0 "2.3"
#define R202H1 "0.1"

#else
//rectangle
//4
#define R416A0 "1.2.3.4.5.6.7.8.9.10.11.12.13.14.15.---"
#define R408H0 "0.4.12.8.2.6.14.10.---0"
#define R408H1 "0.4.12.8.1.5.13.9.--0-"
#define R408H2 "1.5.13.9.3.7.15.11.---1"
#define R408H3 "3.7.15.11.2.6.14.10.--1-"
#define R408V0 "0.1.3.2.8.9.11.10.-0--"
#define R408V1 "0.1.3.2.4.5.7.6.0---"
#define R408V2 "4.5.7.6.12.13.15.14.-1--"
#define R408V3 "12.13.15.14.8.9.11.10.1---"
#define R404H0 "0.4.12.8.--00"
#define R404H1 "1.5.13.9.--01"
#define R404H2 "3.7.15.11.--11"
#define R404H3 "2.6.14.10.--10"
#define R404V0 "0.1.3.2.00--"
#define R404V1 "4.5.7.6.01--"
#define R404V2 "12.13.15.14.11--"
#define R404V3 "8.9.11.10.10--"
#define R4S400 "0.4.1.5.0-0-"
#define R4S410 "4.12.5.13.-10-"
#define R4S420 "12.13.8.9.1-0-"
#define R4S430 "8.9.0.1.-00-"
#define R4S401 "1.5.3.7.0--1"
#define R4S402 "3.7.2.6.0-1-"
#define R4S403 "2.6.0.4.0--0"
#define R4S411 "5.13.7.15.-1-1"
#define R4S421 "13.9.15.11.1--1"
#define R4S431 "9.11.1.3.-0-1"
#define R4S412 "7.15.6.14.-11-"
#define R4S422 "15.11.14.10.1-1-"
#define R4S432 "11.10.3.2.-01-"
#define R4S413 "6.14.4.12.-1-0"
#define R4S423 "14.10.12.8.1--0"
#define R4S433 "10.8.2.0.-0-0"
#define R4TH00 "0.4.0-00"
#define R4TH10 "12.4.-100"
#define R4TH20 "12.8.1-00"
#define R4TH30 "8.0.-000"
#define R4TH01 "1.5.0-01"
#define R4TH11 "5.13.-101"
#define R4TH21 "13.9.1-01"
#define R4TH31 "9.1.-001"
#define R4TH02 "3.7.0-11"
#define R4TH12 "7.15.-111"
#define R4TH22 "15.11.1-11"
#define R4TH32 "11.3.-011"
#define R4TH03 "2.6.0-10"
#define R4TH13 "6.14.-110"
#define R4TH23 "14.10.1-10"
#define R4TH33 "10.2.-010"
//V->xy REVERSE!
#define R4TV00 "0.1.000-"
#define R4TV10 "1.3.00-1"
#define R4TV20 "3.2.001-"
#define R4TV30 "2.0.00-0"
#define R4TV01 "4.5.010-"
#define R4TV11 "5.7.01-1"
#define R4TV21 "7.6.011-"
#define R4TV31 "6.4.01-0"
#define R4TV02 "12.13.110-"
#define R4TV12 "13.15.11-1"
#define R4TV22 "15.14.111-"
#define R4TV32 "14.12.11-0"
#define R4TV03 "8.9.100-"
#define R4TV13 "9.11.10-1"
#define R4TV23 "11.10.101-"
#define R4TV33 "10.8.10-0"
//1s
#define O400 "0.0000"
#define O401 "1.0001"
#define O402 "2.0010"
#define O403 "3.0011"
#define O404 "4.0100"
#define O405 "5.0101"
#define O406 "6.0110"
#define O407 "7.0111"
#define O408 "8.1000"
#define O409 "9.1001"
#define O410 "10.1010"
#define O411 "11.1011"
#define O412 "12.1100"
#define O413 "13.1101"
#define O414 "14.1110"
#define O415 "15.1111"

//3
#define R308A0 "0.2.6.4.1.3.7.5.---"
//error2
#define R304H0 "0.2.6.4.--0"
#define R304H1 "1.3.7.5.--1"
#define R3S4H0 "0.1.3.2.0--"
#define R3S4H1 "2.6.3.7.-1-"
#define R3S4H2 "6.7.4.5.1--"
#define R3S4H3 "4.5.0.1.-0-"
#define R3TH00 "0.2.0-0"
#define R3TH10 "2.6.-10"
#define R3TH20 "6.4.1-0"
#define R3TH30 "0.4.-00"
#define R3TH01 "1.3.0-1"
#define R3TH11 "3.7.-11"
#define R3TH21 "7.5.1-1"
#define R3TH31 "1.5.-01"
#define R3TV00 "0.1.00-"
#define R3TV01 "2.3.01-"
#define R3TV02 "6.7.11-"
#define R3TV03 "4.5.10-"
//1s
#define O300 "0.000"
#define O301 "1.001"
#define O302 "2.010"
#define O303 "3.011"
#define O304 "4.100"
#define O305 "5.101"
#define O306 "6.110"
#define O307 "7.111"

//2
#define R204A0 "0.2.3.1.--"
#define R202V0 "0.2.-0"
#define R202V1 "1.3.-1"
#define R202H0 "2.3.1-"
#define R202H1 "0.1.0-"
//1s
#define O200 "0.00"
#define O201 "1.01"
#define O202 "2.10"
#define O203 "3.11"
#endif

using namespace std;

//income data
int VARs;
vector<int> ones;
vector<int> dontcares;
void dataSetUp();

//output data
string output_kmap_string = "";
string output_group_string = "";

//visne
bool isVisne(int numb1, int numb2, int vars);
vector<int> returnVisne(int indexI, int vars);
//SQUARE
vector<int> phraseIntDot(string intDot);
bool COMP_vector_int(vector<int> v1, vector<int> v2);
bool isRectangle(vector<int> targ, int vars);
//groups
vector<vector<int>> maxGroup(int targ, int vars, vector<int> onesIN, vector<int> dontCareIN);
vector<int> sieve(vector<int> targ, vector<int> onesIN, vector<int> dontCareIN, vector<int> history);
string guide(vector<int> income);
bool isInside(vector<vector<int>> vvi, vector<int> vi);

//template
template <typename T>
vector<T> listComb(vector<T> v1, vector<T> v2)
{
    vector<T> outl;
    typename vector<T>::iterator ir;
    for (ir = v1.begin(); ir != v1.end(); ir++)
    {
        outl.push_back(*ir);
    }
    for (ir = v2.begin(); ir != v2.end(); ir++)
    {
        outl.push_back(*ir);
    }
    return outl;
}

template <typename T>
vector<T> listComb_without_overlap(vector<T> v1, vector<T> v2)
{
    vector<T> outl;
    typename vector<T>::iterator ir;
    for (ir = v1.begin(); ir != v1.end(); ir++)
    {
        if (find(outl.begin(), outl.end(), *ir) == outl.end())
        {
            outl.push_back(*ir);
        }
    }
    for (ir = v2.begin(); ir != v2.end(); ir++)
    {
        if (find(outl.begin(), outl.end(), *ir) == outl.end())
        {
            outl.push_back(*ir);
        }
    }
    return outl;
}

template <typename T>
void pop_front_noOrder(vector<T> &vec)
{
    //assert(!vec.empty());
    if (!vec.empty())
    {
        vec.front() = move(vec.back());
        vec.pop_back();
    }
    else
    {
        cout << "ERROR : assert empty !" << endl;
    }
}

template <typename T>
void pop_index_noOrder(vector<T> &vec, int index_to_pop)
{
    //assert(!vec.empty());
    if ((!vec.empty()) && vec.size() > index_to_pop)
    {
        vec[index_to_pop] = move(vec.back());
        vec.pop_back();
    }
    else
    {
        cout << "ERROR : assert empty or out of range !" << endl;
    }
}

template <typename T>
vector<vector<T>> weave_16(vector<T> vec, int to_remove)
{
    vector<vector<T>> outVVT;
    if (to_remove == 0 || vec.empty())
    {
        outVVT.push_back(vec);
        return outVVT;
    }
    else if (vec.size() < to_remove)
    {
        cout << "ERROR : out of range !" << endl;
        return outVVT;
    }
    else
    {
        switch (to_remove)
        {
        case 1:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                //cout << "case1" << endl;
                pop_index_noOrder(tmp_to_pop, i);
#ifdef USE_OLD16
                outVVT.push_back(tmp_to_pop);
#else
                if (!isInside(outVVT, tmp_to_pop))
                {
                    outVVT.push_back(tmp_to_pop);
                }
#endif
                //cout << "tmp_to_pop : ";
                //cout << guide(tmp_to_pop) << endl;
            }
            return outVVT;
            break;

        case 2:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
#ifdef USE_OLD16
                    outVVT.push_back(tmp_to_pop2);
#else
                    if (!isInside(outVVT, tmp_to_pop2))
                    {
                        outVVT.push_back(tmp_to_pop2);
                    }
#endif
                }
            }
            return outVVT;
            break;
        case 3:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
#ifdef USE_OLD16
                        outVVT.push_back(tmp_to_pop3);
#else
                        if (!isInside(outVVT, tmp_to_pop3))
                        {
                            outVVT.push_back(tmp_to_pop3);
                        }
#endif
                    }
                }
            }
            return outVVT;
            break;
        case 4:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
#ifdef USE_OLD16
                            outVVT.push_back(tmp_to_pop4);
#else
                            if (!isInside(outVVT, tmp_to_pop4))
                            {
                                outVVT.push_back(tmp_to_pop4);
                            }
#endif
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 5:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
#ifdef USE_OLD16
                                outVVT.push_back(tmp_to_pop5);
#else
                                if (!isInside(outVVT, tmp_to_pop5))
                                {
                                    outVVT.push_back(tmp_to_pop5);
                                }
#endif
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 6:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
#ifdef USE_OLD16
                                    outVVT.push_back(tmp_to_pop6);
#else
                                    if (!isInside(outVVT, tmp_to_pop6))
                                    {
                                        outVVT.push_back(tmp_to_pop6);
                                    }
#endif
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 7:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
                                    //outVVT.push_back(tmp_to_pop6);
                                    for (int i7 = 0; i7 < tmp_to_pop6.size(); i7++)
                                    {
                                        vector<int> tmp_to_pop7 = tmp_to_pop6;
                                        //copy(tmp_to_pop6.begin(), tmp_to_pop6.end(), tmp_to_pop7.begin());
                                        pop_index_noOrder(tmp_to_pop7, i7);
#ifdef USE_OLD16
                                        outVVT.push_back(tmp_to_pop7);
#else
                                        if (!isInside(outVVT, tmp_to_pop7))
                                        {
                                            outVVT.push_back(tmp_to_pop7);
                                        }
#endif
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 8:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
                                    //outVVT.push_back(tmp_to_pop6);
                                    for (int i7 = 0; i7 < tmp_to_pop6.size(); i7++)
                                    {
                                        vector<int> tmp_to_pop7 = tmp_to_pop6;
                                        //copy(tmp_to_pop6.begin(), tmp_to_pop6.end(), tmp_to_pop7.begin());
                                        pop_index_noOrder(tmp_to_pop7, i7);
                                        //outVVT.push_back(tmp_to_pop7);
                                        for (int i8 = 0; i8 < tmp_to_pop7.size(); i8++)
                                        {
                                            vector<int> tmp_to_pop8 = tmp_to_pop7;
                                            //copy(tmp_to_pop7.begin(), tmp_to_pop7.end(), tmp_to_pop8.begin());
                                            pop_index_noOrder(tmp_to_pop8, i8);
#ifdef USE_OLD16
                                            outVVT.push_back(tmp_to_pop8);
#else
                                            if (!isInside(outVVT, tmp_to_pop8))
                                            {
                                                outVVT.push_back(tmp_to_pop8);
                                            }
#endif
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 9:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
                                    //outVVT.push_back(tmp_to_pop6);
                                    for (int i7 = 0; i7 < tmp_to_pop6.size(); i7++)
                                    {
                                        vector<int> tmp_to_pop7 = tmp_to_pop6;
                                        //copy(tmp_to_pop6.begin(), tmp_to_pop6.end(), tmp_to_pop7.begin());
                                        pop_index_noOrder(tmp_to_pop7, i7);
                                        //outVVT.push_back(tmp_to_pop7);
                                        for (int i8 = 0; i8 < tmp_to_pop7.size(); i8++)
                                        {
                                            vector<int> tmp_to_pop8 = tmp_to_pop7;
                                            //copy(tmp_to_pop7.begin(), tmp_to_pop7.end(), tmp_to_pop8.begin());
                                            pop_index_noOrder(tmp_to_pop8, i8);
                                            //outVVT.push_back(tmp_to_pop8);
                                            for (int i9 = 0; i9 < tmp_to_pop8.size(); i9++)
                                            {
                                                vector<int> tmp_to_pop9 = tmp_to_pop8;
                                                //copy(tmp_to_pop8.begin(), tmp_to_pop8.end(), tmp_to_pop9.begin());
                                                pop_index_noOrder(tmp_to_pop9, i9);
#ifdef USE_OLD16
                                                outVVT.push_back(tmp_to_pop9);
#else
                                                if (!isInside(outVVT, tmp_to_pop9))
                                                {
                                                    outVVT.push_back(tmp_to_pop9);
                                                }
#endif
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 10:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
                                    //outVVT.push_back(tmp_to_pop6);
                                    for (int i7 = 0; i7 < tmp_to_pop6.size(); i7++)
                                    {
                                        vector<int> tmp_to_pop7 = tmp_to_pop6;
                                        //copy(tmp_to_pop6.begin(), tmp_to_pop6.end(), tmp_to_pop7.begin());
                                        pop_index_noOrder(tmp_to_pop7, i7);
                                        //outVVT.push_back(tmp_to_pop7);
                                        for (int i8 = 0; i8 < tmp_to_pop7.size(); i8++)
                                        {
                                            vector<int> tmp_to_pop8 = tmp_to_pop7;
                                            //copy(tmp_to_pop7.begin(), tmp_to_pop7.end(), tmp_to_pop8.begin());
                                            pop_index_noOrder(tmp_to_pop8, i8);
                                            //outVVT.push_back(tmp_to_pop8);
                                            for (int i9 = 0; i9 < tmp_to_pop8.size(); i9++)
                                            {
                                                vector<int> tmp_to_pop9 = tmp_to_pop8;
                                                //copy(tmp_to_pop8.begin(), tmp_to_pop8.end(), tmp_to_pop9.begin());
                                                pop_index_noOrder(tmp_to_pop9, i9);
                                                //outVVT.push_back(tmp_to_pop9);
                                                for (int i10 = 0; i10 < tmp_to_pop9.size(); i10++)
                                                {
                                                    vector<int> tmp_to_pop10 = tmp_to_pop9;
                                                    //copy(tmp_to_pop9.begin(), tmp_to_pop9.end(), tmp_to_pop10.begin());
                                                    pop_index_noOrder(tmp_to_pop10, i10);
#ifdef USE_OLD16
                                                    outVVT.push_back(tmp_to_pop10);
#else
                                                    if (!isInside(outVVT, tmp_to_pop10))
                                                    {
                                                        outVVT.push_back(tmp_to_pop10);
                                                    }
#endif
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 11:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
                                    //outVVT.push_back(tmp_to_pop6);
                                    for (int i7 = 0; i7 < tmp_to_pop6.size(); i7++)
                                    {
                                        vector<int> tmp_to_pop7 = tmp_to_pop6;
                                        //copy(tmp_to_pop6.begin(), tmp_to_pop6.end(), tmp_to_pop7.begin());
                                        pop_index_noOrder(tmp_to_pop7, i7);
                                        //outVVT.push_back(tmp_to_pop7);
                                        for (int i8 = 0; i8 < tmp_to_pop7.size(); i8++)
                                        {
                                            vector<int> tmp_to_pop8 = tmp_to_pop7;
                                            //copy(tmp_to_pop7.begin(), tmp_to_pop7.end(), tmp_to_pop8.begin());
                                            pop_index_noOrder(tmp_to_pop8, i8);
                                            //outVVT.push_back(tmp_to_pop8);
                                            for (int i9 = 0; i9 < tmp_to_pop8.size(); i9++)
                                            {
                                                vector<int> tmp_to_pop9 = tmp_to_pop8;
                                                //copy(tmp_to_pop8.begin(), tmp_to_pop8.end(), tmp_to_pop9.begin());
                                                pop_index_noOrder(tmp_to_pop9, i9);
                                                //outVVT.push_back(tmp_to_pop9);
                                                for (int i10 = 0; i10 < tmp_to_pop9.size(); i10++)
                                                {
                                                    vector<int> tmp_to_pop10 = tmp_to_pop9;
                                                    //copy(tmp_to_pop9.begin(), tmp_to_pop9.end(), tmp_to_pop10.begin());
                                                    pop_index_noOrder(tmp_to_pop10, i10);
                                                    //outVVT.push_back(tmp_to_pop10);
                                                    for (int i11 = 0; i11 < tmp_to_pop10.size(); i11++)
                                                    {
                                                        vector<int> tmp_to_pop11 = tmp_to_pop10;
                                                        //copy(tmp_to_pop10.begin(), tmp_to_pop10.end(), tmp_to_pop11.begin());
                                                        pop_index_noOrder(tmp_to_pop11, i11);
#ifdef USE_OLD16
                                                        outVVT.push_back(tmp_to_pop11);
#else
                                                        if (!isInside(outVVT, tmp_to_pop11))
                                                        {
                                                            outVVT.push_back(tmp_to_pop11);
                                                        }
#endif
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 12:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
                                    //outVVT.push_back(tmp_to_pop6);
                                    for (int i7 = 0; i7 < tmp_to_pop6.size(); i7++)
                                    {
                                        vector<int> tmp_to_pop7 = tmp_to_pop6;
                                        //copy(tmp_to_pop6.begin(), tmp_to_pop6.end(), tmp_to_pop7.begin());
                                        pop_index_noOrder(tmp_to_pop7, i7);
                                        //outVVT.push_back(tmp_to_pop7);
                                        for (int i8 = 0; i8 < tmp_to_pop7.size(); i8++)
                                        {
                                            vector<int> tmp_to_pop8 = tmp_to_pop7;
                                            //copy(tmp_to_pop7.begin(), tmp_to_pop7.end(), tmp_to_pop8.begin());
                                            pop_index_noOrder(tmp_to_pop8, i8);
                                            //outVVT.push_back(tmp_to_pop8);
                                            for (int i9 = 0; i9 < tmp_to_pop8.size(); i9++)
                                            {
                                                vector<int> tmp_to_pop9 = tmp_to_pop8;
                                                //copy(tmp_to_pop8.begin(), tmp_to_pop8.end(), tmp_to_pop9.begin());
                                                pop_index_noOrder(tmp_to_pop9, i9);
                                                //outVVT.push_back(tmp_to_pop9);
                                                for (int i10 = 0; i10 < tmp_to_pop9.size(); i10++)
                                                {
                                                    vector<int> tmp_to_pop10 = tmp_to_pop9;
                                                    //copy(tmp_to_pop9.begin(), tmp_to_pop9.end(), tmp_to_pop10.begin());
                                                    pop_index_noOrder(tmp_to_pop10, i10);
                                                    //outVVT.push_back(tmp_to_pop10);
                                                    for (int i11 = 0; i11 < tmp_to_pop10.size(); i11++)
                                                    {
                                                        vector<int> tmp_to_pop11 = tmp_to_pop10;
                                                        //copy(tmp_to_pop10.begin(), tmp_to_pop10.end(), tmp_to_pop11.begin());
                                                        pop_index_noOrder(tmp_to_pop11, i11);
                                                        //outVVT.push_back(tmp_to_pop11);
                                                        for (int i12 = 0; i12 < tmp_to_pop11.size(); i12++)
                                                        {
                                                            vector<int> tmp_to_pop12 = tmp_to_pop11;
                                                            //copy(tmp_to_pop11.begin(), tmp_to_pop11.end(), tmp_to_pop12.begin());
                                                            pop_index_noOrder(tmp_to_pop12, i12);
#ifdef USE_OLD16
                                                            outVVT.push_back(tmp_to_pop12);
#else
                                                            if (!isInside(outVVT, tmp_to_pop12))
                                                            {
                                                                outVVT.push_back(tmp_to_pop12);
                                                            }
#endif
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 13:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
                                    //outVVT.push_back(tmp_to_pop6);
                                    for (int i7 = 0; i7 < tmp_to_pop6.size(); i7++)
                                    {
                                        vector<int> tmp_to_pop7 = tmp_to_pop6;
                                        //copy(tmp_to_pop6.begin(), tmp_to_pop6.end(), tmp_to_pop7.begin());
                                        pop_index_noOrder(tmp_to_pop7, i7);
                                        //outVVT.push_back(tmp_to_pop7);
                                        for (int i8 = 0; i8 < tmp_to_pop7.size(); i8++)
                                        {
                                            vector<int> tmp_to_pop8 = tmp_to_pop7;
                                            //copy(tmp_to_pop7.begin(), tmp_to_pop7.end(), tmp_to_pop8.begin());
                                            pop_index_noOrder(tmp_to_pop8, i8);
                                            //outVVT.push_back(tmp_to_pop8);
                                            for (int i9 = 0; i9 < tmp_to_pop8.size(); i9++)
                                            {
                                                vector<int> tmp_to_pop9 = tmp_to_pop8;
                                                //copy(tmp_to_pop8.begin(), tmp_to_pop8.end(), tmp_to_pop9.begin());
                                                pop_index_noOrder(tmp_to_pop9, i9);
                                                //outVVT.push_back(tmp_to_pop9);
                                                for (int i10 = 0; i10 < tmp_to_pop9.size(); i10++)
                                                {
                                                    vector<int> tmp_to_pop10 = tmp_to_pop9;
                                                    //copy(tmp_to_pop9.begin(), tmp_to_pop9.end(), tmp_to_pop10.begin());
                                                    pop_index_noOrder(tmp_to_pop10, i10);
                                                    //outVVT.push_back(tmp_to_pop10);
                                                    for (int i11 = 0; i11 < tmp_to_pop10.size(); i11++)
                                                    {
                                                        vector<int> tmp_to_pop11 = tmp_to_pop10;
                                                        //copy(tmp_to_pop10.begin(), tmp_to_pop10.end(), tmp_to_pop11.begin());
                                                        pop_index_noOrder(tmp_to_pop11, i11);
                                                        //outVVT.push_back(tmp_to_pop11);
                                                        for (int i12 = 0; i12 < tmp_to_pop11.size(); i12++)
                                                        {
                                                            vector<int> tmp_to_pop12 = tmp_to_pop11;
                                                            //copy(tmp_to_pop11.begin(), tmp_to_pop11.end(), tmp_to_pop12.begin());
                                                            pop_index_noOrder(tmp_to_pop12, i12);
                                                            //outVVT.push_back(tmp_to_pop12);
                                                            for (int i13 = 0; i13 < tmp_to_pop12.size(); i13++)
                                                            {
                                                                vector<int> tmp_to_pop13 = tmp_to_pop12;
                                                                //copy(tmp_to_pop12.begin(), tmp_to_pop12.end(), tmp_to_pop13.begin());
                                                                pop_index_noOrder(tmp_to_pop13, i13);
#ifdef USE_OLD16
                                                                outVVT.push_back(tmp_to_pop13);
#else
                                                                if (!isInside(outVVT, tmp_to_pop13))
                                                                {
                                                                    outVVT.push_back(tmp_to_pop13);
                                                                }
#endif
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 14:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
                                    //outVVT.push_back(tmp_to_pop6);
                                    for (int i7 = 0; i7 < tmp_to_pop6.size(); i7++)
                                    {
                                        vector<int> tmp_to_pop7 = tmp_to_pop6;
                                        //copy(tmp_to_pop6.begin(), tmp_to_pop6.end(), tmp_to_pop7.begin());
                                        pop_index_noOrder(tmp_to_pop7, i7);
                                        //outVVT.push_back(tmp_to_pop7);
                                        for (int i8 = 0; i8 < tmp_to_pop7.size(); i8++)
                                        {
                                            vector<int> tmp_to_pop8 = tmp_to_pop7;
                                            //copy(tmp_to_pop7.begin(), tmp_to_pop7.end(), tmp_to_pop8.begin());
                                            pop_index_noOrder(tmp_to_pop8, i8);
                                            //outVVT.push_back(tmp_to_pop8);
                                            for (int i9 = 0; i9 < tmp_to_pop8.size(); i9++)
                                            {
                                                vector<int> tmp_to_pop9 = tmp_to_pop8;
                                                //copy(tmp_to_pop8.begin(), tmp_to_pop8.end(), tmp_to_pop9.begin());
                                                pop_index_noOrder(tmp_to_pop9, i9);
                                                //outVVT.push_back(tmp_to_pop9);
                                                for (int i10 = 0; i10 < tmp_to_pop9.size(); i10++)
                                                {
                                                    vector<int> tmp_to_pop10 = tmp_to_pop9;
                                                    //copy(tmp_to_pop9.begin(), tmp_to_pop9.end(), tmp_to_pop10.begin());
                                                    pop_index_noOrder(tmp_to_pop10, i10);
                                                    //outVVT.push_back(tmp_to_pop10);
                                                    for (int i11 = 0; i11 < tmp_to_pop10.size(); i11++)
                                                    {
                                                        vector<int> tmp_to_pop11 = tmp_to_pop10;
                                                        //copy(tmp_to_pop10.begin(), tmp_to_pop10.end(), tmp_to_pop11.begin());
                                                        pop_index_noOrder(tmp_to_pop11, i11);
                                                        //outVVT.push_back(tmp_to_pop11);
                                                        for (int i12 = 0; i12 < tmp_to_pop11.size(); i12++)
                                                        {
                                                            vector<int> tmp_to_pop12 = tmp_to_pop11;
                                                            //copy(tmp_to_pop11.begin(), tmp_to_pop11.end(), tmp_to_pop12.begin());
                                                            pop_index_noOrder(tmp_to_pop12, i12);
                                                            //outVVT.push_back(tmp_to_pop12);
                                                            for (int i13 = 0; i13 < tmp_to_pop12.size(); i13++)
                                                            {
                                                                vector<int> tmp_to_pop13 = tmp_to_pop12;
                                                                //copy(tmp_to_pop12.begin(), tmp_to_pop12.end(), tmp_to_pop13.begin());
                                                                pop_index_noOrder(tmp_to_pop13, i13);
                                                                //outVVT.push_back(tmp_to_pop13);
                                                                for (int i14 = 0; i14 < tmp_to_pop13.size(); i14++)
                                                                {
                                                                    vector<int> tmp_to_pop14 = tmp_to_pop13;
                                                                    //copy(tmp_to_pop13.begin(), tmp_to_pop13.end(), tmp_to_pop14.begin());
                                                                    pop_index_noOrder(tmp_to_pop14, i14);
#ifdef USE_OLD16
                                                                    outVVT.push_back(tmp_to_pop14);
#else
                                                                    if (!isInside(outVVT, tmp_to_pop14))
                                                                    {
                                                                        outVVT.push_back(tmp_to_pop14);
                                                                    }
#endif
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 15:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
                                    //outVVT.push_back(tmp_to_pop6);
                                    for (int i7 = 0; i7 < tmp_to_pop6.size(); i7++)
                                    {
                                        vector<int> tmp_to_pop7 = tmp_to_pop6;
                                        //copy(tmp_to_pop6.begin(), tmp_to_pop6.end(), tmp_to_pop7.begin());
                                        pop_index_noOrder(tmp_to_pop7, i7);
                                        //outVVT.push_back(tmp_to_pop7);
                                        for (int i8 = 0; i8 < tmp_to_pop7.size(); i8++)
                                        {
                                            vector<int> tmp_to_pop8 = tmp_to_pop7;
                                            //copy(tmp_to_pop7.begin(), tmp_to_pop7.end(), tmp_to_pop8.begin());
                                            pop_index_noOrder(tmp_to_pop8, i8);
                                            //outVVT.push_back(tmp_to_pop8);
                                            for (int i9 = 0; i9 < tmp_to_pop8.size(); i9++)
                                            {
                                                vector<int> tmp_to_pop9 = tmp_to_pop8;
                                                //copy(tmp_to_pop8.begin(), tmp_to_pop8.end(), tmp_to_pop9.begin());
                                                pop_index_noOrder(tmp_to_pop9, i9);
                                                //outVVT.push_back(tmp_to_pop9);
                                                for (int i10 = 0; i10 < tmp_to_pop9.size(); i10++)
                                                {
                                                    vector<int> tmp_to_pop10 = tmp_to_pop9;
                                                    //copy(tmp_to_pop9.begin(), tmp_to_pop9.end(), tmp_to_pop10.begin());
                                                    pop_index_noOrder(tmp_to_pop10, i10);
                                                    //outVVT.push_back(tmp_to_pop10);
                                                    for (int i11 = 0; i11 < tmp_to_pop10.size(); i11++)
                                                    {
                                                        vector<int> tmp_to_pop11 = tmp_to_pop10;
                                                        //copy(tmp_to_pop10.begin(), tmp_to_pop10.end(), tmp_to_pop11.begin());
                                                        pop_index_noOrder(tmp_to_pop11, i11);
                                                        //outVVT.push_back(tmp_to_pop11);
                                                        for (int i12 = 0; i12 < tmp_to_pop11.size(); i12++)
                                                        {
                                                            vector<int> tmp_to_pop12 = tmp_to_pop11;
                                                            //copy(tmp_to_pop11.begin(), tmp_to_pop11.end(), tmp_to_pop12.begin());
                                                            pop_index_noOrder(tmp_to_pop12, i12);
                                                            //outVVT.push_back(tmp_to_pop12);
                                                            for (int i13 = 0; i13 < tmp_to_pop12.size(); i13++)
                                                            {
                                                                vector<int> tmp_to_pop13 = tmp_to_pop12;
                                                                //copy(tmp_to_pop12.begin(), tmp_to_pop12.end(), tmp_to_pop13.begin());
                                                                pop_index_noOrder(tmp_to_pop13, i13);
                                                                //outVVT.push_back(tmp_to_pop13);
                                                                for (int i14 = 0; i14 < tmp_to_pop13.size(); i14++)
                                                                {
                                                                    vector<int> tmp_to_pop14 = tmp_to_pop13;
                                                                    //copy(tmp_to_pop13.begin(), tmp_to_pop13.end(), tmp_to_pop14.begin());
                                                                    pop_index_noOrder(tmp_to_pop14, i14);
                                                                    //outVVT.push_back(tmp_to_pop14);
                                                                    for (int i15 = 0; i15 < tmp_to_pop14.size(); i15++)
                                                                    {
                                                                        vector<int> tmp_to_pop15 = tmp_to_pop14;
                                                                        //copy(tmp_to_pop14.begin(), tmp_to_pop14.end(), tmp_to_pop15.begin());
                                                                        pop_index_noOrder(tmp_to_pop15, i15);
#ifdef USE_OLD16
                                                                        outVVT.push_back(tmp_to_pop15);
#else
                                                                        if (!isInside(outVVT, tmp_to_pop15))
                                                                        {
                                                                            outVVT.push_back(tmp_to_pop15);
                                                                        }
#endif
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;
        case 16:
            for (int i = 0; i < vec.size(); i++)
            {
                vector<int> tmp_to_pop = vec;
                //copy(vec.begin(), vec.end(), tmp_to_pop.begin());
                pop_index_noOrder(tmp_to_pop, i);
                //outVVT.push_back(tmp_to_pop);
                for (int i2 = 0; i2 < tmp_to_pop.size(); i2++)
                {
                    vector<int> tmp_to_pop2 = tmp_to_pop;
                    //copy(tmp_to_pop.begin(), tmp_to_pop.end(), tmp_to_pop2.begin());
                    pop_index_noOrder(tmp_to_pop2, i2);
                    //outVVT.push_back(tmp_to_pop2);
                    for (int i3 = 0; i3 < tmp_to_pop2.size(); i3++)
                    {
                        vector<int> tmp_to_pop3 = tmp_to_pop2;
                        //copy(tmp_to_pop2.begin(), tmp_to_pop2.end(), tmp_to_pop3.begin());
                        pop_index_noOrder(tmp_to_pop3, i3);
                        //outVVT.push_back(tmp_to_pop3);
                        for (int i4 = 0; i4 < tmp_to_pop3.size(); i4++)
                        {
                            vector<int> tmp_to_pop4 = tmp_to_pop3;
                            //copy(tmp_to_pop3.begin(), tmp_to_pop3.end(), tmp_to_pop4.begin());
                            pop_index_noOrder(tmp_to_pop4, i4);
                            //outVVT.push_back(tmp_to_pop4);
                            for (int i5 = 0; i5 < tmp_to_pop4.size(); i5++)
                            {
                                vector<int> tmp_to_pop5 = tmp_to_pop4;
                                //copy(tmp_to_pop4.begin(), tmp_to_pop4.end(), tmp_to_pop5.begin());
                                pop_index_noOrder(tmp_to_pop5, i5);
                                //outVVT.push_back(tmp_to_pop5);
                                for (int i6 = 0; i6 < tmp_to_pop5.size(); i6++)
                                {
                                    vector<int> tmp_to_pop6 = tmp_to_pop5;
                                    //copy(tmp_to_pop5.begin(), tmp_to_pop5.end(), tmp_to_pop6.begin());
                                    pop_index_noOrder(tmp_to_pop6, i6);
                                    //outVVT.push_back(tmp_to_pop6);
                                    for (int i7 = 0; i7 < tmp_to_pop6.size(); i7++)
                                    {
                                        vector<int> tmp_to_pop7 = tmp_to_pop6;
                                        //copy(tmp_to_pop6.begin(), tmp_to_pop6.end(), tmp_to_pop7.begin());
                                        pop_index_noOrder(tmp_to_pop7, i7);
                                        //outVVT.push_back(tmp_to_pop7);
                                        for (int i8 = 0; i8 < tmp_to_pop7.size(); i8++)
                                        {
                                            vector<int> tmp_to_pop8 = tmp_to_pop7;
                                            //copy(tmp_to_pop7.begin(), tmp_to_pop7.end(), tmp_to_pop8.begin());
                                            pop_index_noOrder(tmp_to_pop8, i8);
                                            //outVVT.push_back(tmp_to_pop8);
                                            for (int i9 = 0; i9 < tmp_to_pop8.size(); i9++)
                                            {
                                                vector<int> tmp_to_pop9 = tmp_to_pop8;
                                                //copy(tmp_to_pop8.begin(), tmp_to_pop8.end(), tmp_to_pop9.begin());
                                                pop_index_noOrder(tmp_to_pop9, i9);
                                                //outVVT.push_back(tmp_to_pop9);
                                                for (int i10 = 0; i10 < tmp_to_pop9.size(); i10++)
                                                {
                                                    vector<int> tmp_to_pop10 = tmp_to_pop9;
                                                    //copy(tmp_to_pop9.begin(), tmp_to_pop9.end(), tmp_to_pop10.begin());
                                                    pop_index_noOrder(tmp_to_pop10, i10);
                                                    //outVVT.push_back(tmp_to_pop10);
                                                    for (int i11 = 0; i11 < tmp_to_pop10.size(); i11++)
                                                    {
                                                        vector<int> tmp_to_pop11 = tmp_to_pop10;
                                                        //copy(tmp_to_pop10.begin(), tmp_to_pop10.end(), tmp_to_pop11.begin());
                                                        pop_index_noOrder(tmp_to_pop11, i11);
                                                        //outVVT.push_back(tmp_to_pop11);
                                                        for (int i12 = 0; i12 < tmp_to_pop11.size(); i12++)
                                                        {
                                                            vector<int> tmp_to_pop12 = tmp_to_pop11;
                                                            //copy(tmp_to_pop11.begin(), tmp_to_pop11.end(), tmp_to_pop12.begin());
                                                            pop_index_noOrder(tmp_to_pop12, i12);
                                                            //outVVT.push_back(tmp_to_pop12);
                                                            for (int i13 = 0; i13 < tmp_to_pop12.size(); i13++)
                                                            {
                                                                vector<int> tmp_to_pop13 = tmp_to_pop12;
                                                                //copy(tmp_to_pop12.begin(), tmp_to_pop12.end(), tmp_to_pop13.begin());
                                                                pop_index_noOrder(tmp_to_pop13, i13);
                                                                //outVVT.push_back(tmp_to_pop13);
                                                                for (int i14 = 0; i14 < tmp_to_pop13.size(); i14++)
                                                                {
                                                                    vector<int> tmp_to_pop14 = tmp_to_pop13;
                                                                    //copy(tmp_to_pop13.begin(), tmp_to_pop13.end(), tmp_to_pop14.begin());
                                                                    pop_index_noOrder(tmp_to_pop14, i14);
                                                                    //outVVT.push_back(tmp_to_pop14);
                                                                    for (int i15 = 0; i15 < tmp_to_pop14.size(); i15++)
                                                                    {
                                                                        vector<int> tmp_to_pop15 = tmp_to_pop14;
                                                                        //copy(tmp_to_pop14.begin(), tmp_to_pop14.end(), tmp_to_pop15.begin());
                                                                        pop_index_noOrder(tmp_to_pop15, i15);
                                                                        //outVVT.push_back(tmp_to_pop15);
                                                                        for (int i16 = 0; i16 < tmp_to_pop15.size(); i16++)
                                                                        {
                                                                            vector<int> tmp_to_pop16 = tmp_to_pop15;
                                                                            //copy(tmp_to_pop14.begin(), tmp_to_pop14.end(), tmp_to_pop15.begin());
                                                                            pop_index_noOrder(tmp_to_pop16, i16);
#ifdef USE_OLD16
                                                                            outVVT.push_back(tmp_to_pop16);
#else
                                                                            if (!isInside(outVVT, tmp_to_pop16))
                                                                            {
                                                                                outVVT.push_back(tmp_to_pop16);
                                                                            }
#endif
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return outVVT;
            break;

        default:
            cout << "ERROR : out of range !" << endl;
            outVVT.push_back(vec);
            return outVVT;
            break;
        }
    }
}

//partus chart
string partus_chart(int varS, vector<int> oneS, vector<int> dontS, bool just_inside_data, bool row0simple, int col0offest, bool addComplexRow0, bool addComplexRow0_sidebar, bool addTTL, bool rmCol0);
string beautifulChart(vector<vector<string>> incomeVector, bool ifNeedUpDown, bool ifNeedSideBar, bool needBlankBuffer, bool ifNeedDetach, bool blankBufferFront);
//toABCDEFG
string toABCDEFG(vector<int> targ, int varS);
string phraseABCDEFG(string si);
string bitPLUM(string bitS);
string abcdefg(int indexI);
vector<int> abcedfgToOnesDont(string si, int varS);
string remove_from_string(string targ, string si);

//======prime implicant essential final result min. SOP======
string charVector2string(vector<char> income)
{
    vector<char>::iterator ir_char;
    string tmp_str;
    for (ir_char = income.begin(); ir_char != income.end(); ir_char++)
    {
        tmp_str += (*ir_char);
    }
    return tmp_str;
}
#ifndef BECAUSE_K_MAP_WILL_ALWAYSE_FORM_MIN_SOP_DISABLE_PATRIC_METHOD
class result_prime_imp_2min
{
public:
    result_prime_imp_2min(vector<char> bit_set, vector<int> value_set)
    {
        this->bit_d = bit_set;
        this->value_d = value_set;
        this->codic_d = count_this_d;
        count_this_d++;
    }
    vector<char> bit() { return this->bit_d; }
    vector<int> value() { return this->value_d; }
    int codic() { return this->codic_d; }
    vector<char> bit(vector<char> setI)
    {
        this->bit_d = setI;
        return setI;
    }
    vector<int> value(vector<int> setI)
    {
        this->value_d = setI;
        return setI;
    }
    int codic(int setI)
    {
        this->codic_d = setI;
        return setI;
    }
    static int count_this() { return count_this_d; }
    static int count_this(int INI)
    {
        count_this_d = INI;
        return count_this_d;
    }
    static vector<result_prime_imp_2min> list_this;
    static vector<result_prime_imp_2min>::iterator ir;
    static void add(vector<char> bit_set, vector<int> value_set)
    {
        result_prime_imp_2min tmp(bit_set, value_set);
        list_this.push_back(tmp);
    }
    /*static void init()
    {
        count_this_d = 0;
    }*/
    static vector<int> list_all_value(vector<int> dontcareI)
    {
        vector<int> tmp;
        vector<int>::iterator ir_tmp;
        for (result_prime_imp_2min::ir_for_list_all_value = result_prime_imp_2min::list_this.begin(); result_prime_imp_2min::ir_for_list_all_value != result_prime_imp_2min::list_this.end(); result_prime_imp_2min::ir_for_list_all_value++)
        {
            vector<int> tmp2;
            vector<int>::iterator ir_tmp2;
            tmp2 = (*(result_prime_imp_2min::ir_for_list_all_value)).value();
            for (ir_tmp2 = tmp2.begin(); ir_tmp2 != tmp2.end(); ir_tmp2++)
            {
                if (tmp.size() != 0)
                {
                    bool existB = false;
                    for (ir_tmp = tmp.begin(); ir_tmp != tmp.end(); ir_tmp++)
                    {
                        if ((*ir_tmp) == (*ir_tmp2))
                        {
                            existB = true;
                        }
                    }
                    if (existB == false)
                    {
                        vector<int>::iterator iri;
                        bool canplugin = true;
                        for (iri = dontcareI.begin(); iri != dontcareI.end(); iri++)
                        {
                            if ((*iri) == (*ir_tmp2))
                            {
                                canplugin = false;
                            }
                        }
                        if (canplugin)
                        {
                            tmp.push_back(*ir_tmp2);
                        }
                    }
                }
                else
                {
                    vector<int>::iterator iri;
                    bool canplugin = true;
                    for (iri = dontcareI.begin(); iri != dontcareI.end(); iri++)
                    {
                        if ((*iri) == (*ir_tmp2))
                        {
                            canplugin = false;
                        }
                    }
                    if (canplugin)
                    {
                        tmp.push_back(*ir_tmp2);
                    }
                }
            }
        }
        sort(tmp.begin(), tmp.end());
        list_all_value_copy = tmp;
        for (int i = 0; i < tmp.size(); i++)
        {
            vector<int> tmp_vi;
            LAVresault_d.push_back(tmp_vi);
        }
        return tmp;
    }
    vector<bool> pic_array()
    {
        //call after list_all_value was callED !
        vector<bool> outvb;
        for (int i = 0; i < list_all_value_copy.size(); i++)
        {
            outvb.push_back(false);
        }
        vector<int>::iterator iri;
        int roundCount = 0;
        for (iri = list_all_value_copy.begin(); iri != list_all_value_copy.end(); iri++)
        {
            vector<int>::iterator ir2;
            for (ir2 = (this->value_d).begin(); ir2 != (this->value_d).end(); ir2++)
            {
                if ((*ir2) == (*iri))
                {
                    outvb[roundCount] = true;
                    LAVresault_d[roundCount].push_back(this->codic_d);
                }
            }
            roundCount++;
        }
        return outvb;
    }
    string bitPLUM()
    {
        string outs = "";
        vector<char>::iterator irc;
        int roundCount = 0;
        for (irc = (this->bit_d).begin(); irc != (this->bit_d).end(); irc++)
        {
            if ((*irc) == '-')
            {
                //no move
            }
            else if ((*irc) == '1')
            {
                outs += abcdefg(roundCount);
                outs += char_plum_blank;
            }
            else if ((*irc) == '0')
            {
                outs += abcdefg(roundCount);
                outs += char_plum;
            }
            else
            {
                //dont come here
            }
            roundCount++;
        }
        return outs;
    }
    static void before_recall_picarray_or_listAllValue_need_clear_LAVresault_first()
    {
        LAVresault_d.clear();
    }
    bool is_extential()
    {
        bool onlyone = false;
        vector<int>::iterator irviv;
        for (irviv = (this->value_d).begin(); irviv != (this->value_d).end(); irviv++)
        {
            vector<int>::iterator irviv2;
            int round_count = 0;
            for (irviv2 = list_all_value_copy.begin(); irviv2 != list_all_value_copy.end(); irviv2++)
            {
                if ((*irviv2) == (*irviv))
                {
                    break;
                }
                round_count++;
            }
            if (LAVresault_d[round_count].size() == 1)
            {
                onlyone = true;
                break;
            }
        }
        return onlyone;
    }

    static vector<vector<int>> LAVresault()
    {
        return LAVresault_d;
    }

private:
    vector<char> bit_d;
    vector<int> value_d;
    int codic_d;
    static int count_this_d;
    static vector<result_prime_imp_2min>::iterator ir_for_list_all_value;
    static vector<int> list_all_value_copy;
    static vector<vector<int>> LAVresault_d;
    static string abcdefg(int indexI)
    {
        //need DEFINE ABCDEFG START
#ifdef ABCDEFG_START
        string startI = ABCDEFG_START;
#else
        string startI = "A";
#endif
        bool stats_of_abc = false;
        if (startI[0] >= 'A' && startI[0] <= 'Z')
        {
            stats_of_abc = false;
        }
        else if ((startI[0] >= 'a' && startI[0] <= 'z'))
        {
            stats_of_abc = true;
        }
        else
        {
            stats_of_abc = false;
        }
        string outs = "";
        outs += ((char)(indexI + startI[0]));
        if (stats_of_abc)
        {
            if (outs[0] > 'z')
            {
                char tmp = (indexI + startI[0] - 'z' - 1 + 'A');
                outs[0] = tmp;
            }
        }
        else
        {
            if (outs[0] > 'Z')
            {
                char tmp = (indexI + startI[0] - 'Z' - 1 + 'a');
                outs[0] = tmp;
            }
        }
        return outs;
    }
};

//strange!!! cpp static object needs init. in globe   ....   wtf!?!
vector<result_prime_imp_2min> result_prime_imp_2min::list_this;
int result_prime_imp_2min::count_this_d = 0; //humm..... so my private is a joke for you???
vector<result_prime_imp_2min>::iterator result_prime_imp_2min::ir;
vector<result_prime_imp_2min>::iterator result_prime_imp_2min::ir_for_list_all_value;
vector<int> result_prime_imp_2min::list_all_value_copy;
vector<vector<int>> result_prime_imp_2min::LAVresault_d;
/*
from h2 class
*/
vector<bool> GetArrayofByteFromInt(int number, int bit)
{
    vector<bool> chars;
    if (bit <= 0 || bit > 32)
    {
        return chars;
    }
    if (number == 0)
    {
        for (int i = 0; i < bit; i++)
        {
            chars.push_back(false);
        }
        return chars;
    }
    if (number >= pow(float(2), float(bit)))
    {
        return chars;
    }
    int tmp = number;
    for (int i = bit - 1; i >= 0; i--)
    {
        bool yesno = false;
        if (tmp >= pow(float(2), float(i)))
        {
            yesno = true;
            tmp -= int(pow(float(2), float(i)));
        }
        else
        {
            yesno = false;
        }
        chars.push_back(yesno);
    }
    return chars;
}

vector<char> VectorBoolToVectorChar(vector<bool> VectorBoolInput)
{
    vector<char> VectorCharReturn;
    vector<bool>::iterator irVectorBoolInput;
    for (irVectorBoolInput = VectorBoolInput.begin(); irVectorBoolInput != VectorBoolInput.end(); irVectorBoolInput++)
    {
        VectorCharReturn.push_back(*irVectorBoolInput ? '1' : '0');
    }
}

vector<vector<vector<int>>> CONVEY2RT(vector<vector<int>> vi)
{
    vector<vector<vector<int>>> outv;
    vector<int> tms_f;
    vector<vector<int>> emp_f;
    vector<int>::iterator irc2;
    vector<vector<int>>::iterator irc1;
    for (irc1 = vi.begin(); irc1 != vi.end(); irc1++)
    {
        emp_f.clear();
        for (irc2 = (*irc1).begin(); irc2 != (*irc1).end(); irc2++)
        {
            tms_f.clear();
            tms_f.push_back(*irc2);
            emp_f.push_back(tms_f);
        }
        outv.push_back(emp_f);
    }
    return outv;
}
bool COMP_vector_vector_int(vector<vector<int>> v1, vector<vector<int>> v2)
{ //declare bheind ... then vector.int
    vector<vector<int>>::iterator ir;
    bool outb = true;
    for (ir = v1.begin(); ir != v1.end(); ir++)
    {
        vector<vector<int>>::iterator ir2;
        bool have_inside = false;
        for (ir2 = v2.begin(); ir2 != v2.end(); ir2++)
        {
            if (COMP_vector_int((*ir), (*ir2)))
            {
                have_inside = true;
                break;
            }
        }
        if (have_inside != true)
        {
            outb = false;
        }
    }
    return (v1.size() == v2.size()) ? outb : false;
}
string print_rt(vector<vector<vector<int>>> vvvii)
{
    string outs = "";
    vector<vector<vector<int>>>::iterator rvi;
    for (rvi = vvvii.begin(); rvi != vvvii.end(); rvi++)
    {
        outs += "(";
        vector<vector<int>>::iterator irvvi;
        //cout << "stage2.size()=" << to_string(rt[0].size()) << endl;
        for (irvvi = (*rvi).begin(); irvvi != (*rvi).end(); irvvi++)
        {
            vector<int>::iterator irvi;

            for (irvi = (*irvvi).begin(); irvi != (*irvvi).end(); irvi++)
            {
                outs += "'";
                outs += to_string(*irvi);
                outs += "'";
            }
            outs += "+";
        }
        outs.pop_back();
        outs += ")";
    }
    return outs;
}
bool COVERbird(vector<int> v1, vector<int> v2)
{
    if (v1.size() != 0 && v2.size() != 0 && v1.size() != v2.size())
    {
        if (v1.size() > v2.size())
        {
            if (v1.size() - v2.size() == 1)
            {
                vector<int>::iterator ir;
                for (ir = v2.begin(); ir != v2.end(); ir++)
                {
                    vector<int>::iterator ir2;
                    bool bingo = false;
                    for (ir2 = v1.begin(); ir2 != v1.end(); ir2++)
                    {
                        if ((*ir) == (*ir2))
                        {
                            bingo = true;
                            break;
                        }
                    }
                    if (bingo == false)
                    {
                        return false;
                    }
                }
                return true;
            }
            else
            {
                //rtf
                return false;
            }
        }
        else
        {
            if (v2.size() - v1.size() == 1)
            {
                vector<int>::iterator ir;
                for (ir = v1.begin(); ir != v1.end(); ir++)
                {
                    vector<int>::iterator ir2;
                    bool bingo = false;
                    for (ir2 = v2.begin(); ir2 != v2.end(); ir2++)
                    {
                        if ((*ir) == (*ir2))
                        {
                            bingo = true;
                            break;
                        }
                    }
                    if (bingo == false)
                    {
                        return false;
                    }
                }
                return true;
            }
            else
            {
                //rtf
                return false;
            }
        }
    }
    else
    {
        return false;
    }
}
vector<vector<vector<int>>> rteeemain(vector<vector<int>> eee)
{
    vector<vector<vector<int>>> rt;
    vector<int> tms;
    vector<vector<int>> emp;
    vector<vector<int>> conVey;
    vector<int> tmp_vi;
    switch (USE_EXAMPLE_STEP_2_DATA)
    {
    case 0:
        tms.push_back(1);
        emp.push_back(tms);
        tms.clear();
        tms.push_back(2);
        emp.push_back(tms);
        rt.push_back(emp);
        tms.clear();
        emp.clear();
        tms.push_back(1);
        emp.push_back(tms);
        tms.clear();
        tms.push_back(3);
        emp.push_back(tms);
        rt.push_back(emp);
        tms.clear();
        emp.clear();
        tms.push_back(2);
        emp.push_back(tms);
        tms.clear();
        tms.push_back(4);
        emp.push_back(tms);
        rt.push_back(emp);
        tms.clear();
        emp.clear();
        tms.push_back(3);
        emp.push_back(tms);
        tms.clear();
        tms.push_back(5);
        emp.push_back(tms);
        rt.push_back(emp);
        tms.clear();
        emp.clear();
        tms.push_back(4);
        emp.push_back(tms);
        tms.clear();
        tms.push_back(6);
        emp.push_back(tms);
        rt.push_back(emp);
        tms.clear();
        emp.clear();
        tms.push_back(5);
        emp.push_back(tms);
        tms.clear();
        tms.push_back(6);
        emp.push_back(tms);
        rt.push_back(emp);
        tms.clear();
        emp.clear();
        break;
    case 1:
        tms.push_back(1);
        emp.push_back(tms);
        tms.clear();
        tms.push_back(2);
        emp.push_back(tms);
        rt.push_back(emp);
        tms.clear();
        emp.clear();
        tms.push_back(1);
        emp.push_back(tms);
        tms.clear();
        rt.push_back(emp);
        emp.clear();
        tms.push_back(1);
        emp.push_back(tms);
        tms.clear();
        rt.push_back(emp);
        emp.clear();
        tms.push_back(1);
        emp.push_back(tms);
        tms.clear();
        rt.push_back(emp);
        emp.clear();
        tms.push_back(2);
        emp.push_back(tms);
        tms.clear();
        rt.push_back(emp);
        emp.clear();
        tms.push_back(2);
        emp.push_back(tms);
        tms.clear();
        rt.push_back(emp);
        emp.clear();
        tms.push_back(2);
        emp.push_back(tms);
        tms.clear();
        rt.push_back(emp);
        emp.clear();
        tms.push_back(3);
        emp.push_back(tms);
        tms.clear();
        rt.push_back(emp);
        emp.clear();
        break;
    case 2:
        tmp_vi.push_back(2);
        conVey.push_back(tmp_vi);
        tmp_vi.clear();
        tmp_vi.push_back(1);
        tmp_vi.push_back(2);
        tmp_vi.push_back(3);
        conVey.push_back(tmp_vi);
        tmp_vi.clear();
        tmp_vi.push_back(3);
        conVey.push_back(tmp_vi);
        tmp_vi.clear();
        tmp_vi.push_back(1);
        tmp_vi.push_back(4);
        conVey.push_back(tmp_vi);
        tmp_vi.clear();
        tmp_vi.push_back(1);
        tmp_vi.push_back(2);
        tmp_vi.push_back(3);
        tmp_vi.push_back(4);
        conVey.push_back(tmp_vi);
        tmp_vi.clear();
        tmp_vi.push_back(4);
        conVey.push_back(tmp_vi);
        tmp_vi.clear();
        rt = CONVEY2RT(conVey);
        break;
    default:
        rt = CONVEY2RT(eee);
        break;
    }
    if (rt.size() != 0)
    {
        //cout << "check point into !..." << endl;
        while (rt.size() > 1)
        {
            //cout << "while" << endl;
            vector<vector<vector<int>>>::iterator ir;
            for (ir = rt.begin(); ir != rt.end(); ir++)
            {
                //noMove
            }
            ir--;
            vector<vector<int>> bk1 = *ir;
            ir--;
            vector<vector<int>> bk2 = *ir;
            rt.pop_back();
            rt.pop_back();
            vector<vector<int>>::iterator iri1;
            vector<vector<int>> nt;
            /*
            for all vector no rep.
            @ layr. 2 concider. cover bird aka sum(or) cover bird!
            */
            for (iri1 = bk1.begin(); iri1 != bk1.end(); iri1++)
            {
                vector<vector<int>>::iterator iri2;

                for (iri2 = bk2.begin(); iri2 != bk2.end(); iri2++)
                {
                    nt.push_back(listComb(*iri1, *iri2));
                }
            }
            rt.push_back(nt);
            if (STEP2ENABLE == 1)
            {
                for (ir = rt.begin(); ir != rt.end(); ir++)
                {
                    vector<vector<int>>::iterator ir2;
                    for (ir2 = (*ir).begin(); ir2 != (*ir).end(); ir2++)
                    {
                        //cout << "ir2_into_check" << endl;
                        vector<int>::iterator ir3;
                        vector<int> rmd;
                        vector<int>::iterator rm;
                        for (ir3 = (*ir2).begin(); ir3 != (*ir2).end(); ir3++)
                        {
                            if (rmd.size() != 0)
                            {
                                bool cando = true;
                                for (rm = rmd.begin(); rm != rmd.end(); rm++)
                                {
                                    //cout << "six:";
                                    //cout << *ir3;
                                    //cout << "=?=";
                                    //cout << *rm;
                                    //cout << endl;
                                    if ((*ir3) == (*rm))
                                    {
                                        cando = false;
                                        break;
                                    }
                                }
                                if (cando)
                                {
                                    rmd.push_back(*ir3);
                                }
                            }
                            else
                            {
                                rmd.push_back(*ir3);
                            }
                        }
                        (*ir2) = rmd;
                        //print_rt(rt);
                    }
                }
                if (SHOW_STEP2_STEP_MOD == 1)
                {
                    cout << "element_mod : ";
                    cout << print_rt(rt) << endl;
                }
                for (ir = rt.begin(); ir != rt.end(); ir++)
                {
                    vector<vector<int>>::iterator ir2;
                    vector<vector<int>> rmd;
                    vector<vector<int>>::iterator rm;
                    for (ir2 = (*ir).begin(); ir2 != (*ir).end(); ir2++)
                    {
                        if (rmd.size() != 0)
                        {
                            bool cando = true;
                            for (rm = rmd.begin(); rm != rmd.end(); rm++)
                            {
                                if (COMP_vector_int((*ir2), (*rm)))
                                {
                                    cando = false;
                                    break;
                                }
                            }
                            if (cando)
                            {
                                rmd.push_back(*ir2);
                            }
                        }
                        else
                        {
                            rmd.push_back(*ir2);
                        }
                    }
                    (*ir) = rmd;
                }
                if (SHOW_STEP2_STEP_MOD == 1)
                {
                    cout << "ly2_mod : ";
                    cout << print_rt(rt) << endl;
                }
                vector<vector<vector<int>>> rmd;
                vector<vector<vector<int>>>::iterator rm;
                for (ir = rt.begin(); ir != rt.end(); ir++)
                {
                    if (rmd.size() != 0)
                    {
                        bool cando = true;
                        for (rm = rmd.begin(); rm != rmd.end(); rm++)
                        {
                            if (COMP_vector_vector_int((*ir), (*rm)))
                            {
                                cando = false;
                                break;
                            }
                        }
                        if (cando)
                        {
                            rmd.push_back(*ir);
                        }
                    }
                    else
                    {
                        rmd.push_back(*ir);
                    }
                }
                rt = rmd;
                if (SHOW_STEP2_STEP_MOD == 1)
                {
                    cout << "ly3_mod : ";
                    cout << print_rt(rt) << endl;
                }
                //cover bird effect
                vector<vector<vector<int>>>::iterator bird_ir;
                for (bird_ir = rt.begin(); bird_ir != rt.end(); bird_ir++)
                {
                    vector<vector<int>> targ_rp;
                    vector<vector<int>>::iterator irvib;
                    for (irvib = (*bird_ir).begin(); irvib != (*bird_ir).end(); irvib++)
                    {
                        vector<vector<int>>::iterator irvib2;
                        bool have_bird = false;
                        bool cov_ed = false;
                        for (irvib2 = (*bird_ir).begin(); irvib2 != (*bird_ir).end(); irvib2++)
                        {
                            if (COMP_vector_int((*irvib), (*irvib2)) == false)
                            {
                                if (COVERbird((*irvib), (*irvib2)))
                                {
                                    have_bird = true;
                                    if ((*irvib).size() < (*irvib2).size())
                                    {
                                        if (cov_ed == false)
                                        {
                                            targ_rp.push_back(*irvib);
                                            cov_ed = true;
                                        }
                                    }
                                }
                            }
                        }
                        if (have_bird == false)
                        {
                            targ_rp.push_back(*irvib);
                        }
                    }
                    *bird_ir = targ_rp;
                }
                if (SHOW_STEP2_STEP_MOD == 1)
                {
                    cout << "bird_mod : ";
                    cout << print_rt(rt) << endl;
                    ;
                }
            }
            //print_rt(rt);
        }
    }
    cout << print_rt(rt) << endl;
    return rt;
}
#endif
//===========================================================

int main()
{
    dataSetUp();
    output_kmap_string = partus_chart(VARs, ones, dontcares, DEFINE_just_inside_data, DEFINE_row0simple, DEFINE_col0offest, DEFINE_addComplexRow0, DEFINE_addComplexRow0_sidebar, DEFINE_addTTL, DEFAULT_rmCol0);
    cout << output_kmap_string;
    vector<int>::iterator ir;
    vector<vector<int>> all_possible_maxgroup;
    cout << "doing grouping ..." << endl;
    int round_count = 0;
    for (ir = ones.begin(); ir != ones.end(); ir++)
    {
        round_count++;
        //progress bar
        int well_num = (int)((float)progress_bar_length * (float)((float)round_count / (float)(ones.size() + 1)));
        //cout << well_num;
        for (int i = 0; i < well_num; i++)
        {
            cout << "#";
        }
        for (int i = 0; i < progress_bar_length - well_num; i++)
        {
            cout << ".";
        }
        cout << "step ";
        cout << round_count;
        cout << " of ";
        cout << ones.size() + 1;
        cout << "\r";
        //cout << "max group of ";
        //cout << (*ir);
        //cout << " : " << endl;
        vector<vector<int>> tmpVV = maxGroup(*ir, VARs, ones, dontcares);
        vector<vector<int>>::iterator irvv;
        //cout << "size : ";
        //cout << to_string(tmpVV.size()) << endl;
        for (irvv = tmpVV.begin(); irvv != tmpVV.end(); irvv++)
        {
            //cout << guide(*irvv) << endl;
            if (all_possible_maxgroup.empty() == false)
            {
                if (isInside(all_possible_maxgroup, *irvv) == false)
                {
                    all_possible_maxgroup.push_back(*irvv);
                }
            }
            else
            {
                all_possible_maxgroup.push_back(*irvv);
            }
        }
    }
    for (int i = 0; i < progress_bar_length; i++)
    {
        cout << "#";
    }
    cout << "step ";
    cout << ones.size() + 1;
    cout << " of ";
    cout << ones.size() + 1;
    cout << "\r";
    for (int i = 0; i < progress_bar_length * 2; i++)
    {
        cout << " ";
    }
    cout << "\rall max possible group" << endl;
    vector<vector<int>>::iterator irvv;
    for (irvv = all_possible_maxgroup.begin(); irvv != all_possible_maxgroup.end(); irvv++)
    {
        cout << guide(*irvv) << endl;
        string cout_toABCDEFG;
        cout_toABCDEFG = toABCDEFG(*irvv, VARs);
        cout << cout_toABCDEFG << endl;
        output_group_string += cout_toABCDEFG;
        output_group_string += (irvv + 1 == all_possible_maxgroup.end()) ? "" : OUTPUTPLUSBLANK;

#ifndef BECAUSE_K_MAP_WILL_ALWAYSE_FORM_MIN_SOP_DISABLE_PATRIC_METHOD
        vector<char> tmp_junk;
        tmp_junk.push_back('N');
        tmp_junk.push_back('U');
        tmp_junk.push_back('L');
        tmp_junk.push_back('L');
        result_prime_imp_2min::add(tmp_junk, *irvv);
#endif
    }

    //cout << remove_from_string(phraseABCDEFG(A11002), REMOVE_DASH) << endl;
    //cout << guide(abcedfgToOnesDont("ad", 4)) << endl;
    //cout << guide(abcedfgToOnesDont("a'bc", 4)) << endl;
    //cout << guide(abcedfgToOnesDont("c'd", 4)) << endl;
    //cout << "ok" << endl;

#ifndef BECAUSE_K_MAP_WILL_ALWAYSE_FORM_MIN_SOP_DISABLE_PATRIC_METHOD
    vector<vector<string>> print_chart;
    vector<string> row_print;
    print_chart.clear();
    cout << "============prime implicant chart=============" << endl;
    row_print.clear();
    if (prime_implicant_char_show_bit_and_value)
    {
        row_print.push_back("bit");
    }
    row_print.push_back("bitPLUM");
    if (prime_implicant_char_show_bit_and_value)
    {
        row_print.push_back("value");
    }
    if (prime_implicant_char_show_codic)
    {
        row_print.push_back("codic");
    }
    vector<int> tmp_garbage_empty;
    vector<int> lav = result_prime_imp_2min::list_all_value(tmp_garbage_empty);
    vector<int>::iterator irviLAV;
    for (irviLAV = lav.begin(); irviLAV != lav.end(); irviLAV++)
    {
        //row_print.push_back((*irviLAV) ? "X" : "-");
        row_print.push_back(to_string(*irviLAV));
    }
    if (prime_implicant_char_show_EXT)
    {
        row_print.push_back("essential");
    }
    print_chart.push_back(row_print);
    for (result_prime_imp_2min::ir = result_prime_imp_2min::list_this.begin(); result_prime_imp_2min::ir != result_prime_imp_2min::list_this.end(); result_prime_imp_2min::ir++)
    {
        row_print.clear();
        if (prime_implicant_char_show_bit_and_value)
        {
            row_print.push_back(charVector2string((*(result_prime_imp_2min::ir)).bit()));
        }
        //row_print.push_back((*(result_prime_imp_2min::ir)).bitPLUM());
        row_print.push_back(toABCDEFG((*(result_prime_imp_2min::ir)).value(), VARs));
        if (prime_implicant_char_show_bit_and_value)
        {
            row_print.push_back(guide((*(result_prime_imp_2min::ir)).value()));
        }
        if (prime_implicant_char_show_codic)
        {
            row_print.push_back(to_string((*(result_prime_imp_2min::ir)).codic()));
        }
        vector<bool> vb_lav = (*(result_prime_imp_2min::ir)).pic_array();
        vector<bool>::iterator irviLAV2;
        for (irviLAV2 = vb_lav.begin(); irviLAV2 != vb_lav.end(); irviLAV2++)
        {
            row_print.push_back((*irviLAV2) ? "X" : "-");
        }
        print_chart.push_back(row_print);
    }
    if (prime_implicant_char_show_EXT)
    {
        //result_prime_imp_2min::before_recall_picarray_or_listAllValue_need_clear_LAVresault_first();
        //result_prime_imp_2min::list_all_value(dontCareIndex);
        int cycleroundcount = 0;
        for (result_prime_imp_2min::ir = result_prime_imp_2min::list_this.begin(); result_prime_imp_2min::ir != result_prime_imp_2min::list_this.end(); result_prime_imp_2min::ir++)
        {
            print_chart[cycleroundcount + 1].push_back(((*(result_prime_imp_2min::ir)).is_extential()) ? "yes" : "no");
            cycleroundcount++;
        }
    }
    cout << beautifulChart(print_chart, true, true, true, true, false);
    cout << "==============================================" << endl;
    if (show_things_we_puted_in_the_arithmometer)
    {
        cout << "*****************************************" << endl;
        cout << "things we puted in the arithmometer:" << endl;
        vector<vector<int>> pril = result_prime_imp_2min::LAVresault();
        vector<vector<int>>::iterator ir_pril;
        string str_arithmometer_input = "";
        for (ir_pril = pril.begin(); ir_pril != pril.end(); ir_pril++)
        {
            vector<int>::iterator ir_pril2;
            str_arithmometer_input += "(";
            for (ir_pril2 = (*ir_pril).begin(); ir_pril2 != (*ir_pril).end(); ir_pril2++)
            {
                str_arithmometer_input += to_string(*ir_pril2);
                str_arithmometer_input += "+";
            }
            str_arithmometer_input.pop_back();
            str_arithmometer_input += ")";
            //cout << guide(*ir_pril) << endl;
        }
        cout << str_arithmometer_input << endl;
        cout << "*****************************************" << endl;
    }
    vector<vector<vector<int>>> treeinmain = rteeemain(result_prime_imp_2min::LAVresault());
    vector<vector<int>>::iterator irvvitm;
    vector<int> finalsol;
    int countround = 0;
    for (irvvitm = treeinmain[0].begin(); irvvitm != treeinmain[0].end(); irvvitm++)
    {
        if (countround == 0)
        {
            finalsol = (*irvvitm);
        }
        else
        {
            if ((*irvvitm).size() < finalsol.size())
            {
                finalsol = (*irvvitm);
            }
        }
        countround++;
    }
    cout << endl
         << "========================" << endl;
    cout << "final result:" << endl;
    string str_final_result = "";
    for (result_prime_imp_2min::ir = result_prime_imp_2min::list_this.begin(); result_prime_imp_2min::ir != result_prime_imp_2min::list_this.end(); result_prime_imp_2min::ir++)
    {
        vector<int>::iterator frir;
        for (frir = finalsol.begin(); frir != finalsol.end(); frir++)
        {
            if ((*(result_prime_imp_2min::ir)).codic() == (*frir))
            {
                //str_final_result += (*(result_prime_imp_2min::ir)).bitPLUM();
                str_final_result += (toABCDEFG((*(result_prime_imp_2min::ir)).value(), VARs));
                str_final_result += "+";
                break;
            }
        }
    }
    str_final_result.pop_back();
    cout << str_final_result << endl;
    cout << "_________end of the app._____________" << endl;
#endif
    fstream file_out;
    file_out.open("output.txt", ios::out);
    if (!file_out)
    {
        cout << "+-----------------------------------+" << endl;
        cout << "|                                   |" << endl;
        cout << "|    can't write file output.txt    |" << endl;
        cout << "|                                   |" << endl;
        cout << "+-----------------------------------+" << endl;
        exit(1);
    }
    string if234 = (VARs == 2) ? "\nF(A, B) = " : (VARs == 3) ? "\nF(A, B, C) = "
                                                              : "\nF(A, B, C, D) = ";
    file_out << output_kmap_string << "\nprime implcant: " << output_group_string << "\nessential prime implicant: " << output_group_string << if234 << output_group_string << endl;
    file_out.close();
}

void dataSetUp()
{
    switch (USE_DEFAULT_DATA)
    {
    case 0:
        VARs = 4;
        ones.push_back(1);
        ones.push_back(5);
        ones.push_back(6);
        ones.push_back(7);
        ones.push_back(9);
        ones.push_back(11);
        ones.push_back(13);
        ones.push_back(15);
        dontcares.push_back(3);
        dontcares.push_back(14);

        break;
    case 1:
        VARs = 4;
        ones = abcedfgToOnesDont("ad", VARs);
        ones = listComb_without_overlap(ones, abcedfgToOnesDont("a'bc", VARs));
        ones = listComb_without_overlap(ones, abcedfgToOnesDont("c'd", VARs));
        dontcares = abcedfgToOnesDont("a'b'cd", VARs);
        dontcares = listComb_without_overlap(dontcares, abcedfgToOnesDont("abcd'", VARs));
        break;
    case 2:
        VARs = 4;
        ones.push_back(0);
        ones.push_back(4);
        ones.push_back(5);
        ones.push_back(11);
        ones.push_back(10);
        dontcares.push_back(1);
        dontcares.push_back(13);
        dontcares.push_back(15);
        dontcares.push_back(14);

        break;
    case 3:
        VARs = 3;
        ones.push_back(0);
        ones.push_back(2);
        ones.push_back(3);
        dontcares.push_back(1);
        dontcares.push_back(7);

        break;
    case 4:
        VARs = 2;
        ones.push_back(0);
        dontcares.push_back(1);

        break;
    default:

        std::ifstream ifs("input.txt", std::ios::in);
        if (!ifs.is_open())
        {
            cout << "+-----------------------------------+" << endl;
            cout << "|                                   |" << endl;
            cout << "|     can't read file input.txt     |" << endl;
            cout << "|                                   |" << endl;
            cout << "+-----------------------------------+" << endl;
            break;
        }

        std::string strifs((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
        cout << strifs << endl;
        ifs.close();
        //std::regex newlines_re("\n+");
        //auto result = std::regex_replace(str, newlines_re, "");
        string::iterator StringIteratorVMD;
        vector<char> VectorCharV;
        vector<char> VectorCharM;
        vector<char> VectorCharD;
        int inTheRiver = 0;
        for (StringIteratorVMD = strifs.begin(); StringIteratorVMD != strifs.end(); StringIteratorVMD++)
        {
            if (*StringIteratorVMD == 'v')
            {
                inTheRiver = 1;
                continue;
            }
            if (*StringIteratorVMD == 'm')
            {
                inTheRiver = 2;
                continue;
            }
            if (*StringIteratorVMD == 'd')
            {
                inTheRiver = 3;
                continue;
            }
            if (*StringIteratorVMD == '\n')
            {
                inTheRiver = 0;
                continue;
            }
            switch (inTheRiver)
            {
            case 0:
                /* code */
                break;
            case 1:
                VectorCharV.push_back(*StringIteratorVMD);
                break;
            case 2:
                VectorCharM.push_back(*StringIteratorVMD);
                break;
            case 3:
                VectorCharD.push_back(*StringIteratorVMD);
                break;
            default:
                break;
            }
        }
        vector<char>::iterator VectorCharIterator_run;
        for (VectorCharIterator_run = VectorCharV.begin(); VectorCharIterator_run != VectorCharV.end(); VectorCharIterator_run++)
        {
            if (*VectorCharIterator_run == '0' ||
                *VectorCharIterator_run == '1' ||
                *VectorCharIterator_run == '2' ||
                *VectorCharIterator_run == '3' ||
                *VectorCharIterator_run == '4' ||
                *VectorCharIterator_run == '5' ||
                *VectorCharIterator_run == '6' ||
                *VectorCharIterator_run == '7' ||
                *VectorCharIterator_run == '8' ||
                *VectorCharIterator_run == '9')
            {
                VARs = *VectorCharIterator_run - '0';
                break;
            }
        }
        vector<char> buffercontainer;
        for (VectorCharIterator_run = VectorCharM.begin(); VectorCharIterator_run != VectorCharM.end(); VectorCharIterator_run++)
        {
            if (*VectorCharIterator_run == '0' ||
                *VectorCharIterator_run == '1' ||
                *VectorCharIterator_run == '2' ||
                *VectorCharIterator_run == '3' ||
                *VectorCharIterator_run == '4' ||
                *VectorCharIterator_run == '5' ||
                *VectorCharIterator_run == '6' ||
                *VectorCharIterator_run == '7' ||
                *VectorCharIterator_run == '8' ||
                *VectorCharIterator_run == '9')
            {
                buffercontainer.push_back(*VectorCharIterator_run);
            }
            if (*VectorCharIterator_run == ',')
            {
                ones.push_back(stoi(charVector2string(buffercontainer)));
                buffercontainer.clear();
            }
        }
        if (buffercontainer.empty() == false)
        {
            ones.push_back(stoi(charVector2string(buffercontainer)));
            buffercontainer.clear();
        }
        for (VectorCharIterator_run = VectorCharD.begin(); VectorCharIterator_run != VectorCharD.end(); VectorCharIterator_run++)
        {
            if (*VectorCharIterator_run == '0' ||
                *VectorCharIterator_run == '1' ||
                *VectorCharIterator_run == '2' ||
                *VectorCharIterator_run == '3' ||
                *VectorCharIterator_run == '4' ||
                *VectorCharIterator_run == '5' ||
                *VectorCharIterator_run == '6' ||
                *VectorCharIterator_run == '7' ||
                *VectorCharIterator_run == '8' ||
                *VectorCharIterator_run == '9')
            {
                buffercontainer.push_back(*VectorCharIterator_run);
            }
            if (*VectorCharIterator_run == ',')
            {
                dontcares.push_back(stoi(charVector2string(buffercontainer)));
                buffercontainer.clear();
            }
        }
        if (buffercontainer.empty() == false)
        {
            dontcares.push_back(stoi(charVector2string(buffercontainer)));
            buffercontainer.clear();
        }
#ifdef PRINT_INPUT_PARSER
        cout << "input Parser :" << endl;
        cout << "\tv :\n\t\t";
        cout << VARs << endl;
        cout << "\tm :\n\t\t";
        cout << guide(ones) << endl;
        cout << "\td :\n\t\t";
        cout << guide(dontcares) << endl;
#endif
        break;
    }
}

bool isVisne(int numb1, int numb2, int vars)
{
    switch (vars)
    {
    case 2:
        switch (numb1)
        {
        case 0:
            if (numb2 == V200U || numb2 == V200L)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 1:
            if (numb2 == V201U || numb2 == V201L)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 2:
            if (numb2 == V202U || numb2 == V202L)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 3:
            if (numb2 == V203U || numb2 == V203L)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;

        default:
            cout << "ERROR :: GOT INTO DETAULT !" << endl;
            return false;
            break;
        }
        break;
    case 3:
        switch (numb1)
        {
        case 0:
            if (numb2 == V300U || numb2 == V300L || numb2 == V300R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 1:
            if (numb2 == V301U || numb2 == V301L || numb2 == V301R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 2:
            if (numb2 == V302U || numb2 == V302L || numb2 == V302R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 3:
            if (numb2 == V303U || numb2 == V303L || numb2 == V303R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 4:
            if (numb2 == V304U || numb2 == V304L || numb2 == V304R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 5:
            if (numb2 == V305U || numb2 == V305L || numb2 == V305R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 6:
            if (numb2 == V306U || numb2 == V306L || numb2 == V306R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 7:
            if (numb2 == V307U || numb2 == V307L || numb2 == V307R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;

        default:
            cout << "ERROR :: GOT INTO DETAULT !" << endl;
            return false;
            break;
        }
        break;
    case 4:
        switch (numb1)
        {
        case 0:
            if (numb2 == V400U || numb2 == V400D || numb2 == V400L || numb2 == V400R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 1:
            if (numb2 == V401U || numb2 == V401D || numb2 == V401L || numb2 == V401R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 2:
            if (numb2 == V402U || numb2 == V402D || numb2 == V402L || numb2 == V402R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 3:
            if (numb2 == V403U || numb2 == V403D || numb2 == V403L || numb2 == V403R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 4:
            if (numb2 == V404U || numb2 == V404D || numb2 == V404L || numb2 == V404R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 5:
            if (numb2 == V405U || numb2 == V405D || numb2 == V405L || numb2 == V405R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 6:
            if (numb2 == V406U || numb2 == V406D || numb2 == V406L || numb2 == V406R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 7:
            if (numb2 == V407U || numb2 == V407D || numb2 == V407L || numb2 == V407R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 8:
            if (numb2 == V408U || numb2 == V408D || numb2 == V408L || numb2 == V408R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 9:
            if (numb2 == V409U || numb2 == V409D || numb2 == V409L || numb2 == V409R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 10:
            if (numb2 == V410U || numb2 == V410D || numb2 == V410L || numb2 == V410R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 11:
            if (numb2 == V411U || numb2 == V411D || numb2 == V411L || numb2 == V411R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 12:
            if (numb2 == V412U || numb2 == V412D || numb2 == V412L || numb2 == V412R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 13:
            if (numb2 == V413U || numb2 == V413D || numb2 == V413L || numb2 == V413R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 14:
            if (numb2 == V414U || numb2 == V414D || numb2 == V414L || numb2 == V414R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        case 15:
            if (numb2 == V415U || numb2 == V415D || numb2 == V415L || numb2 == V415R)
            {
                return true;
            }
            else
            {
                return false;
            }
            break;
        default:
            cout << "ERROR :: GOT INTO DETAULT !" << endl;
            return false;
            break;
        }
        break;
    default:
        cout << "ERROR :: GOT INTO DETAULT !" << endl;
        return false;
        break;
    }
}

vector<int> phraseIntDot(string intDot)
{
#ifdef RECTANGLE_USE_OLD_VERSION
    vector<int> tmp;
    string intTmp = "";
    for (int i = 0; i < intDot.length(); i++)
    {
        if (intDot[i] == '.')
        {
            tmp.push_back(stoi(intTmp));
            intTmp = "";
        }
        else
        {
            intTmp += intDot[i];
        }
    }
    tmp.push_back(stoi(intTmp));
    return tmp;
#else
    vector<int> tmp;
    string intTmp = "";
    for (int i = 0; i < intDot.length(); i++)
    {
        if (intDot[i] == '.')
        {
            tmp.push_back(stoi(intTmp));
            intTmp = "";
        }
        else
        {
            intTmp += intDot[i];
        }
    }
    //tmp.push_back(stoi(intTmp));
    return tmp;
#endif
}

bool COMP_vector_int(vector<int> v1, vector<int> v2)
{ //declare first ... then vector.vector
    vector<int>::iterator ir;
    bool outb = true;
    for (ir = v1.begin(); ir != v1.end(); ir++)
    {
        vector<int>::iterator ir2;
        bool have_inside = false;
        for (ir2 = v2.begin(); ir2 != v2.end(); ir2++)
        {
            if ((*ir) == (*ir2))
            {
                have_inside = true;
                break;
            }
        }
        if (have_inside != true)
        {
            outb = false;
        }
    }
    return (v1.size() == v2.size()) ? outb : false;
}

bool isRectangle(vector<int> targ, int vars)
{
    switch (vars)
    {
    case 2:
        if (COMP_vector_int(targ, phraseIntDot(R204A0)) ||
            COMP_vector_int(targ, phraseIntDot(R202V0)) ||
            COMP_vector_int(targ, phraseIntDot(R202V1)) ||
            COMP_vector_int(targ, phraseIntDot(R202H0)) ||
            COMP_vector_int(targ, phraseIntDot(R202H1)))
        {
            return true;
        }
        else
        {
            return false;
        }
        break;
    case 3:

        if (COMP_vector_int(targ, phraseIntDot(R308A0)) ||
            COMP_vector_int(targ, phraseIntDot(R3S4H0)) ||
            COMP_vector_int(targ, phraseIntDot(R3S4H1)) ||
            COMP_vector_int(targ, phraseIntDot(R3S4H2)) ||
            COMP_vector_int(targ, phraseIntDot(R3S4H3)) ||
            COMP_vector_int(targ, phraseIntDot(R3TH00)) ||
            COMP_vector_int(targ, phraseIntDot(R3TH10)) ||
            COMP_vector_int(targ, phraseIntDot(R3TH20)) ||
            COMP_vector_int(targ, phraseIntDot(R3TH30)) ||
            COMP_vector_int(targ, phraseIntDot(R3TH01)) ||
            COMP_vector_int(targ, phraseIntDot(R3TH11)) ||
            COMP_vector_int(targ, phraseIntDot(R3TH21)) ||
            COMP_vector_int(targ, phraseIntDot(R3TH31)) ||
            COMP_vector_int(targ, phraseIntDot(R3TV00)) ||
            COMP_vector_int(targ, phraseIntDot(R3TV01)) ||
            COMP_vector_int(targ, phraseIntDot(R3TV02)) ||
            COMP_vector_int(targ, phraseIntDot(R3TV03)) ||
            COMP_vector_int(targ, phraseIntDot(R304H0)) || /*error,boooo*/
            COMP_vector_int(targ, phraseIntDot(R304H1)))
        {
            return true;
        }
        else
        {
            return false;
        }

        break;
    case 4:

        if (COMP_vector_int(targ, phraseIntDot(R416A0)) ||
            COMP_vector_int(targ, phraseIntDot(R408H0)) ||
            COMP_vector_int(targ, phraseIntDot(R408H1)) ||
            COMP_vector_int(targ, phraseIntDot(R408H2)) ||
            COMP_vector_int(targ, phraseIntDot(R408H3)) ||
            COMP_vector_int(targ, phraseIntDot(R408V0)) ||
            COMP_vector_int(targ, phraseIntDot(R408V1)) ||
            COMP_vector_int(targ, phraseIntDot(R408V2)) ||
            COMP_vector_int(targ, phraseIntDot(R408V3)) ||
            COMP_vector_int(targ, phraseIntDot(R404H0)) ||
            COMP_vector_int(targ, phraseIntDot(R404H1)) ||
            COMP_vector_int(targ, phraseIntDot(R404H2)) ||
            COMP_vector_int(targ, phraseIntDot(R404H3)) ||
            COMP_vector_int(targ, phraseIntDot(R404V0)) ||
            COMP_vector_int(targ, phraseIntDot(R404V1)) ||
            COMP_vector_int(targ, phraseIntDot(R404V2)) ||
            COMP_vector_int(targ, phraseIntDot(R404V3)) ||
            COMP_vector_int(targ, phraseIntDot(R4S400)) ||
            COMP_vector_int(targ, phraseIntDot(R4S410)) ||
            COMP_vector_int(targ, phraseIntDot(R4S420)) ||
            COMP_vector_int(targ, phraseIntDot(R4S430)) ||
            COMP_vector_int(targ, phraseIntDot(R4S401)) ||
            COMP_vector_int(targ, phraseIntDot(R4S402)) ||
            COMP_vector_int(targ, phraseIntDot(R4S403)) ||
            COMP_vector_int(targ, phraseIntDot(R4S411)) ||
            COMP_vector_int(targ, phraseIntDot(R4S421)) ||
            COMP_vector_int(targ, phraseIntDot(R4S431)) ||
            COMP_vector_int(targ, phraseIntDot(R4S412)) ||
            COMP_vector_int(targ, phraseIntDot(R4S422)) ||
            COMP_vector_int(targ, phraseIntDot(R4S432)) ||
            COMP_vector_int(targ, phraseIntDot(R4S413)) ||
            COMP_vector_int(targ, phraseIntDot(R4S423)) ||
            COMP_vector_int(targ, phraseIntDot(R4S433)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH00)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH10)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH20)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH30)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH01)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH11)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH21)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH31)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH02)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH12)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH22)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH32)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH03)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH13)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH23)) ||
            COMP_vector_int(targ, phraseIntDot(R4TH33)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV00)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV10)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV20)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV30)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV01)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV11)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV21)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV31)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV02)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV12)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV22)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV32)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV03)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV13)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV23)) ||
            COMP_vector_int(targ, phraseIntDot(R4TV33)))
        {
            return true;
        }
        else
        {
            return false;
        }

        break;
    default:
        cout << "ERROR :: GOT INTO DETAULT !" << endl;
        return false;
        break;
    }
}

vector<int> returnVisne(int indexI, int vars)
{
    vector<int> tmp;
    switch (vars)
    {
    case 2:
        for (int i = 0; i < pow(2.0, 2.0); i++)
        {
            if (i != indexI)
            {
                if (isVisne(indexI, i, vars))
                {
                    tmp.push_back(i);
                }
            }
        }
        return tmp;
        break;
    case 3:
        for (int i = 0; i < pow(2.0, 3.0); i++)
        {
            if (i != indexI)
            {
                if (isVisne(indexI, i, vars))
                {
                    tmp.push_back(i);
                }
            }
        }
        return tmp;
        break;
    case 4:
        for (int i = 0; i < pow(2.0, 4.0); i++)
        {
            if (i != indexI)
            {
                if (isVisne(indexI, i, vars))
                {
                    tmp.push_back(i);
                }
            }
        }
        return tmp;
        break;
    default:
        cout << "ERROR :: GOT INTO DETAULT !" << endl;
        return tmp;
        break;
    }
}

vector<vector<int>> maxGroup(int targ, int vars, vector<int> onesIN, vector<int> dontCareIN)
{
    vector<int> sg1;
    vector<vector<int>> sg2;
    vector<int> sievedVisneCopy;
    vector<int> sievedVisne = sieve(returnVisne(targ, vars), onesIN, dontCareIN, sievedVisneCopy);
    sievedVisneCopy = listComb_without_overlap(sievedVisneCopy, sievedVisne);
    if (sievedVisne.size() == 0)
    {
        sg1.push_back(targ);
        sg2.push_back(sg1);
        return sg2;
    }
    else
    {
        while (sievedVisne.size() != 0)
        {
            //cout << sievedVisne.front() << endl;
            vector<int> tmpSieve = sieve(returnVisne(sievedVisne.front(), vars), onesIN, dontCareIN, sievedVisneCopy);
            sievedVisne = listComb_without_overlap(sievedVisne, tmpSieve);
            sievedVisneCopy = listComb_without_overlap(sievedVisneCopy, tmpSieve);
            pop_front_noOrder(sievedVisne);
            //cout << sievedVisne.size() << endl;
            //cout << guide(sievedVisne) << endl;
        }
        bool sustain = true;
        for (int i = 0; i < sievedVisneCopy.size(); i++)
        {
            if (sustain)
            {
                //cout << "check 1" << endl;
                vector<vector<int>> sievedVisneCopyVV = weave_16(sievedVisneCopy, i);
                //cout << "check 2" << endl;
                vector<vector<int>>::iterator ir;
                for (ir = sievedVisneCopyVV.begin(); ir != sievedVisneCopyVV.end(); ir++)
                {
                    //cout << to_string(targ);
                    //cout << " : ";
                    //cout << guide(*ir) << endl;
                    //(*ir).push_back(targ);
                    if (isRectangle(*ir, vars) && find((*ir).begin(), (*ir).end(), targ) != (*ir).end() && (!isInside(sg2, *ir)))
                    {
                        sg2.push_back(*ir);
                        sustain = false;
                        //system("pause");
                        //cout << "============================" << endl;
                        //cout << guide(*ir) << endl;
                        //cout << "============================" << endl;
                    }
                }
            }
        }
        if (sustain)
        {
            cout << "ERROR : can't form max group !" << endl;
            return sg2;
        }
        return sg2;
    }
}

vector<int> sieve(vector<int> targ, vector<int> onesIN, vector<int> dontCareIN, vector<int> history)
{
    vector<int> outV;
    vector<int>::iterator ir;
    for (ir = targ.begin(); ir != targ.end(); ir++)
    {
        if ((find(onesIN.begin(), onesIN.end(), *ir) != onesIN.end() || find(dontCareIN.begin(), dontCareIN.end(), *ir) != dontCareIN.end()) && find(history.begin(), history.end(), *ir) == history.end())
        {
            outV.push_back(*ir);
        }
    }
    //cout << "sieve : ";
    //cout << guide(targ);
    //cout << " -> [ ";
    //cout << guide(history);
    //cout << " ] -> ";
    //cout << guide(outV) << endl;
    return outV;
}

string guide(vector<int> income)
{ //modified -> add empty avoid
    if (income.empty())
    {
        return "";
    }
    else
    {
        vector<int>::iterator ir;
        string outcome = "";
        for (ir = income.begin(); ir != income.end(); ir++)
        {
            int tmp = (*ir);
            outcome += to_string(tmp);
            outcome += ", ";
        }
        outcome.pop_back();
        outcome.pop_back();
        return outcome;
    }
}

bool isInside(vector<vector<int>> vvi, vector<int> vi)
{
#ifdef ISINSIDE_USE_OLD
    bool return_stuff = true;
    vector<int>::iterator ir;

    for (ir = vi.begin(); ir != vi.end(); ir++)
    {
        vector<vector<int>>::iterator vvir;
        int sub_yes = false;
        for (vvir = vvi.begin(); vvir != vvi.end(); vvir++)
        {
            if (find((*vvir).begin(), (*vvir).end(), *ir) != (*vvir).end())
            {
                sub_yes = true;
            }
        }
        if (sub_yes == false)
        {
            return_stuff = false;
            break;
        }
    }
    return return_stuff;
#else
    vector<vector<int>>::iterator ir;
    for (ir = vvi.begin(); ir != vvi.end(); ir++)
    {
        if (COMP_vector_int(*ir, vi))
        {
            return true;
        }
    }
    return false;

#endif
}

string partus_chart(int varS, vector<int> oneS, vector<int> dontS, bool just_inside_data, bool row0simple, int col0offest, bool addComplexRow0, bool addComplexRow0_sidebar, bool addTTL, bool rmCol0)
{
    string outs = "";
    string row0 = "";
    string row1 = "";
    vector<vector<string>> print_chart;
    vector<string> r0w;
    switch (varS)
    {
    case 2:
        if (addTTL)
        {
            outs += "=====Kmap=====\n"; //14char
        }
        if (addComplexRow0)
        {
            if (addComplexRow0_sidebar)
            {
                row0 += "|  \\ A|       |\n";
                row0 += "| B \\ | 0   1 |\n";
            }
            else
            {
                row0 += "  \\ A|       |\n";
                row0 += " B \\ | 0   1 |\n";
            }
        }
        if (row0simple)
        {
            if (!just_inside_data)
            {
                r0w.push_back("B\\A");
            }
            r0w.push_back("0");
            r0w.push_back("1");
            print_chart.push_back(r0w);
        }
        r0w.clear();
        if (!just_inside_data)
        {
            string tmps = "";
            for (int i = 0; i < col0offest + 1; i++)
            {
                tmps += " ";
            }
            tmps += "0";
            r0w.push_back(tmps);
        }
        r0w.push_back((find(oneS.begin(), oneS.end(), 0) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 0) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 2) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 2) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        print_chart.push_back(r0w);
        r0w.clear();
        if (!just_inside_data)
        {
            string tmps = "";
            for (int i = 0; i < col0offest + 1; i++)
            {
                tmps += " ";
            }
            tmps += "1";
            r0w.push_back(tmps);
        }
        r0w.push_back((find(oneS.begin(), oneS.end(), 1) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 1) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 3) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 3) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        print_chart.push_back(r0w);
        break;
    case 3:
        if (addTTL)
        {
            outs += "=========Kmap=========\n"; //14char
        }
        if (addComplexRow0)
        {
            if (addComplexRow0_sidebar)
            {
                row0 += "|  \\AB|               |\n";
                row0 += "| C \\ | 00  01  11  10|\n";
            }
            else
            {
                row0 += "  \\AB|               |\n";
                row0 += " C \\ | 00  01  11  10|\n";
            }
        }
        if (row0simple)
        {
            if (!just_inside_data)
            {
                r0w.push_back("C\\AB");
            }
            r0w.push_back("00");
            r0w.push_back("01");
            r0w.push_back("11");
            r0w.push_back("10");
            print_chart.push_back(r0w);
        }
        r0w.clear();
        if (!just_inside_data)
        {
            string tmps = "";
            for (int i = 0; i < col0offest + 1; i++)
            {
                tmps += " ";
            }
            tmps += "0";
            r0w.push_back(tmps);
        }
        r0w.push_back((find(oneS.begin(), oneS.end(), 0) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 0) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 2) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 2) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 6) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 6) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 4) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 4) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        print_chart.push_back(r0w);
        r0w.clear();
        if (!just_inside_data)
        {
            string tmps = "";
            for (int i = 0; i < col0offest + 1; i++)
            {
                tmps += " ";
            }
            tmps += "1";
            r0w.push_back(tmps);
        }
        r0w.push_back((find(oneS.begin(), oneS.end(), 1) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 1) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 3) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 3) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 7) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 7) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 5) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 5) != dontS.end()) ? "X"
                                                                                                                                     : "0");

        print_chart.push_back(r0w);

        break;
    case 4:
        if (addTTL)
        {
            outs += "=========Kmap=========\n"; //14char
        }
        if (addComplexRow0)
        {
            if (addComplexRow0_sidebar)
            {
                row0 += "|  \\AB|               |\n";
                row0 += "|CD \\ | 00  01  11  10|\n";
            }
            else
            {
                row0 += "  \\AB|               |\n";
                row0 += "CD \\ | 00  01  11  10|\n";
            }
        }
        if (row0simple)
        {
            if (!just_inside_data)
            {
                r0w.push_back("CD\\AB");
            }
            r0w.push_back("00");
            r0w.push_back("01");
            r0w.push_back("11");
            r0w.push_back("10");
            print_chart.push_back(r0w);
        }
        r0w.clear();
        if (!just_inside_data)
        {
            string tmps = "";
            for (int i = 0; i < col0offest; i++)
            {
                tmps += " ";
            }
            tmps += "00";
            r0w.push_back(tmps);
        }
        r0w.push_back((find(oneS.begin(), oneS.end(), 0) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 0) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 4) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 4) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 12) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 12) != dontS.end()) ? "X"
                                                                                                                                       : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 8) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 8) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        print_chart.push_back(r0w);
        r0w.clear();
        if (!just_inside_data)
        {
            string tmps = "";
            for (int i = 0; i < col0offest; i++)
            {
                tmps += " ";
            }
            tmps += "01";
            r0w.push_back(tmps);
        }
        r0w.push_back((find(oneS.begin(), oneS.end(), 1) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 1) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 5) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 5) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 13) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 13) != dontS.end()) ? "X"
                                                                                                                                       : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 9) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 9) != dontS.end()) ? "X"
                                                                                                                                     : "0");

        print_chart.push_back(r0w);
        r0w.clear();
        if (!just_inside_data)
        {
            string tmps = "";
            for (int i = 0; i < col0offest; i++)
            {
                tmps += " ";
            }
            tmps += "11";
            r0w.push_back(tmps);
        }
        r0w.push_back((find(oneS.begin(), oneS.end(), 3) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 3) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 7) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 7) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 15) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 15) != dontS.end()) ? "X"
                                                                                                                                       : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 11) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 11) != dontS.end()) ? "X"
                                                                                                                                       : "0");
        print_chart.push_back(r0w);
        r0w.clear();
        if (!just_inside_data)
        {
            string tmps = "";
            for (int i = 0; i < col0offest; i++)
            {
                tmps += " ";
            }
            tmps += "10";
            r0w.push_back(tmps);
        }
        r0w.push_back((find(oneS.begin(), oneS.end(), 2) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 2) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 6) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 6) != dontS.end()) ? "X"
                                                                                                                                     : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 14) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 14) != dontS.end()) ? "X"
                                                                                                                                       : "0");
        r0w.push_back((find(oneS.begin(), oneS.end(), 10) != oneS.end()) ? "1" : (find(dontS.begin(), dontS.end(), 10) != dontS.end()) ? "X"
                                                                                                                                       : "0");

        print_chart.push_back(r0w);
        break;
    default:
        break;
    }
    row1 += beautifulChart(print_chart, true, true, true, true, false);
    row1 = row1.substr(1, string::npos);
    if (rmCol0)
    {
        size_t index = 0;
        while (true)
        {
            index = row1.find("\n|", index);
            if (index == string::npos)
                break;
            row1.replace(index, 2, "\n");
            index += 1;
        }
        index = 0;
        while (true)
        {
            index = row1.find("\n+", index);
            if (index == string::npos)
                break;
            row1.replace(index, 2, "\n");
            index += 1;
        }
    }
    outs += row0;
    outs += row1;
    return outs;
}

string beautifulChart(vector<vector<string>> incomeVector, bool ifNeedUpDown, bool ifNeedSideBar, bool needBlankBuffer, bool ifNeedDetach, bool blankBufferFront)
{
    list<int> lengthOfAllElementInChart;
    map<int, int> textLength;
    int numbersOfColumn = 0;
    int numbersOfRow = 0;
    vector<vector<string>>::iterator row; //number of row
    vector<string>::iterator col;         //number of columns
    if (DEBUG_BEAUTIFULCHART)
        cout << "call gui chart FUCN. \n\t\tstart print income array...\n";
    for (row = incomeVector.begin(); row != incomeVector.end(); row++)
    {
        int tmp_numOfColumn = 0;

        for (col = row->begin(); col != row->end(); col++)
        {
            string this_element = *col;
            if (DEBUG_BEAUTIFULCHART)
                cout << this_element;
            lengthOfAllElementInChart.push_back(this_element.length());

            auto tmpCompare = textLength.find(tmp_numOfColumn);
            if (tmpCompare != textLength.end())
            {
                if ((tmpCompare->second) < (static_cast<int>((*col).length())))
                {
                    tmpCompare->second = static_cast<int>((*col).length());
                }
                else
                {
                    //noMove
                }
            }
            else
            {
                textLength.insert(pair<int, int>(tmp_numOfColumn, static_cast<int>((*col).length())));
            }
            tmp_numOfColumn++;
        }

        if (DEBUG_BEAUTIFULCHART)
            cout << endl;
        numbersOfColumn = (tmp_numOfColumn > numbersOfColumn) ? tmp_numOfColumn : numbersOfColumn;
        numbersOfRow++;
    }
    auto max_length = max_element(begin(lengthOfAllElementInChart), end(lengthOfAllElementInChart)); // c++11

    if (DEBUG_BEAUTIFULCHART)
        cout << "###########chart info.###########" << endl;
    if (DEBUG_BEAUTIFULCHART)
        cout << "max length of all element in the chart : ";
    if (DEBUG_BEAUTIFULCHART)
        cout << *max_length << endl;
    if (DEBUG_BEAUTIFULCHART)
        cout << "number of row : ";
    if (DEBUG_BEAUTIFULCHART)
        cout << numbersOfRow << endl;
    if (DEBUG_BEAUTIFULCHART)
        cout << "number of column : ";
    if (DEBUG_BEAUTIFULCHART)
        cout << numbersOfColumn << endl;
    if (DEBUG_BEAUTIFULCHART)
        cout << "for all column, length (aka number of char) of each element : " << endl;
    for (int i = 0; i < textLength.size(); i++)
    {
        auto tmpPrintLength = textLength.find(i);
        if (tmpPrintLength != textLength.end())
        {
            if (DEBUG_BEAUTIFULCHART)
                cout << tmpPrintLength->second << ", ";
        }
        else
        {
            if (DEBUG_BEAUTIFULCHART)
                cout << "Error at <tmpPrintLength>";
        }
    }
    if (DEBUG_BEAUTIFULCHART)
        cout << "END" << endl;

    //start graph "fucn start"
    if (DEBUG_BEAUTIFULCHART)
        cout << "************output*************" << endl;
    string output_txt = "";
    string copy_of_output = "";
    if (ifNeedUpDown)
    {
        for (int i = 0; i < textLength.size(); i++)
        {
            auto tmpPrintLength = textLength.find(i);
            if (tmpPrintLength != textLength.end())
            {
                int col_number = tmpPrintLength->second; //maybe is a int
                if (i == 0)
                {
                    if (ifNeedSideBar)
                    {
                        output_txt += char_plus;
                    }
                    else
                    {
                        //noMove
                    }
                }
                else
                {
                    //nomMove
                }
                for (int tmpi = 0; tmpi < (((needBlankBuffer) ? 1 : 0) * blankBuffer) + col_number; tmpi++)
                {
                    output_txt += char_minus;
                }
                output_txt += char_plus;
                //loop back
            }
            else
            {
                //error if got here!
            }
        } //end of loop
        if (ifNeedSideBar)
        {
            //noMove
        }
        else
        { //aka no need side bar
            //remove the last char of output aka '+'
            if (!output_txt.empty())
            { //c++11
                output_txt.pop_back();
            }
        }
        //output append nl
        output_txt += "\n";
        copy_of_output = output_txt;
    }
    //for loop irit every element in my.Char
    numbersOfColumn = 0;
    numbersOfRow = 0;
    for (row = incomeVector.begin(); row != incomeVector.end(); row++)
    {
        int tmp_numOfColumn = 0;

        for (col = row->begin(); col != row->end(); col++)
        {
            if (tmp_numOfColumn == 0)
            {
                if (ifNeedSideBar)
                {
                    output_txt += char_side;
                }
                else
                {
                    //noMove
                }
            }
            else
            {
                output_txt += char_side; //plot have error
            }
            string this_element = *col;
            int var_diff = textLength.find(tmp_numOfColumn)->second - this_element.length() + blankBuffer * ((needBlankBuffer) ? 1 : 0);
            if (var_diff % 2 == 0)
            { //is even
                for (int tmpi = 0; tmpi < var_diff / 2; tmpi++)
                {
                    output_txt += char_blank;
                }
                output_txt += this_element;
                for (int tmpi = 0; tmpi < var_diff / 2; tmpi++)
                {
                    output_txt += char_blank;
                }
            }
            else
            { //is odd
                if (blankBufferFront)
                {
                    for (int tmpi = 0; tmpi < (var_diff + 1) / 2; tmpi++)
                    {
                        output_txt += char_blank;
                    }
                    output_txt += this_element;
                    for (int tmpi = 0; tmpi < (var_diff - 1) / 2; tmpi++)
                    {
                        output_txt += char_blank;
                    }
                }
                else
                { //blank buffer back
                    for (int tmpi = 0; tmpi < (var_diff - 1) / 2; tmpi++)
                    {
                        output_txt += char_blank;
                    }
                    output_txt += this_element;
                    for (int tmpi = 0; tmpi < (var_diff + 1) / 2; tmpi++)
                    {
                        output_txt += char_blank;
                    }
                }
            }
            tmp_numOfColumn++;
        }
        if (ifNeedSideBar)
        {
            output_txt += char_side;
        }
        else
        {
            //noMove
        }
        output_txt += "\n";
        //loop back
        //here plot error
        if (row + 1 != incomeVector.end())
        {
            if (ifNeedDetach)
            {
                output_txt += copy_of_output;
            }
            else
            {
                //noMove
            }
        }
        else
        {
            //come to last row, no move
        }
    }
    if (ifNeedUpDown)
    {
        output_txt += copy_of_output;
    }
    else
    {
        //noMove
    }

    return output_txt;
}

string toABCDEFG(vector<int> targ, int varS)
{
#ifdef RECTANGLE_USE_OLD_VERSION
    return "ERROR ! miss define !";
#else
    switch (varS)
    {
    case 2:
        if (COMP_vector_int(targ, phraseIntDot(R204A0)))
        {
            return bitPLUM(phraseABCDEFG(R204A0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R202V0)))
        {
            return bitPLUM(phraseABCDEFG(R202V0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R202V1)))
        {
            return bitPLUM(phraseABCDEFG(R202V1));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R202H0)))
        {
            return bitPLUM(phraseABCDEFG(R202H0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R202H1)))
        {
            return bitPLUM(phraseABCDEFG(R202H1));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O201)))
        {
            return bitPLUM(phraseABCDEFG(O201));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O202)))
        {
            return bitPLUM(phraseABCDEFG(O202));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O203)))
        {
            return bitPLUM(phraseABCDEFG(O203));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O200)))
        {
            return bitPLUM(phraseABCDEFG(O200));
        }
        else
        {
            return "ERROR :: GOT INTO DETAULT !";
        }
        break;
    case 3:
        if (
            COMP_vector_int(targ, phraseIntDot(R308A0)))
        {
            return bitPLUM(phraseABCDEFG(R308A0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3S4H0)))
        {
            return bitPLUM(phraseABCDEFG(R3S4H0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3S4H1)))
        {
            return bitPLUM(phraseABCDEFG(R3S4H1));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3S4H2)))
        {
            return bitPLUM(phraseABCDEFG(R3S4H2));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3S4H3)))
        {
            return bitPLUM(phraseABCDEFG(R3S4H3));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TH00)))
        {
            return bitPLUM(phraseABCDEFG(R3TH00));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TH10)))
        {
            return bitPLUM(phraseABCDEFG(R3TH10));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TH20)))
        {
            return bitPLUM(phraseABCDEFG(R3TH20));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TH30)))
        {
            return bitPLUM(phraseABCDEFG(R3TH30));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TH01)))
        {
            return bitPLUM(phraseABCDEFG(R3TH01));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TH11)))
        {
            return bitPLUM(phraseABCDEFG(R3TH11));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TH21)))
        {
            return bitPLUM(phraseABCDEFG(R3TH21));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TH31)))
        {
            return bitPLUM(phraseABCDEFG(R3TH31));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TV00)))
        {
            return bitPLUM(phraseABCDEFG(R3TV00));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TV01)))
        {
            return bitPLUM(phraseABCDEFG(R3TV01));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TV02)))
        {
            return bitPLUM(phraseABCDEFG(R3TV02));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R3TV03)))
        {
            return bitPLUM(phraseABCDEFG(R3TV03));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R304H0)))
        {
            return bitPLUM(phraseABCDEFG(R304H0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R304H1)))
        {
            return bitPLUM(phraseABCDEFG(R304H1));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O300)))
        {
            return bitPLUM(phraseABCDEFG(O300));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O301)))
        {
            return bitPLUM(phraseABCDEFG(O301));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O302)))
        {
            return bitPLUM(phraseABCDEFG(O302));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O303)))
        {
            return bitPLUM(phraseABCDEFG(O303));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O304)))
        {
            return bitPLUM(phraseABCDEFG(O304));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O305)))
        {
            return bitPLUM(phraseABCDEFG(O305));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O306)))
        {
            return bitPLUM(phraseABCDEFG(O306));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O307)))
        {
            return bitPLUM(phraseABCDEFG(O307));
        }
        else
        {
            return "ERROR :: GOT INTO DETAULT !";
        }

        break;
    case 4:
        if (
            COMP_vector_int(targ, phraseIntDot(R416A0)))
        {
            return bitPLUM(phraseABCDEFG(R416A0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R408H0)))
        {
            return bitPLUM(phraseABCDEFG(R408H0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R408H1)))
        {
            return bitPLUM(phraseABCDEFG(R408H1));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R408H2)))
        {
            return bitPLUM(phraseABCDEFG(R408H2));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R408H3)))
        {
            return bitPLUM(phraseABCDEFG(R408H3));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R408V0)))
        {
            return bitPLUM(phraseABCDEFG(R408V0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R408V1)))
        {
            return bitPLUM(phraseABCDEFG(R408V1));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R408V2)))
        {
            return bitPLUM(phraseABCDEFG(R408V2));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R408V3)))
        {
            return bitPLUM(phraseABCDEFG(R408V3));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R404H0)))
        {
            return bitPLUM(phraseABCDEFG(R404H0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R404H1)))
        {
            return bitPLUM(phraseABCDEFG(R404H1));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R404H2)))
        {
            return bitPLUM(phraseABCDEFG(R404H2));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R404H3)))
        {
            return bitPLUM(phraseABCDEFG(R404H3));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R404V0)))
        {
            return bitPLUM(phraseABCDEFG(R404V0));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R404V1)))
        {
            return bitPLUM(phraseABCDEFG(R404V1));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R404V2)))
        {
            return bitPLUM(phraseABCDEFG(R404V2));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R404V3)))
        {
            return bitPLUM(phraseABCDEFG(R404V3));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S400)))
        {
            return bitPLUM(phraseABCDEFG(R4S400));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S410)))
        {
            return bitPLUM(phraseABCDEFG(R4S410));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S420)))
        {
            return bitPLUM(phraseABCDEFG(R4S420));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S430)))
        {
            return bitPLUM(phraseABCDEFG(R4S430));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S401)))
        {
            return bitPLUM(phraseABCDEFG(R4S401));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S402)))
        {
            return bitPLUM(phraseABCDEFG(R4S402));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S403)))
        {
            return bitPLUM(phraseABCDEFG(R4S403));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S411)))
        {
            return bitPLUM(phraseABCDEFG(R4S411));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S421)))
        {
            return bitPLUM(phraseABCDEFG(R4S421));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S431)))
        {
            return bitPLUM(phraseABCDEFG(R4S431));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S412)))
        {
            return bitPLUM(phraseABCDEFG(R4S412));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S422)))
        {
            return bitPLUM(phraseABCDEFG(R4S422));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S432)))
        {
            return bitPLUM(phraseABCDEFG(R4S432));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S413)))
        {
            return bitPLUM(phraseABCDEFG(R4S413));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S423)))
        {
            return bitPLUM(phraseABCDEFG(R4S423));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4S433)))
        {
            return bitPLUM(phraseABCDEFG(R4S433));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH00)))
        {
            return bitPLUM(phraseABCDEFG(R4TH00));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH10)))
        {
            return bitPLUM(phraseABCDEFG(R4TH10));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH20)))
        {
            return bitPLUM(phraseABCDEFG(R4TH20));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH30)))
        {
            return bitPLUM(phraseABCDEFG(R4TH30));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH01)))
        {
            return bitPLUM(phraseABCDEFG(R4TH01));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH11)))
        {
            return bitPLUM(phraseABCDEFG(R4TH11));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH21)))
        {
            return bitPLUM(phraseABCDEFG(R4TH21));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH31)))
        {
            return bitPLUM(phraseABCDEFG(R4TH31));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH02)))
        {
            return bitPLUM(phraseABCDEFG(R4TH02));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH12)))
        {
            return bitPLUM(phraseABCDEFG(R4TH12));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH22)))
        {
            return bitPLUM(phraseABCDEFG(R4TH22));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH32)))
        {
            return bitPLUM(phraseABCDEFG(R4TH32));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH03)))
        {
            return bitPLUM(phraseABCDEFG(R4TH03));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH13)))
        {
            return bitPLUM(phraseABCDEFG(R4TH13));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH23)))
        {
            return bitPLUM(phraseABCDEFG(R4TH23));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TH33)))
        {
            return bitPLUM(phraseABCDEFG(R4TH33));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV00)))
        {
            return bitPLUM(phraseABCDEFG(R4TV00));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV10)))
        {
            return bitPLUM(phraseABCDEFG(R4TV10));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV20)))
        {
            return bitPLUM(phraseABCDEFG(R4TV20));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV30)))
        {
            return bitPLUM(phraseABCDEFG(R4TV30));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV01)))
        {
            return bitPLUM(phraseABCDEFG(R4TV01));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV11)))
        {
            return bitPLUM(phraseABCDEFG(R4TV11));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV21)))
        {
            return bitPLUM(phraseABCDEFG(R4TV21));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV31)))
        {
            return bitPLUM(phraseABCDEFG(R4TV31));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV02)))
        {
            return bitPLUM(phraseABCDEFG(R4TV02));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV12)))
        {
            return bitPLUM(phraseABCDEFG(R4TV12));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV22)))
        {
            return bitPLUM(phraseABCDEFG(R4TV22));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV32)))
        {
            return bitPLUM(phraseABCDEFG(R4TV32));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV03)))
        {
            return bitPLUM(phraseABCDEFG(R4TV03));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV13)))
        {
            return bitPLUM(phraseABCDEFG(R4TV13));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV23)))
        {
            return bitPLUM(phraseABCDEFG(R4TV23));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(R4TV33)))
        {
            return bitPLUM(phraseABCDEFG(R4TV33));
        }
        /*bons*/
        else if (
            COMP_vector_int(targ, phraseIntDot(O401)))
        {
            return bitPLUM(phraseABCDEFG(O401));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O402)))
        {
            return bitPLUM(phraseABCDEFG(O402));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O403)))
        {
            return bitPLUM(phraseABCDEFG(O403));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O404)))
        {
            return bitPLUM(phraseABCDEFG(O404));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O405)))
        {
            return bitPLUM(phraseABCDEFG(O405));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O406)))
        {
            return bitPLUM(phraseABCDEFG(O406));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O407)))
        {
            return bitPLUM(phraseABCDEFG(O407));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O408)))
        {
            return bitPLUM(phraseABCDEFG(O408));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O409)))
        {
            return bitPLUM(phraseABCDEFG(O409));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O410)))
        {
            return bitPLUM(phraseABCDEFG(O410));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O411)))
        {
            return bitPLUM(phraseABCDEFG(O411));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O412)))
        {
            return bitPLUM(phraseABCDEFG(O412));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O413)))
        {
            return bitPLUM(phraseABCDEFG(O413));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O414)))
        {
            return bitPLUM(phraseABCDEFG(O414));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O415)))
        {
            return bitPLUM(phraseABCDEFG(O415));
        }
        else if (
            COMP_vector_int(targ, phraseIntDot(O400)))
        {
            return bitPLUM(phraseABCDEFG(O400));
        }
        else
        {

            return "ERROR :: GOT INTO DETAULT !";
        }
    default:
        return "ERROR :: GOT INTO DETAULT !";
        break;
    }
#endif
}
string phraseABCDEFG(string si)
{
#ifdef RECTANGLE_USE_OLD_VERSION
    return "ERROR :: @ RECTANGLE_USE_OLD_VERSION";
#else
    string intTmp = "";
    for (int i = 0; i < si.length(); i++)
    {
        if (si[i] == '.')
        {
            intTmp = "";
        }
        else
        {
            intTmp += si[i];
        }
    }
    return intTmp;
#endif
}
string bitPLUM(string bitS)
{
    vector<char> bit_d;
    for (int i = 0; i < bitS.length(); i++)
    {
        bit_d.push_back(bitS[i]);
    }
    string outs = "";
    vector<char>::iterator irc;
    int roundCount = 0;
    for (irc = (bit_d).begin(); irc != (bit_d).end(); irc++)
    {
        if ((*irc) == '-')
        {
            //no move
        }
        else if ((*irc) == '1')
        {
            outs += abcdefg(roundCount);
            outs += char_plum_blank;
        }
        else if ((*irc) == '0')
        {
            outs += abcdefg(roundCount);
            outs += char_plum;
        }
        else
        {
            //dont come here
        }
        roundCount++;
    }
    return outs;
}

string abcdefg(int indexI)
{
    //need DEFINE ABCDEFG START
#ifdef ABCDEFG_START
    string startI = ABCDEFG_START;
#else
    string startI = "a";
#endif
    bool stats_of_abc = false;
    if (startI[0] >= 'A' && startI[0] <= 'Z')
    {
        stats_of_abc = false;
    }
    else if ((startI[0] >= 'a' && startI[0] <= 'z'))
    {
        stats_of_abc = true;
    }
    else
    {
        stats_of_abc = false;
    }
    string outs = "";
    outs += ((char)(indexI + startI[0]));
    if (stats_of_abc)
    {
        if (outs[0] > 'z')
        {
            char tmp = (indexI + startI[0] - 'z' - 1 + 'A');
            outs[0] = tmp;
        }
    }
    else
    {
        if (outs[0] > 'Z')
        {
            char tmp = (indexI + startI[0] - 'Z' - 1 + 'a');
            outs[0] = tmp;
        }
    }
    return outs;
}

vector<int> abcedfgToOnesDont(string si, int varS)
{
#ifdef USE_OLD_TOO_LONG
    bool error_alt;
    vector<vector<int>> boomopen;
    vector<vector<int>>::iterator ir;
    vector<int> c2;
    c2.push_back(0);
    c2.push_back(2);
    c2.push_back(3);
    c2.push_back(1);
    vector<int> c3;
    c3.push_back(0);
    c3.push_back(2);
    c3.push_back(3);
    c3.push_back(1);
    c3.push_back(4);
    c3.push_back(5);
    c3.push_back(6);
    c3.push_back(7);
    vector<int> c4;
    c4.push_back(0);
    c4.push_back(2);
    c4.push_back(3);
    c4.push_back(1);
    c4.push_back(4);
    c4.push_back(5);
    c4.push_back(6);
    c4.push_back(7);
    c4.push_back(8);
    c4.push_back(9);
    c4.push_back(10);
    c4.push_back(11);
    c4.push_back(12);
    c4.push_back(13);
    c4.push_back(14);
    c4.push_back(15);
    switch (varS)
    {
    case 2:
        error_alt = true;
        for (int i = 0; i < pow(2.0, 2.0); i++)
        {
            boomopen = weave_16(c2, i);
            for (ir = boomopen.begin(); ir != boomopen.end(); ir++)
            {
                //cout << guide(*ir);
                //cout << " -> ";
                //cout << toABCDEFG(*ir, varS) << endl;

                if (toABCDEFG(*ir, varS) == si)
                {
                    error_alt = false;
                    return *ir;
                }
            }
        }
        if (error_alt)
        {
            cout << "ERROR : @ 16" << endl;
        }
        break;
    case 3:
        error_alt = true;
        for (int i = 0; i < pow(2.0, 3.0); i++)
        {
            boomopen = weave_16(c3, i);
            for (ir = boomopen.begin(); ir != boomopen.end(); ir++)
            {
                if (toABCDEFG(*ir, varS) == si)
                {
                    error_alt = false;
                    return *ir;
                }
            }
        }
        if (error_alt)
        {
            cout << "ERROR : @ 16" << endl;
        }
        break;
    case 4:
        error_alt = true;
        for (int i = 0; i < pow(2.0, 4.0); i++)
        {
            boomopen = weave_16(c4, i);
            for (ir = boomopen.begin(); ir != boomopen.end(); ir++)
            {
                cout << guide(*ir) << endl;
                if (toABCDEFG(*ir, varS) == si)
                {
                    error_alt = false;
                    return *ir;
                }
            }
            cout << boomopen.size() << endl;
        }
        if (error_alt)
        {
            cout << "ERROR : @ 16" << endl;
        }
        break;

    default:
        cout << "ERROR :: GOT INTO DETAULT !";

        break;
    }
#else

    if (remove_from_string(phraseABCDEFG(A10101), REMOVE_DASH) == si)
    {
        return phraseIntDot(A10101);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10101),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10101);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10201),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10201);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10202),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10202);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10203),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10203);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10204),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10204);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10301),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10301);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10302),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10302);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10303),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10303);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10304),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10304);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10305),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10305);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10306),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10306);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10401),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10401);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10402),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10402);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10403),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10403);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10404),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10404);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A10501),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10501);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A10601),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10601);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10602),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10602);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10603),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10603);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10604),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10604);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A10701),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10701);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10702),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10702);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10703),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10703);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10704),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10704);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10705),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10705);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10706),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10706);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10707),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10707);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10708),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10708);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10709),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10709);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10710),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10710);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10711),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10711);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10712),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10712);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A10801),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10801);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10802),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10802);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10803),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10803);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10804),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10804);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10805),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10805);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10806),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10806);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10807),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10807);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10808),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10808);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10809),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10809);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10810),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10810);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10811),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10811);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10812),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10812);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A10901),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10901);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10902),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10902);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10903),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10903);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A10904),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A10904);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A11001),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11001);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11002),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11002);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11003),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11003);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11004),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11004);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A11201),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11201);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11202),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11202);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11203),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11203);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11204),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11204);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11205),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11205);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11206),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11206);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11207),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11207);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11208),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11208);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A11301),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11301);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11302),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11302);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11303),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11303);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11304),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11304);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A11401),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11401);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11402),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11402);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11403),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11403);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11404),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11404);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A11501),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11501);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11502),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11502);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11503),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11503);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A11504),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A11504);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A20101),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20101);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A20201),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20201);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20202),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20202);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20203),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20203);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A20301),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20301);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20302),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20302);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20303),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20303);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A20401),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20401);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A20501),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20501);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20502),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20502);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20503),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20503);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A20601),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20601);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20602),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20602);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20603),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20603);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20604),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20604);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20605),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20605);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20606),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20606);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A20701),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20701);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20702),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20702);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20703),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20703);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A20801),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20801);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20802),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20802);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20803),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20803);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A20901),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20901);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20902),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20902);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A20903),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A20903);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A30101),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A30101);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A30201),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A30201);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A30202),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A30202);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A30301),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A30301);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A30401),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A30401);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A30402),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A30402);
    }
    else if (remove_from_string(phraseABCDEFG(

                                    A30501),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A30501);
    }
    else if (remove_from_string(phraseABCDEFG(
                                    A30502),
                                REMOVE_DASH) == si)
    {
        return phraseIntDot(A30502);
    }
    else
    {
        vector<int> errorvi;
        cout << "ERROR @ abcedfgToOnesDont" << endl;
        return errorvi;
    }

#endif
}

string remove_from_string(string targ, string si)
{
    size_t index = 0;
    while (true)
    {
        index = targ.find(si, index);
        if (index == string::npos)
            break;
        targ.replace(index, si.length(), "");
        //index += 1;
    }
    return targ;
}