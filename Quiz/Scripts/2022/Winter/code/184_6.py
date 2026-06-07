try:
    a,b,c=3,6,4
    def g(a):
        global c
        a=2
        b*=4
        c=1
        return a+b+c
    
    a,b,c=0,2,9
    print(g(b),a,b,c)
    
except: print('error')
