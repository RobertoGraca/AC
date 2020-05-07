//NMEC: 93020
//NOME: Roberto Oliveira Graça

// Complete the functions (marked by ...)
// so that it passes all tests in DateTimeTest.

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SchedulingSequence.h"

// You may add auxiliary definitions and declarations here, if you need to.



// Create a SchedulingSequence capable of storing up to (capacity) intervals.
SchedulingSequence* SchedulingSequenceCreate(int capacity) {
  assert(capacity >= 0);
  // You must allocate space for the struct and for the intervals array!
  SchedulingSequence *ss = (SchedulingSequence*)malloc(sizeof(*ss));

  ss->capacity = capacity;
  ss->size = 0;

  ss->intervals = (TimeInterval**)malloc(sizeof(TimeInterval**));

  return ss;
  
}

// Destroy SchedulingSequence *pss
void SchedulingSequenceDestroy(SchedulingSequence **pss) {
  assert(*pss != NULL);
  free(*pss);
  
}

int SchedulingSequenceIsEmpty(SchedulingSequence *ss) {
  return ss->size == 0;
}

int SchedulingSequenceIsFull(SchedulingSequence *ss) {
  return ss->size == ss->capacity;
}

// Add interval *ti to *ss.
// Return true on success,
// return false if *ti overlaps any of the intervals in *ss.
int SchedulingSequenceAdd(SchedulingSequence *ss, TimeInterval *ti) {
  assert(!SchedulingSequenceIsFull(ss));
  
  for(int i=0;i<ss->size;i++){
    if(TimeIntervalOverlaps(ss->intervals[i], ti)){
      return 0;
    }
  }
  ss->intervals[ss->size] = ti;
  ss->size += 1; 
  return 1;
  
}

// Get the interval at position (idx) of *ss.
// idx=0 is the first position idx=ss->size-1 is the last position.
// Precondition: 0 <= idx < ss->size.
TimeInterval *SchedulingSequenceGet(SchedulingSequence *ss, int idx) {
  assert (0 <= idx && idx < ss->size);
  return ss->intervals[idx];
  
}

// Remove the interval at position (idx) of *ss, and return it.
// idx=0 is the first position idx=ss->size-1 is the last position.
// Precondition: 0 <= idx < ss->size.
TimeInterval *SchedulingSequencePop(SchedulingSequence *ss, int idx) {
  assert (0 <= idx && idx < ss->size);
  assert (!SchedulingSequenceIsEmpty(ss));
  // This implies !SchedulingSequenceIsEmpty(ss).
  TimeInterval* t = ss->intervals[idx];
  for(int i=idx;i<ss->size-1;i++){
    ss->intervals[i] = ss->intervals[i+1];
  }
  ss->size -= 1;
  return t;
}

// You may add auxiliary definitions and declarations here, if you need to.


