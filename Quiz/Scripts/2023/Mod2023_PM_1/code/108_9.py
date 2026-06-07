try:
    a,b,c=5,4,9
    def g(b):
        a=1
        b+=5
        c=3
        return a+b+c
    
    a,b,c=7,8,3
    print(g(b),a,b,c)
    
except: print('error')
