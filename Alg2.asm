.data
	msg1: .asciiz "Numero fatorial: "
	msg2: .asciiz "FATORIAL: "
	msg3: .asciiz "\nPreencha o vetorzinho: "
	msg5: .asciiz "\nVetor ordem crescente: "
	msg4: .asciiz " "
	
	talDoArray:
		.align 2
		.space 20 #5 valores
.text
	li $v0, 4
	la $a0, msg1
	syscall
	
	jal lerInt #ler o numerin
	
	move $s0, $v0  #mover valor para s0
	move $t0, $s0 #Valor de s0 para t0
	subi $t0, $t0, 1 #valor de t0 -1
	li $t1, 1 
	
	 jal fatorial 
	 
	 li $v0, 4 #msg2
	 la $a0, msg2
	 syscall
	 
	 li $v0, 1 #mostrar fatorial
	 move $a0, $s0
	 syscall
	 
	 li $v0, 4 #msg Vetor
	 la $a0, msg3
	 syscall
	 
	 move $t0, $zero #t0 = 0
	 li $t1, 20 #t1 = 20 tamanho do array
	 
	 loop: #Preencher vetor
	 	beq $t0, $t1, sai1
		li $v0, 5 #ler um inteiro
		syscall
		
		sw $v0, talDoArray($t0)
		addi $t0, $t0, 4
		
		j loop
	sai1:
	
	jal ordenar #funcao ordenar
	
	li $v0, 4
	la $a0, msg5
	syscall
	
	
	move $t0, $zero
	loop4: # imprimir  vetor ordenado
		beq $t0, $t1, sai4
		li $v0, 1
		lw $a0, talDoArray($t0)
		syscall
		
		li $v0, 4
		la $a0, msg4
		syscall
		
		addi $t0, $t0, 4
		j loop4
	sai4:
	
	 li $v0, 10 #terminar
	 syscall
	
	
	lerInt:
		li $v0, 5
		syscall
		
		jr $ra
	
	fatorial:
		beq $t0, $t1, sai #while
		mul $s0, $s0, $t0 #multiplicar
		subi $t0, $t0, 1 #subtrair
		
		j fatorial
	sai:
		jr $ra
	
	ordenar:
		li $t4, 16 # t4 = 16
		move $t0, $zero #t0 = 0
		loop2:
			beq $t0, $t1, sai2 #loop
			lw $t5, talDoArray($zero) #t4 = primeiro indice do array
			li $t6, 4 # proximo
			li $t9, 0 #atual
			move $t3, $zero #t3 = 0
				loop3:
					beq $t3, $t4, sai3 #loop 
					lw $t7, talDoArray($t6) #proximo
					bgt $t5, $t7, maior #se maior
					j saiMaior
					maior:
					   	sw $t5, talDoArray($t6) #proximo = atual
					   	sw $t7, talDoArray($t9) #atual = proximo
					   	lw $t5, talDoArray($t6)
					   	addi $t6, $t6, 4
					   	addi $t9, $t9, 4
					   	addi $t3, $t3, 4
					   	j loop3
					saiMaior:
					lw $t5, talDoArray($t6)
					addi $t6, $t6, 4
					addi $t9, $t9, 4
					addi $t3, $t3, 4
					j loop3
				sai3:
			addi $t0, $t0, 4
			j loop2
		sai2:
		
		jr $ra
