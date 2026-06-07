try:
    
    a,b,c=6,9,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(0,4,b=3)
    print(a,b,c)
    
except: print('error')
