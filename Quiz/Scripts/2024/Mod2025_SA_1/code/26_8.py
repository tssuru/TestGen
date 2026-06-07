try:
    a, b, c = 7, 6, 9
    def h(a, b=8, c):
        print(a, b, c, end=" ")
    
    h(a=3, 1, c=5)
    print(a, b, c)
except: print('error')
