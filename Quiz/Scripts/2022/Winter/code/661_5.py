try:
    
    a,b,c=9,7,8
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(3,c=1,b=0)
    print(a,b,c)
    
except: print('error')
