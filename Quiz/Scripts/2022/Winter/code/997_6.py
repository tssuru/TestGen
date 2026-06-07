try:
    a,b,c=2,3,6
    def h(a):
        global c
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=0,8,9
    print(h(b),a,b,c)
    
except: print('error')
