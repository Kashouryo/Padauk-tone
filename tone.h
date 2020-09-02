/*
*
* Padauk 8-bit PWM Tone library v0.5
*
* 2020 LovelyA72, Kashouryo
* Licensed under the MIT licence
*
*/

#ifndef tone_h
#define tone_h

#define BUZZER_BIT 3

#define tone_c4 (uint8_t)(TM2S_SCALE_DIV18)|TM2S_PRESCALE_DIV4
#define tone_d4 (uint8_t)(TM2S_SCALE_DIV16)|TM2S_PRESCALE_DIV4
#define tone_e4 (uint8_t)(TM2S_SCALE_DIV14)|TM2S_PRESCALE_DIV4
#define tone_f4 (uint8_t)(TM2S_SCALE_DIV13)|TM2S_PRESCALE_DIV4
#define tone_g4 (uint8_t)(TM2S_SCALE_DIV12)|TM2S_PRESCALE_DIV4
#define tone_a4 (uint8_t)(TM2S_SCALE_DIV11)|TM2S_PRESCALE_DIV4
#define tone_b4 (uint8_t)(TM2S_SCALE_DIV10)|TM2S_PRESCALE_DIV4

#define tone_c5 (uint8_t)(TM2S_SCALE_DIV9)|TM2S_PRESCALE_DIV4
#define tone_d5 (uint8_t)(TM2S_SCALE_DIV8)|TM2S_PRESCALE_DIV4
#define tone_e5 (uint8_t)(TM2S_SCALE_DIV29)|TM2S_PRESCALE_NONE
#define tone_f5 (uint8_t)(TM2S_SCALE_DIV27)|TM2S_PRESCALE_NONE
#define tone_g5 (uint8_t)(TM2S_SCALE_DIV24)|TM2S_PRESCALE_NONE
#define tone_a5 (uint8_t)(TM2S_SCALE_DIV22)|TM2S_PRESCALE_NONE
#define tone_b5 (uint8_t)(TM2S_SCALE_DIV20)|TM2S_PRESCALE_NONE
#define tone_c6 (uint8_t)(TM2S_SCALE_DIV19)|TM2S_PRESCALE_NONE

void tonePA3(uint8_t note,uint8_t time){
    TM2B = 0x7F; // Set the PWM duty value (127+1) = 50%
    switch(note){
    case 1:
        TM2S = tone_c4;
        break;
    case 2:
        TM2S = tone_d4;
        break;
    case 3:
        TM2S = tone_e4;
        break;
    case 4:
        TM2S = tone_f4;
        break;
    case 5:
        TM2S = tone_g4;
        break;
    case 6:
        TM2S = tone_a4;
        break;
    case 7:
        TM2S = tone_b4;
        break;
    case 8:
        TM2S = tone_c5;
        break;
    case 11:
        TM2S = tone_c5;
        break;
    case 12:
        TM2S = tone_d5;
        break;
    case 13:
        TM2S = tone_e5;
        break;
    case 14:
        TM2S = tone_f5;
        break;
    case 15:
        TM2S = tone_g5;
        break;
    case 16:
        TM2S = tone_a5;
        break;
    case 17:
        TM2S = tone_b5;
        break;
    case 18:
        TM2S = tone_c6;
        break;
    default:
        break;
    }
    TM2C = (uint8_t)(TM2C_INVERT_OUT | TM2C_MODE_PWM | TM2C_OUT_PA3 | TM2C_CLK_IHRC);

    switch(time){
    case 1:
        _delay_ms(1995);
        break;
    case 2:
        _delay_ms(995);
        break;
    case 3:
        _delay_ms(745);
        break;
    case 4:
        _delay_ms(495);
        break;
    case 8:
        _delay_ms(245);
        break;

    default:
        break;
    }
    TM2C = 0x00; PA |= (1<<BUZZER_BIT);
    _delay_ms(5);
}

void tonePA3Slur(uint8_t note,uint8_t time){
    TM2B = 0x7F; // Set the PWM duty value (127+1) = 50%
    switch(note){
    case 1:
        TM2S = tone_c4;
        break;
    case 2:
        TM2S = tone_d4;
        break;
    case 3:
        TM2S = tone_e4;
        break;
    case 4:
        TM2S = tone_f4;
        break;
    case 5:
        TM2S = tone_g4;
        break;
    case 6:
        TM2S = tone_a4;
        break;
    case 7:
        TM2S = tone_b4;
        break;
    case 8:
        TM2S = tone_c5;
        break;
    case 11:
        TM2S = tone_c5;
        break;
    case 12:
        TM2S = tone_d5;
        break;
    case 13:
        TM2S = tone_e5;
        break;
    case 14:
        TM2S = tone_f5;
        break;
    case 15:
        TM2S = tone_g5;
        break;
    case 16:
        TM2S = tone_a5;
        break;
    case 17:
        TM2S = tone_b5;
        break;
    case 18:
        TM2S = tone_c6;
        break;
    default:
        break;
    }
    TM2C = (uint8_t)(TM2C_INVERT_OUT | TM2C_MODE_PWM | TM2C_OUT_PA3 | TM2C_CLK_IHRC);

    switch(time){
    case 1:
        _delay_ms(2000);
        break;
    case 2:
        _delay_ms(1000);
        break;
    case 3:
        _delay_ms(745);
        break;
    case 4:
        _delay_ms(500);
        break;
    case 8:
        _delay_ms(250);
        break;

    default:
        break;
    }
    TM2C = 0x00; PA |= (1<<BUZZER_BIT);
}

#endif
