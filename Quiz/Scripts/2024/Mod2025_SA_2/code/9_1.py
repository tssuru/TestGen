try:
    a, b, c = 7, 9, 8
    def g(a, b, c=6):
        print(a, b, c, end=" ")
    
    g(a=1, 2, b=4)
    print(a, b, c)
except: print('error')
