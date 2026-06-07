try:
    a,b,c=4,7,3
    def h(b):
        global c
        a=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=5,6,1
    print(h(b),a,b,c)
    
except: print('error')
