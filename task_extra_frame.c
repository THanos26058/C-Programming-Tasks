#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void send_frame(uint8_t *data, uint8_t *frame_out) {
    uint16_t sum = 0;
    for (int i = 0; i < 8; ++i) {
        frame_out[i] = data[i];
        sum += data[i];
    }
    frame_out[8] = (uint8_t)(sum & 0xFF);
    frame_out[9] = (uint8_t)((sum >> 8) & 0xFF);
}

int receive_frame(uint8_t *frame_in, uint8_t *data_out) {
    uint16_t sum = 0;
    for (int i = 0; i < 8; ++i) {
        data_out[i] = frame_in[i];
        sum += frame_in[i];
    }
    uint16_t received_sum = frame_in[8] | (frame_in[9] << 8);
    if (sum == received_sum) {
        return 1;
    }
    return 0;
}
