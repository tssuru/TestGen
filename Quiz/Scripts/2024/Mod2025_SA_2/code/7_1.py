try:
    a, b, c = 8, 6, 9
    def h(a, b=8, c=7):
        print(a, b, c, end=" ")
    
    h(b=1, c=5, 0)
    print(a, b, c)
except: print('error')
