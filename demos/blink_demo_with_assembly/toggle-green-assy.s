
	.arch msp430g2553
	.p2align 1,0
	.text

	.extern red_on
	.extern green_on
	.global toggle_green

	.text
toggle_green:
	mov #0, r12		;changed = 0
	cmp.b #0, &red_on     	;red_on - 0
	jz fi			;if (red_on == 0) goto fi
	xor.b #1, &green_on	;green_on ^=1
	mov #1, r12		;changed = 1
fi:	pop r0
