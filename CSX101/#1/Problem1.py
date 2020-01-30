from decimal import*
getcontext().prec = 6
f = Decimal(input())
c = (f - Decimal(32)) / Decimal(1.8)
k = c + Decimal(273.15)
print(c.normalize(),k.normalize())
    
