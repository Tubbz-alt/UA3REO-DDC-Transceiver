#ifndef LCD_Layout_h
#define LCD_Layout_h

#include "lcd.h"
#include "fonts.h"

// decoration of screen elements

#define BACKGROUND_COLOR COLOR_BLACK                          // background
#define COLOR_BUTTON_TEXT rgb888torgb565(32, 171, 17)         // active color of the status button
#define COLOR_BUTTON_INACTIVE_TEXT rgb888torgb565(50, 50, 50) // inactive color

//clock
#define LAY_CLOCK_POS_Y 17
#define LAY_CLOCK_POS_HRS_X 405
#define LAY_CLOCK_POS_MIN_X 430
#define LAY_CLOCK_POS_SEC_X 455
#define LAY_CLOCK_FONT (GFXfont *)&FreeSans9pt7b

// top row of status buttons
#define LAY_TOPBUTTONS_X1 0
#define LAY_TOPBUTTONS_X2 (LCD_WIDTH - 1)
#define LAY_TOPBUTTONS_Y1 0
#define LAY_TOPBUTTONS_Y2 65
#define LAY_TOPBUTTONS_LR_MARGIN 8

#define LAY_TOPBUTTONS_VFO_X LAY_TOPBUTTONS_X1
#define LAY_TOPBUTTONS_VFO_Y LAY_TOPBUTTONS_Y1
#define LAY_TOPBUTTONS_VFO_W (49 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_VFO_H 20

#define LAY_TOPBUTTONS_MODE_X (LAY_TOPBUTTONS_VFO_X + LAY_TOPBUTTONS_VFO_W)
#define LAY_TOPBUTTONS_MODE_Y LAY_TOPBUTTONS_VFO_Y
#define LAY_TOPBUTTONS_MODE_W (44 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_MODE_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_PRE_X (LAY_TOPBUTTONS_MODE_X + LAY_TOPBUTTONS_MODE_W)
#define LAY_TOPBUTTONS_PRE_Y LAY_TOPBUTTONS_VFO_Y
#define LAY_TOPBUTTONS_PRE_W (34 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_PRE_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_ATT_X (LAY_TOPBUTTONS_PRE_X + LAY_TOPBUTTONS_PRE_W)
#define LAY_TOPBUTTONS_ATT_Y LAY_TOPBUTTONS_VFO_Y
#define LAY_TOPBUTTONS_ATT_W (53 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_ATT_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_DRV_X (LAY_TOPBUTTONS_ATT_X + LAY_TOPBUTTONS_ATT_W)
#define LAY_TOPBUTTONS_DRV_Y LAY_TOPBUTTONS_VFO_Y
#define LAY_TOPBUTTONS_DRV_W (36 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_DRV_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_AGC_X (LAY_TOPBUTTONS_DRV_X + LAY_TOPBUTTONS_DRV_W)
#define LAY_TOPBUTTONS_AGC_Y LAY_TOPBUTTONS_VFO_Y
#define LAY_TOPBUTTONS_AGC_W (38 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_AGC_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_LOCK_X (LAY_TOPBUTTONS_AGC_X + LAY_TOPBUTTONS_AGC_W)
#define LAY_TOPBUTTONS_LOCK_Y LAY_TOPBUTTONS_VFO_Y
#define LAY_TOPBUTTONS_LOCK_W (48 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_LOCK_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_ANT_X LAY_TOPBUTTONS_X1
#define LAY_TOPBUTTONS_ANT_Y (LAY_TOPBUTTONS_VFO_H + 1)
#define LAY_TOPBUTTONS_ANT_W (46 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_ANT_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_FAST_X (LAY_TOPBUTTONS_ANT_X + LAY_TOPBUTTONS_ANT_W)
#define LAY_TOPBUTTONS_FAST_Y LAY_TOPBUTTONS_ANT_Y
#define LAY_TOPBUTTONS_FAST_W (32 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_FAST_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_DNR_X (LAY_TOPBUTTONS_FAST_X + LAY_TOPBUTTONS_FAST_W)
#define LAY_TOPBUTTONS_DNR_Y LAY_TOPBUTTONS_ANT_Y
#define LAY_TOPBUTTONS_DNR_W (38 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_DNR_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_CLAR_X (LAY_TOPBUTTONS_DNR_X + LAY_TOPBUTTONS_DNR_W)
#define LAY_TOPBUTTONS_CLAR_Y LAY_TOPBUTTONS_ANT_Y
#define LAY_TOPBUTTONS_CLAR_W (47 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_CLAR_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_SHIFT_X (LAY_TOPBUTTONS_CLAR_X + LAY_TOPBUTTONS_CLAR_W)
#define LAY_TOPBUTTONS_SHIFT_Y LAY_TOPBUTTONS_ANT_Y
#define LAY_TOPBUTTONS_SHIFT_W (50 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_SHIFT_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_NOTCH_X (LAY_TOPBUTTONS_SHIFT_X + LAY_TOPBUTTONS_SHIFT_W)
#define LAY_TOPBUTTONS_NOTCH_Y LAY_TOPBUTTONS_ANT_Y
#define LAY_TOPBUTTONS_NOTCH_W (62 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_NOTCH_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_NB_X (LAY_TOPBUTTONS_NOTCH_X + LAY_TOPBUTTONS_NOTCH_W)
#define LAY_TOPBUTTONS_NB_Y LAY_TOPBUTTONS_ANT_Y
#define LAY_TOPBUTTONS_NB_W (24 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_NB_H LAY_TOPBUTTONS_VFO_H

