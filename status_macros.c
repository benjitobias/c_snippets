#include <stdio.h>

#define CHECK_STATUS(status)                 \
{                                            \
	status_code = (status);              \
	if (status_code)                     \
	{                                    \
		goto cleanup;                \
	}                                    \
}

#define SET_ERROR(error_condition, status)   \
{                                            \
	if (error_condition)                 \
	{                                    \
		status_code = (status);      \
		goto cleanup;                \
	}                                    \
}

int main(int argc, char **argv)
{
	int status_code = 0;
	CHECK_STATUS(status_code);
	printf("Ok\r\n");
	SET_ERROR(1==1, status_code);
	printf("Ok\r\n");
cleanup:
	printf("Exited\r\n");
}
