try:
    a,b,c=0,5,8
    def f(b):
        a=1
        b*=4
        c=5
        return a+b+c
    
    a,b,c=6,7,1
    print(f(b),a,b,c)
    
except: print('error')
