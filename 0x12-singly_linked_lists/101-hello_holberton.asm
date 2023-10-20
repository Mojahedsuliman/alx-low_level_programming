	extern	printf
	global	main

main:
	mov	edi, msg
	mov	eax, 0
	call	printf
	xor	eax,eax
	ret
msg: db 'Hello, Holberton', 0xa, 0
