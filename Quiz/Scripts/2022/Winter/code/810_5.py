try:
    
    a,b,c=7,8,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=1,c=4,0)
    print(a,b,c)
    
except: print('error')
