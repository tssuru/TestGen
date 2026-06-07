try:
    
    a,b,c=7,8,9
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(b=5,c=1,0)
    print(a,b,c)
    
except: print('error')
