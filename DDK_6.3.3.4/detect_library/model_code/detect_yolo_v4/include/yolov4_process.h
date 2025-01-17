#ifndef __YOLOV4_PROCESS__
#define __YOLOV4_PROCESS__

#include "vnn_global.h"
#include "nn_detect_common.h"

typedef unsigned char   uint8_t;

void yolov4_preprocess(input_image_t imageData, uint8_t *ptr);
void yolov4_postprocess(vsi_nn_graph_t *graph, pDetResult resultData);

#endif
