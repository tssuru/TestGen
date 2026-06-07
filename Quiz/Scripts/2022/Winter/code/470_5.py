try:
    
    a,b,c=7,8,9
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(0,c=4)
    print(a,b,c)
    
except: print('error')
