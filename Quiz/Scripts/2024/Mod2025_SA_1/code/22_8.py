try:
    a, b, c = 7, 9, 6
    def f(a, b=8, c):
        print(a, b, c, end=" ")
    
    f(2, c=0, b=1)
    print(a, b, c)
except: print('error')
