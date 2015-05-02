/*
 * MEGA88_SPI_LIBRARY.h
 *
 * Created: 4/30/2015 3:15:14 PM
 *  Author: Jimmy
 */ 


#ifndef MEGA88_SPI_LIBRARY_H_
#define MEGA88_SPI_LIBRARY_H_

void InitSPI(void);

//Sends and receives a byte through SPI
uint8_t WriteByteSPI(uint8_t cData);

#endif /* MEGA88_SPI_LIBRARY_H_ */