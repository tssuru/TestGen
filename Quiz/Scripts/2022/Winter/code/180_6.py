try:
    a,b,c=2,6,4
    def g(a):
        a=3
        b+=5
        c=4
        return a+b+c
    
    a,b,c=5,1,3
    print(g(b),a,b,c)
    
except: print('error')
