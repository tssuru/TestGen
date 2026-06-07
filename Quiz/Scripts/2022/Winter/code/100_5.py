try:
    
    a,b,c=6,8,9
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(2,c=1,b=3)
    print(a,b,c)
    
except: print('error')
