#pragma once
#include <string>
#include <pro.h>
#include <kernwin.hpp>

//Ascii转UTF8
std::string LocalCpToUtf8(const char* str);

// 注意: IDA 9.4 原生 UTF-8, 源码/执行字符集均为 UTF-8, 字面量无需再转换。
// 此函数仅保留兼容旧调用点, 现为直通实现; 运行期 GBK 数据请用 acp_utf8。
inline qstring getUTF8String(const char* str)
{
	return qstring(str);
}
