try:
    a, b, c = 8, 7, 9
    def h(a, b, c):
        print(a, b, c, end=" ")
    
    h(1, c=2, b=4)
    print(a, b, c)
except: print('error')
