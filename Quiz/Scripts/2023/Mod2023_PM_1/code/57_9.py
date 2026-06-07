try:
    a,b,c=0,4,2
    def g(a):
        a=1
        b=4
        c=1
        return a+b+c
    
    a,b,c=9,3,1
    print(g(b),a,b,c)
    
except: print('error')
