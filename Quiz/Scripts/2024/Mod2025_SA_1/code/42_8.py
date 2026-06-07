try:
    a, b, c = 9, 6, 8
    def h(a, b=6, c):
        print(a, b, c, end=" ")
    
    h(b=0, c=5, 1)
    print(a, b, c)
except: print('error')
