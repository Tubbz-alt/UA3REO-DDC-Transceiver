#ifndef AUDIO_PROCESSOR_h
#define AUDIO_PROCESSOR_h

#include "stm32f4xx_hal.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "arm_math.h"

#define FPGA_AUDIO_BUFFER_SIZE 32
#define FPGA_AUDIO_BUFFER_HALF_SIZE FPGA_AUDIO_BUFFER_SIZE/2
#define APROCESSOR_BLOCK_SIZE 16
#define CLICK_REMOVE_THRESHOLD 0.0152 //peak difference from avg amplitude
#define CLICK_REMOVE_STEPSIZE 0.0000001 //peak difference from avg amplitude
#define RF_AGC_UP_STEPSIZE 1 //audio level control

extern DMA_HandleTypeDef hdma_i2s3_ext_rx;
extern DMA_HandleTypeDef hdma_spi3_tx;

extern void processRxAudio(void);
extern void processTxAudio(void);
extern void initAudioProcessor(void);
extern uint32_t AUDIOPROC_samples;
extern uint32_t AUDIOPROC_TXA_samples;
extern uint32_t AUDIOPROC_TXB_samples;
extern int32_t Processor_AudioBuffer_A[FPGA_AUDIO_BUFFER_SIZE];
extern int32_t Processor_AudioBuffer_B[FPGA_AUDIO_BUFFER_SIZE];
extern uint8_t Processor_AudioBuffer_ReadyBuffer;
extern bool Processor_NeedBuffer;
extern DMA_HandleTypeDef hdma_memtomem_dma2_stream0;
extern DMA_HandleTypeDef hdma_memtomem_dma2_stream1;
extern DMA_HandleTypeDef hdma_memtomem_dma2_stream2;
extern DMA_HandleTypeDef hdma_memtomem_dma2_stream3;
extern uint16_t fpga_index_copy;
extern float32_t Processor_AVG_amplitude;
extern float32_t Processor_TX_MAX_amplitude;
extern float32_t ALC_need_gain;
extern float32_t FPGA_Audio_Buffer_Q_tmp[FPGA_AUDIO_BUFFER_HALF_SIZE];
extern float32_t FPGA_Audio_Buffer_I_tmp[FPGA_AUDIO_BUFFER_HALF_SIZE];

#endif
