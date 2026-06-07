try:
    a, b, c = 7, 6, 9
    def h(a, b, c):
        print(a, b, c, end=" ")
    
    h(3, c=2, b=0)
    print(a, b, c)
except: print('error')
