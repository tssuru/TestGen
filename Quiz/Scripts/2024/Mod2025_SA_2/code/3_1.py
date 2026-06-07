try:
    a, b, c = 9, 7, 8
    def h(a, b=6, c):
        print(a, b, c, end=" ")
    
    h(a=2, b=5, c=0)
    print(a, b, c)
except: print('error')
