try:
    a,b,c=4,7,2
    def h(b):
        global c
        a*=2
        b=3
        c=3
        return a+b+c
    
    a,b,c=3,1,2
    print(h(b),a,b,c)
    
except: print('error')
