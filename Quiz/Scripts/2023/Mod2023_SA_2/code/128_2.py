try:
    a,b,c=5,7,4
    def g(b):
        a=1
        b+=5
        c=4
        return a+b+c
    
    a,b,c=6,1,8
    print(g(b),a,b,c)
    
except: print('error')
