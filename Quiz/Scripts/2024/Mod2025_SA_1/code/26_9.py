try:
    a,b,c=2,6,4
    def g(a):
        a*=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=1,7,0
    print(g(b),a,b,c)
except: print('error')
