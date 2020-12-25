N = int ( input ( ) )  # 5
 
colors = input ( )  # R R R R R
 
sol = 0
 
for i in range ( N - 1 ):  # i = 0 to i = 4
    if colors[ i ] == colors[ i + 1 ]:
        sol += 1
 
print(sol)