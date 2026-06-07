try:
    a,b,c=4,6,8
    def h(b):
        global c
        a*=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=7,3,9
    print(h(b),a,b,c)
    
except: print('error')
