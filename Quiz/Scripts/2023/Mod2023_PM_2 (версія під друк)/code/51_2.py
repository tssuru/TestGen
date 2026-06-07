try:
    a,b,c=6,7,4
    def g(a):
        a=5
        b+=4
        c=1
        return a+b+c
    
    a,b,c=0,8,9
    print(g(b),a,b,c)
    
except: print('error')
