#ifndef STRUPACKAGEHEAD_H
#define STRUPACKAGEHEAD_H

#pragma pack (4)
/* ---------------------------------- */
/*           ��ͷ�ṹ�嶨��           */
/* ---------------------------------- */
struct PackageHead
{
	unsigned short wMsgCode;        /* --- ��Ϣ������ ------ */
	unsigned char  bytSLEIDCode[4]; /* --- ���ͷ���ʶ�� ---- */
	unsigned long  dwSessionNum;    /* --- �Ự��ˮ�� ------ */
	unsigned short wSerialNum;      /* --- �����к� -------- */
	unsigned char  bytFlag;         /* --- ������־ ------ */
	unsigned short wRecordNum;      /* --- ��¼�� ---------- */
	unsigned char  bytEncrypt;      /* --- ѹ��/�����㷨 --- */
};
#pragma pack ()
#endif
