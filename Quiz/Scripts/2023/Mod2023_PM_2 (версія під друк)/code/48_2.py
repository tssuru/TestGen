try:
    a,b,c=6,8,1
    def h(a):
        global c
        a=2
        b=1
        c=1
        return a+b+c
    
    a,b,c=9,1,6
    print(h(b),a,b,c)
    
except: print('error')
