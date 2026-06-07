try:
    a,b,c=1,8,6
    def f(b):
        a=4
        b+=3
        c=1
        return a+b+c
    
    a,b,c=0,3,7
    print(f(b),a,b,c)
    
except: print('error')
