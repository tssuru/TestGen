try:
    a,b,c=0,3,1
    def g(a):
        a=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=0,9,7
    print(g(b),a,b,c)
except: print('error')
