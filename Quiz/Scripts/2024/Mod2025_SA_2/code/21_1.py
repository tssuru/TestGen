try:
    a, b, c = 6, 9, 8
    def h(a, b, c=7):
        print(a, b, c, end=" ")
    
    h(c=0, b=1, a=3)
    print(a, b, c)
except: print('error')
