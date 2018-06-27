#include <node.h>
#include <iostream>


namespace distance {

  using v8::Exception;
  using v8::FunctionCallbackInfo;
  using v8::Isolate;
  using v8::Local;
  using v8::Number;
  using v8::Object;
  using v8::String;
  using v8::Value;

  void Distance(const FunctionCallbackInfo<Value>& args) {
    Isolate* isolate = args.GetIsolate();

    // Exits if Wrong Number of Arguments
    if(args.Length() != 2 || args.Length() != 3){
      isolate->ThrowException(Exception::TypeError(
        String::NewFromUtf8(isolate, "Wrong Number of Arguments")));
      return;
    }

    // Local<String> s1 = args[0]->ToString();

    /**
    * PROBLEM:
    * Get Length of Local<String> AND Iterate through Local<String>
    * OR
    * Type Casting to std::String; // Recommended
    * 
    **/

    args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world"));
  }

  void init(Local<Object> exports) {
    NODE_SET_METHOD(exports, "jwdistance", Distance);
  }

  NODE_MODULE(NODE_GYP_MODULE_NAME, init)

}
