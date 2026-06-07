try:
    
    a,b,c=8,8,9
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(a=5,2,b=3)
    print(a,b,c)
    
except: print('error')
