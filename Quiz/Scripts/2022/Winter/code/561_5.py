try:
    
    a,b,c=6,8,9
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(3,2)
    print(a,b,c)
    
except: print('error')
