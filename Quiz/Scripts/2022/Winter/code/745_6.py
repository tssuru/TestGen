try:
    a,b,c=4,7,9
    def g(a):
        a=5
        b=1
        c=1
        return a+b+c
    
    a,b,c=8,4,6
    print(g(b),a,b,c)
    
except: print('error')
