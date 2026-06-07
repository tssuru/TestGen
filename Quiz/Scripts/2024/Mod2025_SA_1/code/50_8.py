try:
    a, b, c = 7, 7, 9
    def g(a, b, c=6):
        print(a, b, c, end=" ")
    
    g(5, a=0)
    print(a, b, c)
except: print('error')
