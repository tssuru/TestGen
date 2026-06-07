try:
    
    a,b,c=9,6,8
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(3,c=4,b=5)
    print(a,b,c)
    
except: print('error')
