try:
    
    a,b,c=6,8,9
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(3,5,b=1)
    print(a,b,c)
    
except: print('error')
