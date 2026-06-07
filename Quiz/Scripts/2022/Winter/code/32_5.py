try:
    
    a,b,c=9,7,8
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(1,4,b=0)
    print(a,b,c)
    
except: print('error')
