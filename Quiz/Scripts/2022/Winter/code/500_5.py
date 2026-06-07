try:
    
    a,b,c=7,8,9
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(5,2,c=1)
    print(a,b,c)
    
except: print('error')