#define LAY_TOPBUTTONS_MUTE_X (LAY_TOPBUTTONS_NB_X + LAY_TOPBUTTONS_NB_W)
#define LAY_TOPBUTTONS_MUTE_Y LAY_TOPBUTTONS_ANT_Y
#define LAY_TOPBUTTONS_MUTE_W (48 + LAY_TOPBUTTONS_LR_MARGIN)
#define LAY_TOPBUTTONS_MUTE_H LAY_TOPBUTTONS_VFO_H

// frequency output
#define LAY_FREQ_X_OFFSET_100 29
#define LAY_FREQ_X_OFFSET_10 66
#define LAY_FREQ_X_OFFSET_1 106
#define LAY_FREQ_X_OFFSET_KHZ 160
#define LAY_FREQ_X_OFFSET_HZ 300
#define LAY_FREQ_HEIGHT 51
#define LAY_FREQ_Y 120
#define LAY_FREQ_FONT (GFXfont *)&FreeSans36pt7b
#define LAY_FREQ_COLOR_MHZ COLOR_WHITE
#define LAY_FREQ_COLOR_KHZ COLOR_WHITE
#define LAY_FREQ_COLOR_HZ rgb888torgb565(110, 110, 110)
#define LAY_FREQ_DELIMITER_Y_OFFSET 2
#define LAY_FREQ_DELIMITER_X1_OFFSET 140
#define LAY_FREQ_DELIMITER_X2_OFFSET 280

// display statuses under frequency
#define LAY_STATUS_Y_OFFSET 135
#define LAY_STATUS_HEIGHT 37
#define LAY_STATUS_BAR_X_OFFSET 60
#define LAY_STATUS_BAR_Y_OFFSET 20
#define LAY_STATUS_BAR_HEIGHT 10
#define LAY_STATUS_TXRX_X_OFFSET 20
#define LAY_STATUS_TXRX_Y_OFFSET 25
#define LAY_STATUS_TXRX_FONT (GFXfont *)&FreeSans9pt7b
#define LAY_STATUS_TX_COLOR COLOR_RED
#define LAY_STATUS_TX_LABELS_OFFSET_X 5
#define LAY_STATUS_TX_LABELS_MARGIN_X 55
#define LAY_STATUS_BAR_LEFT_COLOR rgb888torgb565(100, 100, 255)
#define LAY_STATUS_BAR_RIGHT_COLOR rgb888torgb565(255, 100, 100)
#define LAY_STATUS_BAR_LABELS_COLOR rgb888torgb565(32, 171, 17)
#define LAY_STATUS_RX_COLOR rgb888torgb565(32, 171, 17)
#define LAY_STATUS_LABELS_NOTCH_COLOR COLOR_BLUE
#define LAY_STATUS_LABELS_BW_COLOR COLOR_WHITE
#define LAY_STATUS_LABELS_TX_COLOR rgb888torgb565(32, 171, 17)
#define LAY_STATUS_SMETER_WIDTH 300
#define LAY_STATUS_SMETER_MARKER_HEIGHT 22
#define LAY_STATUS_PMETER_WIDTH 270
#define LAY_STATUS_AMETER_WIDTH 90
#define LAY_STATUS_ALC_BAR_X_OFFSET 10
#define LAY_STATUS_LABELS_OFFSET_Y 0
#define LAY_STATUS_LABELS_FONT_SIZE 1
#define LAY_STATUS_LABEL_DBM_X_OFFSET 30
#define LAY_STATUS_LABEL_DBM_Y_OFFSET 16
#define LAY_STATUS_LABEL_NOTCH_X_OFFSET 70
#define LAY_STATUS_LABEL_NOTCH_Y_OFFSET 22
#define LAY_STATUS_LABEL_DBM_WIDTH 23
#define LAY_STATUS_LABEL_DBM_HEIGHT 8
#define LAY_STATUS_LABEL_BW_WIDTH 44
#define LAY_STATUS_LABEL_BW_HEIGHT 8
#define LAY_STATUS_WIFI_ICON_X 382
#define LAY_STATUS_WIFI_ICON_Y 3

