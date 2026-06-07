try:
    a,b,c=2,6,7
    def g(a):
        a=1
        b*=4
        c=2
        return a+b+c
    
    a,b,c=5,1,3
    print(g(b),a,b,c)
    
except: print('error')
