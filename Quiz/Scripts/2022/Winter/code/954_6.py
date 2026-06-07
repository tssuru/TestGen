try:
    a,b,c=0,4,5
    def g(a):
        a=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=3,7,6
    print(g(b),a,b,c)
    
except: print('error')
