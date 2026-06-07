try:
    a, b, c = 7, 8, 6
    def h(a, b, c):
        print(a, b, c, end=" ")
    
    h(5, c=1, b=2)
    print(a, b, c)
except: print('error')
