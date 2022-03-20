#include <stdio.h>

#include "bmp.h"
#include "Redbricks.h"

void main()
{
    bmp_image * img = malloc(sizeof(bmp_image));
    
    redbricks_build(img);
    redbricks_generate(img);

    bmp_details(img);
}