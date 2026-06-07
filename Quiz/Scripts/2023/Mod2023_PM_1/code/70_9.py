try:
    a,b,c=9,8,1
    def f(b):
        a+=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=7,0,1
    print(f(b),a,b,c)
    
except: print('error')
