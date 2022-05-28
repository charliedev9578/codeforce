def canDivide(kilos):
    if kilos > 2 and kilos % 2 == 0:
        print('YES')
    else:
        print('NO')


x = input().strip()
canDivide(int(x))
