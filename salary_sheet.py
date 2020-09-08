bs = float(input("Enter basic salary\n"))

if bs<=10000.00:
    hra = bs * (20.00/100.00)
    da  = bs * (80.00/100.00)
    gs  = bs + hra + da
    print(f"Gross Salary = {gs}")
elif bs<=20000.00:
    hra = bs * (25.00/100.00)
    da  = bs * (90.00/100.00)
    gs  = bs + hra + da
    print(f"Gross Salary = {gs}")
elif bs>20000.00:
    hra = bs * (30.00/100.00)
    da  = bs * (95.00/100.00)
    gs  = bs + hra + da
    print(f"Gross Salary = {gs}")
else:
    print("welcome")