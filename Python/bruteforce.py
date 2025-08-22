# To crack a 10-digit password using brute force not successful in most of the cases
def crackcode(n): #10-digit
    for i in range(10000000000):
        if i==n:
            print("Your Paassword",i)
            break
    
n=int(input("Enter password to be cracked: "))
crackcode(n)

