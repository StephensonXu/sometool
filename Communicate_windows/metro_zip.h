/*
|Author	: liushukang
|Date	: 2005-06-24
|Version: v1.0.1
|Evolution:
*/
/*
usage:
	if(CompressFiles("d:\\origin\\", "d:\\a.zip")==0){TRACE("success");
	//files under origin will be compressed into the a.zip

	if(DecompressFiles("d:\\a.zip","d:\\dest\\")==0){TRACE("success");
	//files will be extracted from a.zip into the dest directory

	ClearPath("d:\\origin\\");
	//all files under origin will be deleted
*/
/*
#ifdef METRO_ZIP_EXPORTS
#define METRO_ZIP_API __declspec(dllexport)
#else
#define METRO_ZIP_API __declspec(dllimport)
#endif
*/
/*============================================================
CompressFiles: compress files under the source_path to a zip file specified
	return value: 0 success
				  1 error
				  2 no files achieved
	pSourcePath:  pointer to a string with the content of source path name
	pDestZipFile: pointer to a string of the zip file name(full path name, which can be created if the path is not available) 
=============================================================*/
int __stdcall CompressFiles(char *pSourcePath, char *pDestZipFile);

/*============================================================
CompressFiles: compress files under the source_path to a zip file specified
	return value: 0 success
				  1 error
				  2 no zip file found
	pSourceZipFile: pointer to a string of the zip file name(full path name)
	pDestPath:      pointer to a string of the path name, where the files are extracted
=============================================================*/
int __stdcall DecompressFiles(char *pSourceZipFile, char *pDestPath);

/*============================================================
ClearPath: delete all files under the path specified
pDestPath: path will be cleared
=============================================================*/
void __stdcall ClearPath(char *pDestPath);
