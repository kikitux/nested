#include <node.h>
#include "main.hpp"

using namespace v8;

void Factorial(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);
  if (args.Length() != 1) {
    isolate->ThrowException(Exception::TypeError(
        String::NewFromUtf8(isolate, "Wrong number of arguments")));
    return;
  }
  if (!args[0]->IsNumber()) {
    isolate->ThrowException(Exception::TypeError(
        String::NewFromUtf8(isolate, "Wrong arguments")));
    return;
  }
  double value = Factorial(args[0]->NumberValue());
  Local<Number> num = Number::New(isolate, value);
  args.GetReturnValue().Set(num);
}

void Init(Handle<Object> exports) {
  NODE_SET_METHOD(exports, "fact", Factorial);
}

NODE_MODULE(factorial, Init)
