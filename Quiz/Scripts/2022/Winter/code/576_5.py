try:
    
    a,b,c=6,8,7
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(2,1,5)
    print(a,b,c)
    
except: print('error')
