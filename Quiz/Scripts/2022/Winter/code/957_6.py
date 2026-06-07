try:
    a,b,c=7,3,8
    def g(b):
        a=1
        b=4
        c=5
        return a+b+c
    
    a,b,c=0,9,6
    print(g(b),a,b,c)
    
except: print('error')
