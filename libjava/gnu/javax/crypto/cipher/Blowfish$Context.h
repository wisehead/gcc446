
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_cipher_Blowfish$Context__
#define __gnu_javax_crypto_cipher_Blowfish$Context__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace cipher
        {
            class Blowfish;
            class Blowfish$Context;
        }
      }
    }
  }
}

class gnu::javax::crypto::cipher::Blowfish$Context : public ::java::lang::Object
{

public: // actually package-private
  Blowfish$Context(::gnu::javax::crypto::cipher::Blowfish *);
private:
  Blowfish$Context(::gnu::javax::crypto::cipher::Blowfish *, ::gnu::javax::crypto::cipher::Blowfish$Context *);
public:
  virtual ::java::lang::Object * clone();
public: // actually package-private
  JArray< jint > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) p;
  JArray< jint > * s0;
  JArray< jint > * s1;
  JArray< jint > * s2;
  JArray< jint > * s3;
  ::gnu::javax::crypto::cipher::Blowfish * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_cipher_Blowfish$Context__
