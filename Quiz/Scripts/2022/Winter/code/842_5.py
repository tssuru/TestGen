try:
    
    a,b,c=6,8,9
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(a=3,b=2,c=5)
    print(a,b,c)
    
except: print('error')
