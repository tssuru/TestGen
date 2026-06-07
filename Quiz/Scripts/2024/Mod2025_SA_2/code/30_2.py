try:
    a,b,c=0,3,5
    def g(b):
        a*=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=6,2,1
    print(g(b),a,b,c)
except: print('error')
