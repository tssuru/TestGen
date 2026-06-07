try:
    
    a,b,c=6,6,8
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(4,b=5)
    print(a,b,c)
    
except: print('error')
