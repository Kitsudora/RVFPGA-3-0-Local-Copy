
main:
    add t2, zero, M
    add t0, zero, zero
    ...
    loop1:
        bge t0, t2, endloop1
        ...
        jal SortVector
        ...
        add t0, t0, 1
        j loop1
    endloop1:
    ...
    ret

SortVector:
    ...
    la t0, A
    ...
    ret


