// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 DATE0504T02_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// DATE0504T02_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef DATE0504T02_EXPORTS
#define DATE0504T02_API __declspec(dllexport)
#else
#define DATE0504T02_API __declspec(dllimport)
#endif

// 此类是从 dll 导出的
class DATE0504T02_API Cdate0504T02 {
public:
	Cdate0504T02(void);
	// TODO: 在此处添加方法。
};

extern DATE0504T02_API int ndate0504T02;

DATE0504T02_API int fndate0504T02(void);
DATE0504T02_API float convert(float deg);