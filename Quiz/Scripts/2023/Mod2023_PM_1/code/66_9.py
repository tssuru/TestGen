try:
    a,b,c=5,0,2
    def f(b):
        a=4
        b*=4
        c=3
        return a+b+c
    
    a,b,c=7,6,1
    print(f(b),a,b,c)
    
except: print('error')
