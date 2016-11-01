#ifndef HASTYTP_FUNCTIONS_H
#define HASTYTP_FUNCTIONS_H

#include <nan.h>

NAN_METHOD(nothing);
NAN_METHOD(aString);
NAN_METHOD(aBoolean);
NAN_METHOD(aNumber);
NAN_METHOD(anObject);
NAN_METHOD(anArray);
NAN_METHOD(callback);

class MyObject : public Nan::ObjectWrap {
 public:
  static NAN_MODULE_INIT(Init);

 private:
  explicit MyObject(double value = 0);
  ~MyObject();

  static NAN_METHOD(New);
  static NAN_METHOD(PlusOne);
  static Nan::Persistent<v8::Function> constructor;
  double value_;
};

#endif
