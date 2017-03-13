#ifndef STRUPACKAGEHEAD_H
#define STRUPACKAGEHEAD_H

#pragma pack (4)
/* ---------------------------------- */
/*           包头结构体定义           */
/* ---------------------------------- */
struct PackageHead
{
	unsigned short wMsgCode;        /* --- 消息分类码 ------ */
	unsigned char  bytSLEIDCode[4]; /* --- 发送方标识码 ---- */
	unsigned long  dwSessionNum;    /* --- 会话流水号 ------ */
	unsigned short wSerialNum;      /* --- 包序列号 -------- */
	unsigned char  bytFlag;         /* --- 最后包标志 ------ */
	unsigned short wRecordNum;      /* --- 记录数 ---------- */
	unsigned char  bytEncrypt;      /* --- 压缩/加密算法 --- */
};
#pragma pack ()
#endif
