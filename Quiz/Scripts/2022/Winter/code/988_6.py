try:
    a,b,c=0,2,5
    def g(a):
        global c
        a=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=7,9,3
    print(g(b),a,b,c)
    
except: print('error')
