try:
    a,b,c=4,3,2
    def f(b):
        a=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=9,5,0
    print(f(b),a,b,c)
    
except: print('error')
