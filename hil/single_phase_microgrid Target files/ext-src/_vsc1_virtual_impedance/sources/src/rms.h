#ifndef RMS_H
#define RMS_H

/* CIRCULAR BUFFER */

typedef struct
{
  float *buff;
  int size;
  int start;
  int end;
  int count;
} CircularBuffer;

int circularBufferInit(CircularBuffer *cb, int size);
int circularBufferIsEmpty(const CircularBuffer *cb);
int circularBufferIsFull(const CircularBuffer *cb);
void add2CircularBuffer(CircularBuffer *cb, float data);
float getElement(CircularBuffer *cb, int n);
void circularBufferFree(CircularBuffer *cb);
void plotBufferFromStartToEnd(CircularBuffer *cb);

/* RMS CALCULATOR */

typedef struct
{
  CircularBuffer square_buffer;
  int size;
  float sum;
} RMSCalculator;

int RMSCalculatorInit(RMSCalculator *rms, int size);
void add2RMSCalculator(RMSCalculator *rms, float data);
void calculateRMSvalue(RMSCalculator *rms, float *rms_value);
void RMSCalculatorFree(RMSCalculator *rms);

#endif