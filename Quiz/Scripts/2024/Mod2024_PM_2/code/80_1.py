try:
    a,b,c=0,8,3
    def g(b):
        a=3
        b*=1
        c=2
        return a+b+c
    
    a,b,c=4,9,2
    print(g(b),a,b,c)
    
except: print('error')
