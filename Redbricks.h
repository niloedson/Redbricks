/**
 * @file Redbricks.h
 * @author Nilo Edson (niloedson.ms@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __REDBRICKS_H_
#define __REDBRICKS_H_

#include "bmp.h"

void redbricks_build(bmp_image * img);
void redbricks_generate(bmp_image * img);

void redbricks_print_fileheader(bmp_image * img);
void redbricks_print_infoheader(bmp_image * img);
void redbricks_print_colourpalette(bmp_image * img);
void redbricks_print_data(bmp_image * img);

#endif