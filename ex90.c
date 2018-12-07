/*201814066 김기범
IP 주소 출력*/
#include<stdio.h>

union ip_address {
	unsigned char sadd[4];
	unsigned int iaddr;
};

int main()
{
	union ip_address addr = { 0x7F, 0x00, 0x00, 0x01 };
	
	printf("%08X\n", addr.iaddr);

	return 0;
}