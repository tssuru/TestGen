try:
    
    a,b,c=6,7,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=4,c=2,0)
    print(a,b,c)
    
except: print('error')
