// Generated by gencpp from file graph_server/GraphPath.msg
// DO NOT EDIT!


#ifndef GRAPH_SERVER_MESSAGE_GRAPHPATH_H
#define GRAPH_SERVER_MESSAGE_GRAPHPATH_H

#include <ros/service_traits.h>


#include <graph_server/GraphPathRequest.h>
#include <graph_server/GraphPathResponse.h>


namespace graph_server
{

struct GraphPath
{

typedef GraphPathRequest Request;
typedef GraphPathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GraphPath
} // namespace graph_server


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::graph_server::GraphPath > {
  static const char* value()
  {
    return "94f3650515896f2f94175e3d490a0f76";
  }

  static const char* value(const ::graph_server::GraphPath&) { return value(); }
};

template<>
struct DataType< ::graph_server::GraphPath > {
  static const char* value()
  {
    return "graph_server/GraphPath";
  }

  static const char* value(const ::graph_server::GraphPath&) { return value(); }
};


// service_traits::MD5Sum< ::graph_server::GraphPathRequest> should match 
// service_traits::MD5Sum< ::graph_server::GraphPath > 
template<>
struct MD5Sum< ::graph_server::GraphPathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::graph_server::GraphPath >::value();
  }
  static const char* value(const ::graph_server::GraphPathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::graph_server::GraphPathRequest> should match 
// service_traits::DataType< ::graph_server::GraphPath > 
template<>
struct DataType< ::graph_server::GraphPathRequest>
{
  static const char* value()
  {
    return DataType< ::graph_server::GraphPath >::value();
  }
  static const char* value(const ::graph_server::GraphPathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::graph_server::GraphPathResponse> should match 
// service_traits::MD5Sum< ::graph_server::GraphPath > 
template<>
struct MD5Sum< ::graph_server::GraphPathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::graph_server::GraphPath >::value();
  }
  static const char* value(const ::graph_server::GraphPathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::graph_server::GraphPathResponse> should match 
// service_traits::DataType< ::graph_server::GraphPath > 
template<>
struct DataType< ::graph_server::GraphPathResponse>
{
  static const char* value()
  {
    return DataType< ::graph_server::GraphPath >::value();
  }
  static const char* value(const ::graph_server::GraphPathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GRAPH_SERVER_MESSAGE_GRAPHPATH_H
