try:
    a,b,c=4,8,0
    def g(b):
        a+=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=6,5,3
    print(g(b),a,b,c)
    
except: print('error')
