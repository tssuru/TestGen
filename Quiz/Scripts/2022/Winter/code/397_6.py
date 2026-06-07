try:
    a,b,c=9,2,4
    def f(b):
        a-=4
        b=3
        c=5
        return a+b+c
    
    a,b,c=5,8,6
    print(f(b),a,b,c)
    
except: print('error')
