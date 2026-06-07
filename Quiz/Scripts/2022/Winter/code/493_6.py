try:
    a,b,c=9,1,3
    def g(b):
        a=4
        b+=4
        c=1
        return a+b+c
    
    a,b,c=4,6,8
    print(g(b),a,b,c)
    
except: print('error')
