try:
    a,b,c=2,3,9
    def g(b):
        global c
        a=1
        b+=3
        c=4
        return a+b+c
    
    a,b,c=0,4,1
    print(g(b),a,b,c)
    
except: print('error')
