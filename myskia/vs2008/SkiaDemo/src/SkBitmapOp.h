/// 
/// ʵ��Skia��ͼ�����
///
/// �ļ�����SkBitmapOp.h
/// ��  �ߣ�����
/// ��  �ڣ�2014-03-15
///  
/// ===============================================================
///

#ifndef _UISKBITMAPOP_H_
#define _UISKBITMAPOP_H_

#include "SkCanvas.h"
#include "SkBitmap.h"

class SkBitmapOp
{
public:

	SkBitmapOp();

	/// <summary>
	///  ������Եģ��ͼ��
	/// </summary>
	/// <param name="bitmap">������ͼ��(��Ϊ�������)</param>
	/// <param name="w">ͼ����</param>
	/// <param name="h">ͼ��߶�</param>
	/// <param name="radius">ģ���뾶</param>
	/// <returns>�ɹ�����true;����false</returns>
	static bool CreateBlurBitmap(SkBitmap& bitmap, int w, int h, SkScalar radius);
};

#endif