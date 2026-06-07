try:
    a,b,c=3,4,2
    def f(b):
        global c
        a+=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=7,1,8
    print(f(b),a,b,c)
    
except: print('error')
