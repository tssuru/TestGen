try:
    a,b,c=3,9,2
    def h(a):
        global c
        a=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=8,7,1
    print(h(b),a,b,c)
    
except: print('error')
