try:
    a,b,c=1,4,9
    def g(a):
        a=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=3,5,0
    print(g(b),a,b,c)
    
except: print('error')
