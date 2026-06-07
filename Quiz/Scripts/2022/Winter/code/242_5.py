try:
    
    a,b,c=7,9,8
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(b=5,c=2,0)
    print(a,b,c)
    
except: print('error')
