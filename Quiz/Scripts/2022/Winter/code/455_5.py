try:
    
    a,b,c=6,8,9
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(c=4,b=5,c=2)
    print(a,b,c)
    
except: print('error')
