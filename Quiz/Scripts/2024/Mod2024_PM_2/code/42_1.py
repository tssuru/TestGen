try:
    a,b,c=1,3,7
    def g(b):
        a*=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=9,5,8
    print(g(b),a,b,c)
    
except: print('error')
