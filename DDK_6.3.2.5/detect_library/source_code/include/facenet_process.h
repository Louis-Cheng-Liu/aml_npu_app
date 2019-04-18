#ifndef __FACENET_PROCESS__
#define __FACENET_PROCESS__


#include "vnn_global.h"
#include "nn_detect_common.h"

typedef unsigned char   uint8_t;

void facenet_preprocess(input_image_t imageData, uint8_t **input_data_ptr);
void facenet_postprocess(vsi_nn_graph_t *graph, pDetResult resultData);

#endif