try:
    a,b,c=0,4,6
    def g(b):
        global c
        a=1
        b=3
        c=2
        return a+b+c
    
    a,b,c=7,1,5
    print(g(b),a,b,c)
    
except: print('error')
