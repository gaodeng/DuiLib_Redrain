#pragma once

#ifdef _DEBUG

#       pragma comment(lib, "DuiLib_d.lib")

#else

#       pragma comment(lib, "DuiLib.lib")

#endif


class CFrameWnd: public WindowImplBase
{
public:
	explicit CFrameWnd(LPCTSTR pszXMLPath);

	LPCTSTR GetWindowClassName() const;
	CDuiString GetSkinFile();
	CDuiString GetSkinFolder();
	//UILIB_RESOURCETYPE GetResourceType() const;
	//LPCTSTR GetResourceID() const;
	LRESULT CFrameWnd::OnDPIChanged(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
     void InitWindow();
     void Notify(TNotifyUI& msg);
	 LRESULT HandleCustomMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

	 void setDPI(int DPI);
	 // CControlUI* CreateControl(LPCTSTR pstrClassName);
private:
	CDuiString		m_strXMLPath;

	map<CDuiString,bool> m_MenuCheckInfo; //����˵��ĵ�ѡ��ѡ��Ϣ
};