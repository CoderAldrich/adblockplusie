#ifndef _PLUGIN_MIME_FILTER_CLIENT_H
#define _PLUGIN_MIME_FILTER_CLIENT_H


class CPluginMimeFilterClient
{

public:

  CPluginMimeFilterClient();
  ~CPluginMimeFilterClient();

  void Unregister();

  CComPtr<IClassFactory> m_classFactory;
  CComPtr<IClassFactory> m_spCFHTTP;
  CComPtr<IClassFactory> m_spCFHTTPS;
};


#endif // _PLUGIN_MIME_FILTER_CLIENT_H