#define LAY_STATUS_SMETER_COLOR COLOR_WHITE
#define LAY_STATUS_SMETER_TXLABELS_MARGIN 55
#define LAY_STATUS_SMETER_TXLABELS_PADDING 23
#define LAY_STATUS_TX_LABELS_VAL_WIDTH 25
#define LAY_STATUS_TX_LABELS_VAL_HEIGHT 8
#define LAY_STATUS_TX_ALC_X_OFFSET 40

#define LAY_STATUS_ERR_OFFSET_X 420
#define LAY_STATUS_ERR_OFFSET_Y 25
#define LAY_STATUS_ERR_WIDTH 50
#define LAY_STATUS_ERR_HEIGHT 8
#define LAY_STATUS_ERR2_OFFSET_X 27
#define LAY_STATUS_ERR_COLOR COLOR_RED

#define LAY_TEXTBAR_FONT 2
#define LAY_TEXTBAR_TEXT_X_OFFSET 85

// FFT and waterfall
#define LAY_FFT_HEIGHT_STYLE1 40  // specify the maximum FFT height
#define LAY_WTF_HEIGHT_STYLE1 100 // specify the maximum height of the waterfall
#define LAY_FFT_HEIGHT_STYLE2 100 // specify the maximum FFT height
#define LAY_WTF_HEIGHT_STYLE2 40  // specify the maximum height of the waterfall
#define LAY_FFT_STYLE_3_4_COLOR COLOR_WHITE
#define LAY_FFT_WTF_MAX_HEIGHT (LAY_FFT_HEIGHT_STYLE1 + LAY_WTF_HEIGHT_STYLE1) // maximum possible height FFT + WTF
#define LAY_FFT_WTF_POS_Y ((uint16_t)(LCD_HEIGHT - LAY_FFT_WTF_MAX_HEIGHT))    // start of FFT and waterfall
#define LAY_FFT_PRINT_SIZE 480                                                 // specify the width of the displayed FFT
#define LAY_FFT_CWDECODER_OFFSET 17                                            // space for the text of the CW decoder

// system menu
#define LAY_SYSMENU_X1 5
#define LAY_SYSMENU_X2 400
#define LAY_SYSMENU_X2_BIGINT 350
#define LAY_SYSMENU_X2R_BIGINT 400
#define LAY_SYSMENU_W 458
#define LAY_SYSMENU_ITEM_HEIGHT 18

#define LAY_BANDMAP_CW_COLOR rgb888torgb565(50, 50, 255)
#define LAY_BANDMAP_SSB_COLOR rgb888torgb565(50, 237, 255)
#define LAY_BANDMAP_DIGI_COLOR rgb888torgb565(255, 50, 50)
#define LAY_BANDMAP_AM_COLOR rgb888torgb565(219, 255, 50)
#define LAY_BANDMAP_FM_COLOR rgb888torgb565(255, 50, 208)

#endif
