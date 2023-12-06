/*
 * j3_lib_24C256.h
 *
 *  Created on: Nov 13, 2023
 *      Author: Nelson Lima
 */

#ifndef INC_J3_LIB_24C256_H_
#define INC_J3_LIB_24C256_H_

#include "i2c.h"

typedef int8_t (*enviaDados)(uint16_t _endereco, uint8_t *txBytes, uint16_t _tamMsg);
//typedef int8_t (*recebDados)(uint16_t _endereco, uint8_t *txBytes, uint16_t _tamMsg);


struct j3_24C256{
  I2C_HandleTypeDef* i2c;
  uint16_t endereco;
};
typedef struct j3_24C256 j3_24C256_t;

j3_24C256_t* j3_24c256_new(I2C_HandleTypeDef* _i2c, uint8_t _i2c_address); /* Retorna um ponteiro para j3_24C256 */
int8_t j3_24c256_escreveDado(j3_24C256_t *_mem);


#endif /* INC_J3_LIB_24C256_H_ */
