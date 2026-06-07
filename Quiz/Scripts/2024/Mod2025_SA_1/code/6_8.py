try:
    a, b, c = 9, 8, 6
    def h(a, b=7, c=7):
        print(a, b, c, end=" ")
    
    h(b=5, a=2, c=4)
    print(a, b, c)
except: print('error')
