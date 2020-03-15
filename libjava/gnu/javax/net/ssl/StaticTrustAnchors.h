
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_StaticTrustAnchors__
#define __gnu_javax_net_ssl_StaticTrustAnchors__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
            class StaticTrustAnchors;
        }
      }
    }
  }
  namespace java
  {
    namespace security
    {
      namespace cert
      {
          class CertificateFactory;
          class X509Certificate;
      }
    }
  }
}

class gnu::javax::net::ssl::StaticTrustAnchors : public ::java::lang::Object
{

public:
  StaticTrustAnchors(JArray< ::java::security::cert::X509Certificate * > *);
  static ::java::security::cert::X509Certificate * generate(::java::security::cert::CertificateFactory *, ::java::lang::String *);
  virtual JArray< ::java::security::cert::X509Certificate * > * getCertificates();
private:
  JArray< ::java::security::cert::X509Certificate * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) certs;
public:
  static ::gnu::javax::net::ssl::StaticTrustAnchors * CA_CERTS;
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_StaticTrustAnchors__