try:
    a,b,c=5,8,0
    def h(b):
        global c
        a=3
        b=2
        c=3
        return a+b+c
    
    a,b,c=9,6,7
    print(h(b),a,b,c)
    
except: print('error')
