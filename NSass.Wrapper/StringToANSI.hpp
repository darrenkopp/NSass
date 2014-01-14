#using <System.dll>

using namespace System;

namespace NSass
{
	char* MarshalString(String^ s);
	void FreeString(const char* p);

	const char* MarshalConstString(String^ s);
	void FreeConstString(const char* p);
}