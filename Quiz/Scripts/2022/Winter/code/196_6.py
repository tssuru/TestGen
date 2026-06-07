try:
    a,b,c=0,1,7
    def h(a):
        global c
        a=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=4,5,2
    print(h(b),a,b,c)
    
except: print('error')
