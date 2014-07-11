/// 
/// ʵ��Skia���ı�����
///
/// �ļ�����SkTextOp.h
/// ��  �ߣ�����
/// ��  �ڣ�2014-03-15
///  
/// ===============================================================
///

#ifndef _UISKTEXTOP_H_
#define _UISKTEXTOP_H_

#include "SkCanvas.h"
#include "SkBitmap.h"

class SkTextOp
{
public:

	static int ComputeTextSize(int size);

	/// <summary>
	///  ͨ�����з�(\n��\r\n)�����ı�������
	/// </summary>
	/// <param name="paint">�ı����ƶ���</param>
	/// <param name="text">�ı�����</param>
	/// <param name="len">�ı�����</param>
	/// <returns>�ı�����</returns>
	static int ComputeTextLineCount(SkPaint& paint, const wchar_t* text, int len);

	/// <summary>
	///  ͨ�����з�(\n��\r\n)���ı����ƿ�ȼ����ı�������
	/// </summary>
	/// <param name="paint">�ı����ƶ���</param>
	/// <param name="w">�ı����ƿ��</param>
	/// <param name="text">�ı�����</param>
	/// <param name="len">�ı�����</param>
	/// <returns>�ı�����</returns>
	static int ComputeWrapTextLineCount(SkPaint& paint, SkScalar w, const wchar_t* text, int len);

	/// <summary>
	///  ���Ƶ����ı����˷����������ʡ�Ժ�
	/// </summary>
	/// <param name="paint">�ı����ƶ���</param>
	/// <param name="rect">λ������</param>
	/// <param name="text">�ı�����</param>
	/// <param name="len">�ı�����</param>
	/// <returns>�ı�����</returns>
	static SkScalar DrawSingleText(SkCanvas* canvas, SkPaint& paint,const SkRect& rect, const wchar_t* text, int len);
	static SkPoint DrawLinesText(SkCanvas* canvas, SkPaint& paint, const SkRect& rect, const wchar_t* text, int len);
	static SkPoint DrawWrapText(SkCanvas* canvas, SkPaint& paint, const SkRect& rect, const wchar_t* text, int len);

	static SkScalar DrawEllipsisText(SkCanvas* canvas, SkPaint& paint, SkScalar x, SkScalar y, SkScalar w, const wchar_t* text, int len);
	static SkScalar DrawPathEllipsisText(SkCanvas* canvas, SkPaint& paint, SkScalar x, SkScalar y, SkScalar w, const wchar_t* text, int len);

private:

	static void CoereYCor(SkPaint& paint, SkScalar& y);
	static SkScalar DrawSingle(SkCanvas* canvas, SkPaint& paint, SkScalar x, SkScalar y, SkScalar w, SkScalar h, const wchar_t* text, int len);
	static int ComputeWrapTextLines(SkPaint& paint, SkScalar w, const wchar_t* text, int len);
	static void DrawLimitText(SkCanvas* canvas, SkPaint& paint, SkScalar x, SkScalar w, const wchar_t* text, int len, SkScalar lineSpace, SkPoint& offset);
	static SkScalar DoDotTextOnly(SkCanvas* canvas, SkPaint& paint, const wchar_t* dotText, SkScalar x, SkScalar y, SkScalar w, SkScalar dotSize);
	static SkScalar InnerDrawEllipsisText(SkCanvas* canvas, SkPaint& paint, SkScalar x, SkScalar y, SkScalar w, const wchar_t* text, int len);
};

#endif
