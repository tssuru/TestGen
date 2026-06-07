try:
    a,b,c=2,3,4
    def g(b):
        a=5
        b+=2
        c=1
        return a+b+c
    
    a,b,c=9,5,3
    print(g(b),a,b,c)
    
except: print('error')
