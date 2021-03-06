
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_ls_DomLSSerializer__
#define __gnu_xml_dom_ls_DomLSSerializer__

#pragma interface

#include <gnu/xml/transform/StreamSerializer.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
        namespace ls
        {
            class DomLSSerializer;
        }
      }
      namespace transform
      {
          class StreamSerializer;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class DOMConfiguration;
          class DOMStringList;
          class Node;
        namespace ls
        {
            class LSOutput;
            class LSSerializerFilter;
        }
      }
    }
  }
}

class gnu::xml::dom::ls::DomLSSerializer : public ::gnu::xml::transform::StreamSerializer
{

public:
  DomLSSerializer();
  virtual ::org::w3c::dom::DOMConfiguration * getDomConfig();
  virtual ::java::lang::String * getNewLine();
  virtual void setNewLine(::java::lang::String *);
  virtual ::org::w3c::dom::ls::LSSerializerFilter * getFilter();
  virtual void setFilter(::org::w3c::dom::ls::LSSerializerFilter *);
  virtual jboolean write(::org::w3c::dom::Node *, ::org::w3c::dom::ls::LSOutput *);
  virtual jboolean writeToURI(::org::w3c::dom::Node *, ::java::lang::String *);
  virtual ::java::lang::String * writeToString(::org::w3c::dom::Node *);
  virtual void serialize(::org::w3c::dom::Node *, ::java::io::OutputStream *);
  virtual void setParameter(::java::lang::String *, ::java::lang::Object *);
  virtual ::java::lang::Object * getParameter(::java::lang::String *);
  virtual jboolean canSetParameter(::java::lang::String *, ::java::lang::Object *);
  virtual ::org::w3c::dom::DOMStringList * getParameterNames();
  virtual ::java::lang::String * item(jint);
  virtual jint getLength();
  virtual jboolean contains(::java::lang::String *);
private:
  static ::java::util::List * SUPPORTED_PARAMETERS;
  ::org::w3c::dom::ls::LSSerializerFilter * __attribute__((aligned(__alignof__( ::gnu::xml::transform::StreamSerializer)))) filter;
  ::gnu::xml::transform::StreamSerializer * serializer;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_ls_DomLSSerializer__
