try:
    a, b, c = 7, 6, 8
    def f(a, b, c):
        print(a, b, c, end=" ")
    
    f(a=0, 3, c=4)
    print(a, b, c)
except: print('error')
