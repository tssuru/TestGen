try:
    
    a,b,c=7,8,9
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(5,c=4,b=1)
    print(a,b,c)
    
except: print('error')
